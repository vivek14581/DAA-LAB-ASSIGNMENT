 #include<bits/stdc++.h>
using namespace std;
int swaps = 0;
int comparison = 0;
int partioning(vector<int>& arr,int l ,int h)
{
    int pivot = arr[h], i = (l - 1);

    for(int j = l; j <= h-1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;

            swap(arr[j],arr[i]);

            swaps++;

            comparison++;
        }
    }

    swap(arr[i+1],arr[h]);
    swaps++;

    return i+1;

}

void quicksort(vector<int>& arr,int low, int high)
{
    if(low < high)
    {
        comparison++;
        int p = partioning(arr, low , high);

        quicksort(arr, low, p - 1);

        quicksort(arr, p + 1, high);
    }
}
int main()
{
    int i, j, n, tc;

    cin>>tc;

    while(tc--)
    {
        cin>>n;

        vector<int> arr(n);

        for(i=0;i<n;i++)
            cin>>arr[i];

        quicksort(arr, 0, n-1);

        cout<<"\nsorted array: ";

        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";

        cout<<"\ncomparison = "<<comparison;
        cout<<"\nswaps = "<<swaps<<"\n";
    }

    return 0;
}
