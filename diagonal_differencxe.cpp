#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100][100];
    int m,n;
    cin>>m>>n;

    for(int i = 0; i<m;i++)
    {
        for(int j = 0; j< n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=0;
    int sum1 = 0;
    for(int i = 0; i<m;i++)
    {
        for(int j = 0; j< n; j++){
            if(i==j)
                sum += arr[i][j];
            if((i+j)==(m-1))
                sum1 += arr[i][j];
        }
    }
   cout << "Sum of Left Diagonal: "<< sum << endl;
   cout << "Sum of Right Diagonal: "<< sum1 << endl;

  
    cout<<abs(sum - sum1)<<endl;
    return 0;
}