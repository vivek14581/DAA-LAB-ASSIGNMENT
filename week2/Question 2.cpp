#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, i, j, low, high, mid, n;

    cin>>tc;

    while(tc--)
    {
        cin>>n;

        int arr[n];

        for(i=0;i<n;i++)
            cin>>arr[i];

        for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                low = j+1;
                high = n-1;

                while(low<=high)
                {
                    mid = low+(high-low)/2;

                    if(arr[mid] == arr[i]+arr[j])
                        break;
                    else if(arr[mid] > arr[i]+arr[j])
                        high = mid-1;
                    else
                        low = mid+1;
                }
                if(low<=high)
                {
                    cout<<i+1<<","<<j+1<<","<<mid+1<<"\n";
                    break;
                }
            }
            if(j<n-1)
                break;
        }
        if(i>=n-2)
            cout<<"No Sequence Found \n";
    }
    return 0;
}
