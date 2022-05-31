#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[15],i,j,orignNum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        orignNum=arr[i];
        int flag=0;
        while(arr[i]>0)
        {
            {
            int rem=arr[i]%10;
            if((rem!=0)&&(orignNum%rem==0))
            {
                flag++;
            }
            arr[i]=arr[i]/10;
            }
        }
        cout<<flag<<"\n";
        
    }
    
}