#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10][10];
    int m;
    cin>>m;
    int j;

    for(int i = 0; i < m; i++)
    {
        for(j = m-1-i; j > 0; j--)
        {
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}