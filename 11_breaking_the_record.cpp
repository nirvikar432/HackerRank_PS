#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],max_count=0,min_count=0,max,min;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max =arr[0];
    min =arr[0];
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max_count++;
            max=arr[i];           
        }
        if(arr[i]<min)
        {
            min_count++;
            min=arr[i];
        }
    }
    cout<<max_count<<" "<<min_count;
    
}