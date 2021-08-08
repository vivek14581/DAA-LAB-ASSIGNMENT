#include<bits/stdc++.h>
using namespace std;
void mergearray(vector<int>& arr,int mid ,int low, int high)
{
    int i = low, j = mid+1, k = low;

    vector<int> temp;

    temp=arr;

    while(i <= mid && j<= high)
    {
        if(temp[i] < temp[j])
        {
            arr[k] = temp[i];
            i++;
        }

        else
        {
            arr[k] = temp[j];
            j++;
        }

        k++;
    }

    while(i <= mid)
    {
        arr[k] = temp[i];
        i++;
        k++;
    }

    while(j <= high)
    {
        arr[k] = temp[j];
        j++;
        k++;
    }
}
void mergesort(vector<int>& arr, int low, int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        mergearray(arr,mid,low,high);
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

        mergesort(arr,0,n-1);

        for(i=0;i<n;i++)
        {
            if(arr[i] == arr[i+1])
                break;
        }

        if(i >= n-1)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }

    return 0;
}
