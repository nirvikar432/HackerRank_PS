#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,m;
    cin>>N>>m;
    int arr[N];
    int gt=m;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        gt=max(gt,arr[i]);
    }
    if(gt<=m)
    {
        cout<<"0";
    }
    else
    {
        cout<<gt-m;
    }
}