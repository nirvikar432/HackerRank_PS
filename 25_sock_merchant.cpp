//Frequency Count Method

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,freq[101]={},i,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c;
        freq[c]++;
    }
    for(i=0;i<101;i++)
    {
        count+=freq[i]/2;
    }
    cout<<count;

}