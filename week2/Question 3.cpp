#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, tc, key, res, n;

    cin>>tc;

    while(tc--)
    {
        res=0;

        cin>>n;

        int arr[n];

        for(i=0;i<n;i++)
            cin>>arr[i];

        cin>>key;

        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(abs(arr[i]-arr[j]) == key)
                    res++;
            }
        }

        cout<<res<<endl;
    }
    return 0;
}
