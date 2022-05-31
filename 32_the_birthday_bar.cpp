#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,d,flag=0;
    cin>>n;
    int arr[n];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cin>>d>>m;
    for(i=1;i<=n;i++)
    {
        int sum=0;
        for(j=i;j<=m+i-1;j++)//if i=1 and m=2 then j = 2 in arr 1 2 1 3 2
        {
            sum+=arr[j];
        }
        if(sum==d)
        flag++;
    }
    cout<<flag;
}