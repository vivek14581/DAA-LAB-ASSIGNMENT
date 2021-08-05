#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, tc, low, high, mid, n, key, frequency;

    cin>>tc;

    while(tc--)
    {
        cin>>n;

        vector<int> arr(n);

        for(i=0;i<n;i++)
            cin>>arr[i];

        cin>>key;

        low=0;
        high=n-1;

        while(low<high)
        {
            mid=low+(high-low)/2;

            if(arr[mid] == key)
                break;
            else if(arr[mid] > key)
                high = mid-1;
            else
                low = mid+1;
        }
        if(low>=high)
            cout<<"Not Present"<<"\n";
        else
        {
            frequency=0;

            i=mid;
            while(i>=0 && arr[i--] == key)frequency++;

            i=mid+1;
            while(i<n && arr[i++] == key)frequency++;

            cout<<key<<" -> "<<frequency<<"\n";
        }
    }
    return 0;
}
