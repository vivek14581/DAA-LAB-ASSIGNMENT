#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,mid,low,high,compare,key,i;
    cin>>tc;
    while(tc--)
    {
        compare=1;
        cin>>n;
        low=0;
        high=n-1;
        vector<int> arr(n);

        for(i=0;i<n;i++)
            cin>>arr[i];

        cin>>key;

        while(low<high)
        {
            mid=low+(high-low)/2;
            if(arr[mid]==key)
                break;
            else if(arr[mid]>key)
                high=mid-1;
            else
                low=mid+1;
            compare++;
        }
        if(low>=high)
            cout<<"Not present"<<endl;
        else
            cout<<"Present "<<compare<<endl;
    }
    return 0;
}
