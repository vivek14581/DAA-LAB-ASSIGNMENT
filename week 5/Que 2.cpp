#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, n, key;

    cin>>tc;

    while(tc--)
    {
        cin>>n;

        vector<int> arr(n);

        int i;

        for(i=0;i<n;i++)
            cin>>arr[i];

        cin>>key;

        sort(arr.begin(), arr.end());

        int l = 0, r = n-1, flag = 0;

        while(l<=r)
        {
            int x = arr[l] + arr[r];

            if(x == key)
            {
                flag = 1;
                cout<<"["<<arr[l]<<","<<arr[r]<<"] ";
                l++;
            }
            else if(x > key)
                r--;

            else
                l++;
        }

        if(flag == 0)
            cout<<"No pair exist";

        cout<<"\n";
    }

    return 0;
}
