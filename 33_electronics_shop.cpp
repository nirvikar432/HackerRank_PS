#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b,i,j,sum=0,n,m;
    cin>>b>>n>>m;
    int key[n],drv[m];
    for(i=0;i<n;i++)
    {
        cin>>key[i];
    }

    for(i=0;i<m;i++)
    {
        cin>>drv[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            int sum1 =key[i]+drv[j];
            if(sum1<=b)
            {
                sum = max(sum,sum1);
            }
        }
    }
    if(sum<=b&&sum>0)
    {
        cout<<sum;
    }
    else if(sum==0)
    {
        cout<<"-1";
    }
}


/*
10 2 3
3 1
5 2 8
*/