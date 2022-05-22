#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,k,b,sum=0;
    cin>>N>>k;
    int arr[N];
    for (int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cin>>b;
    for(int i=0;i<N;i++)
    {
        sum+=arr[i];
    }
    if((sum/2)==b)
    cout<<(arr[k])/2;
    else
    cout<<"Bon Appetit";
}