#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for(int i=0; i<4;i++)
    {
        cin>>arr[i];
    }
    if(arr[1]>arr[3]&&(arr[0]-arr[2])%(arr[1]-arr[3])==0){
        cout<<"YES";
    }
    else
    cout<<"NO";
}