#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max1 = 0,flag=0;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++)
    {
        //max1 = max(max1, arr[i]);//another process
        if(arr[i]>max1){
            max1=arr[i];
        }

    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]== max1)
        flag++;
    }
    cout<<flag;

}