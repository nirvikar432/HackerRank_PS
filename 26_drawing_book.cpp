#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    
    cin>>n>>k;
    if (n%2 == 0)
		n++;
	cout<< min((k)/2, (n - k)/2);
}