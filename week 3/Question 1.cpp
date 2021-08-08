#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, key, comparison, shifts, tc;

    cin>>tc;

    while(tc--)
    {
        comparison=0;
        shifts=0;

        cin>>n;

        int arr[n];

        for(i=0;i<n;i++)
            cin>>arr[i];

        for(i=1;i<n;i++)
        {
            key = arr[i];

            for(j=i-1;j>=0 && arr[j]>key;j--)
            {
                arr[j+1] = arr[j];
                shifts++;
                comparison++;
            }
            arr[j+1] = key;
            shifts++;

        }

        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";

        cout<<"\nComparisons = "<<comparison;
        cout<<"\nShifts = "<<shifts<<"\n";
    }

    return 0;
}
