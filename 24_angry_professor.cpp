#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    int arr[1000];
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        int flag=0;
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            if(arr[j]<=0)
            flag++;
        }
        if(flag>=k)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
}