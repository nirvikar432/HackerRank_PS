#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,k,flag=0;
    cin>>N>>k;
    int arr[N];
    for(int i = 0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if((arr[i]+arr[j])%k==0)
            {
                flag++;
            }
        }
    }
    cout<<flag;
}