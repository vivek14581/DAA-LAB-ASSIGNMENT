#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, tc, comparison, swaps, pos;

    cin>>tc;

    while(tc--)
    {
        comparison = 0;
        swaps = 0;

        cin>>n;

        int arr[n];

        for(i=0;i<n;i++)
            cin>>arr[i];

        for(i=0;i<n-1;i++)
        {
            pos = i;

            for(j=i+1;j<n;j++)
            {
                if(arr[i] > arr[j])
                    pos = j;

                comparison++;
            }

            swap(arr[i],arr[pos]);
            swaps++;
        }

        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";

        cout<<"\nComparisons = "<<comparison;
        cout<<"\nSwaps = "<<swaps<<endl;
    }

    return 0;
}
