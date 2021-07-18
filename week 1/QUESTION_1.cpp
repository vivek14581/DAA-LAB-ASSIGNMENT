#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,compare,i,key;
    cin>>tc;
    while(tc--)
    {
        compare=1;
        cin>>n;
        vector<int> arr(n);

        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        cin>>key;

        for(i=0;i<n;i++)
        {
            if(arr[i]==key)
                break;
            compare++;
        }
        if(i==n)
            cout<<"Not present"<<endl;
        else
            cout<<"Present "<<compare<<endl;
    }
    return 0;
}
