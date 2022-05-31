#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m,d,flag=0,k=1;
    cin>>n;
    int arr[n];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cin>>d>>m;
    for(i=m;i<=n;i++)
    {
        int sum=0;
        for(j=k;j<=i;j++)
        {
            sum+=arr[j];
        }
        if(sum==d)
        flag++;
        k++;
    }
    cout<<flag;
}