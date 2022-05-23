#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int c1,c2,m1,a,b;
        cin>>c1>>c2>>m1;
        a=abs(c1-m1);
        b=abs(c2-m1);
        if(a>b)
        {
           cout<<"Cat B"<<endl; 
        }
        else if(b>a)
        {
            cout<<"Cat A"<<endl;
        }
        else
        {
            cout<<"Mouse C"<<endl;
        }
    }

}