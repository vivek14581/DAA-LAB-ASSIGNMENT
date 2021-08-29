#include<bits/stdc++.h>
using namespace std;

int partioning(vector<int>& arr,int l ,int h)
{
    int pivot = arr[h], i = (l - 1);
    for(int j = l; j <= h-1; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

int quicksort(vector<int>& arr,int low, int high, int index)
{
    if(low <= high)
    {
        int p = partioning(arr, low , high);

        if(index == p)
            return arr[p];

        else if(index < p)
            return quicksort(arr, low, p - 1, index);

        else
            return quicksort(arr, p + 1, high, index);
    }
    return -1;
}

int main()
{
    int i, j, n, k, tc;

    cin>>tc;

    while(tc--)
    {
        cin>>n;

        vector<int> arr(n);

        for(i=0;i<n;i++)
            cin>>arr[i];

        cin>>k;

        if( k > n)
            cout<<"\nNot Present";

        else
        {
            cout<<"\nKth Largest element: "<<quicksort(arr,0,n-1,n-k);
            cout<<"\nKth Smallest element: "<<quicksort(arr,0,n-1,k-1);
        }
        cout<<endl;
    }
    return 0;
}
