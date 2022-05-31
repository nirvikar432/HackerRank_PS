#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n],arr1[n]={};
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[arr[j]]==i)
            arr1[i]=j;
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<arr1[i]<<"\n";
    }
}