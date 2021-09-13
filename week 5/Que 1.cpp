#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, tc, n;

    cin>>tc;

    while(tc--)
    {
        cin>>n;

        char arr[n];

        int alp[26] = {0};

        int max_freq = 0;

        char max_ch;

        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            alp[arr[i]-97]++;

            if(alp[arr[i]-97] > max_freq)
            {
                max_freq = alp[arr[i]-97];

                max_ch = arr[i];
            }
        }

        if(max_freq == 1)
            cout<<"No duplicate present\n";

        else
            cout<<max_ch<<"->"<<max_freq<<"\n";
    }

    return 0;
}
