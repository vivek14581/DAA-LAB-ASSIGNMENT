#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;

    cin>>m;

    int arr[m];

    for(int i = 0; i<m; i++)
        cin>>arr[i];

    cin>>n;

    int brr[n];

    for(int i = 0; i<n; i++)
        cin>>brr[i];

    int i = 0, j = 0;

    while(i < m && j < n)
    {
        if(arr[i] == brr[j])
            cout<<arr[i]<<" ";

        else if(arr[i] < brr[j])
            j--;

        else
            i--;

        i++;
        j++;
    }
    return 0;
}
