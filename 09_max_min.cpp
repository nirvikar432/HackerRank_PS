#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int arr[5],sum[5]={0,0,0,0,0},great=0,small;//long is used in the test case of 64 bit integer
    for(int i = 0; i<5; i++)
    {
        cin>>arr[i];
    }
    
    for(int i = 0; i<5; i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i!=j)
            sum[i] = sum[i]+arr[j];
        }
    }
    for(int i=0;i<5;i++)
    {
        great = max(great, sum[i]);
    }
    small=great;
    for(int i=0;i<5;i++)
    {
        small = min(small, sum[i]);
    }        
    cout<<small<<" "<<great;
}