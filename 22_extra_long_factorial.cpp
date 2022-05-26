#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,carry=0,len=1,prod=0,arr[5000];
    cin>>n;
    arr[0]=1;
    for(i=2;i<=n;i++)
    {
        for(int j=0;j<len;j++)
        {
            prod=arr[j]*i+carry;
            arr[j]=prod%10;
            carry=prod/10;
        }

        while(carry>0)
        {
            arr[len]=carry%10;
            carry=carry/10;
            len++;
        }  
    }
    for(i=len-1;i>=0;i--)
    {
        cout<<arr[i];
    }
}