#include<bits/stdc++.h>
using namespace std;
#define max1 200000
int main()
{
    int n,m,freq[max1]={},max=0,freq_id=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        freq[m]++;
    }
    for(int i=0;i<max1;i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
            freq_id=i;
        }
    }
    cout<<freq_id;
}