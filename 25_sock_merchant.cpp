//Frequency Count Method

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[101],flag[101],i,count=0;
    cin>>n;
    for(i=0;i<101;i++)
    {
        flag[i]=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        flag[arr[i]]++;
    }
    for(i=1;i<101;i++)
    {
        count+=flag[i]/2;
    }
    cout<<count;

}