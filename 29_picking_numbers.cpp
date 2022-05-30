#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,freq[100]={},great=0,i,c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c;
        freq[c]++;
    }
    for(i=1;i<n-1;i++)
    {
        great=max(abs(freq[i]+freq[i+1]),great);
    }
    cout<<great;
}