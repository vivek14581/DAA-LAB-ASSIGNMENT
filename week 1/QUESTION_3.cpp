#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,sp,ep,compare,key,i;
    cin>>tc;
    while(tc--)
    {
        compare=1;
        sp=2;
        cin>>n;
        vector<int> arr(n);

        for(i=0;i<n;i++)
            cin>>arr[i];

        cin>>key;

        if(key>=arr[0]&&key<arr[2])
        {
            sp=0;
            ep=2;
            n=0;
        }

        for(ep=sp*2;ep<n;ep=ep*2)
        {
            if(key>=arr[sp]&&key<arr[ep])
                break;
            compare+=2;
            sp=ep;
        }
        if(ep>n)
            ep=n-1;

        for(i=sp;i<=ep;i++)
        {
            if(arr[i]==key)
                break;
            compare++;
        }
        if(i>ep)
            cout<<"Not present and comparison="<<compare<<endl;
        else
            cout<<"Present and comparison="<<compare<<endl;

    }
    return 0;
}
