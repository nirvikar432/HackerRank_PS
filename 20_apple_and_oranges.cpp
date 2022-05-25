#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,a,b,m,n,i,f_app=0,f_ora=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int app[m],ora[n];
    for(i=0;i<m;i++)
    {
        cin>>app[m];
        if((app[m]+a)>=s&&(app[m]+a)<=t)
        {
            f_app++;
        }
    }
    for(i=0;i<n;i++)
    {
        cin>>ora[n];
        if((ora[n]+b)>=s&&(ora[n]+b)<=t)
        {
            f_ora++;
        }
    }
    cout<<f_app<<endl<<f_ora;
}