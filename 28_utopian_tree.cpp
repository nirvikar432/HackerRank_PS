#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ht=1;
    cin>>n;
    for(int i=0;i<n;i++,ht=1)
    {
        cin>>m;
        for(int j=1;j<=m;j++)
        {
            if(j%2!=0)
            {
            ht*=2;
            }
            else if(j%2==0)
            {
            ht+=1;
            }
        }
        cout<<ht<<endl;
        
    }
    
}