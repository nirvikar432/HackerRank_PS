#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    if(y>=1700&&y<=1917) // Julian calendar
    {
        if(y%4==0)
        {
            cout<<"12.09."<<y;
        }
        else
        {
            cout<<"13.09."<<y;
        }
    }
    else if(y==1918) //31+15(14 to 28)+31+30+31+30+31+31+26=256
    {
        cout<<"26.09."<<y;
    }
    else if(y>=1919)  //Gregorian calendar
    {
        if((y%400==0)||(y%4==0&&y%100!=0))
        {
            cout<<"12.09."<<y;
        }
        else
        {
            cout<<"13.09."<<y;
        }
    }
}