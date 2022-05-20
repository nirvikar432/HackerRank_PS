#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,r;
    cin>>N;
    int arr[N];
    for(int j=0;j<N;j++)
    {
        cin>>arr[j];
    }
    for(int i=0;i<N;i++)
    {
        r=arr[i]%5;
        if(r>=3&&arr[i]>=38)
            arr[i]+=(5-r);
    }
    for(int i=0;i<N;i++)
        cout<<arr[i]<<endl;
}
