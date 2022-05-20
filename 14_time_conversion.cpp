#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hh,mm,ss;
    char ap,ch;
    cin>>hh>>ch>>mm>>ch>>ss>>ap;
    if((ap=='A'||ap=='a')&&(hh==12))
    {
            hh=00;
    }
    if(ap=='P'||ap=='p')
    {
        if(hh==12)
        {
            hh=12;
        }
        else
        hh=hh+12;
    }
    printf("%02d:%02d:%02d\n", hh, mm, ss);
}

    /*if(hh<10&&mm<10&&ss<10)
    cout<<0<<hh<<":"<<0<<mm<<":"<<0<<ss;
    else if(hh<10&&mm<10)
    cout<<0<<hh<<":"<<0<<mm<<":"<<ss;
    else if(hh<10&&ss<10)
    cout<<0<<hh<<":"<<mm<<":"<<0<<ss;
    else if(mm<10&&ss<10)
    cout<<hh<<":"<<0<<mm<<":"<<0<<ss;
    else if(hh<10)
    cout<<0<<hh<<":"<<mm<<":"<<ss;
    else if(mm<10)
    cout<<hh<<":"<<0<<mm<<":"<<ss;
    else if(ss<10)
    cout<<hh<<":"<<mm<<":"<<0<<ss;
    else
    cout<<hh<<":"<<mm<<":"<<ss;*/