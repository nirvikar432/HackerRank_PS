#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,rec=5,like=0,liked=0;
    cin>>N;
    for(int i =0;i<N;i++)
    {
        like=(floor(rec/2));
        liked+= like;
        rec = like*3;
    }
    cout<<liked;
}