#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int m;
    cin>>m;

    for(int i = 0; i<m;i++)
    {   
        cin>>arr[i];
    }
    float pos=0;
    float neg=0;
    float zer=0;
    float pos1;
    float neg1;
    float zer1;
    for(int i = 0; i<m;i++)
    {
        if(arr[i] > 0)
        pos++;
        if(arr[i]==0)
        zer++;
        if(arr[i]<0)
        neg++;
    }
    pos1=(pos/m);
    neg1=(neg/m);
    zer1=(zer/m);
    cout<<fixed<<setprecision(6)<< pos1<<endl;
    cout<<fixed<<setprecision(6)<< neg1<<endl;
    cout<<fixed<<setprecision(6)<< zer1<<endl;
    return 0;
}
/*
6            
-4 3 -9 0 4 1
*/