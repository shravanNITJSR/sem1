#include<bits/stdc++.h>
using namespace std;
int main()
    {
     int n,i,flag=0;
     cin>>n;
     for(i=2;i<=n/2;i++)
     {
       if(n%i==0)
       {
        cout<<"NO";
        flag=1;
        break;
       } 
     }if(flag==0)
     {
        cout<<"YES";
     }
     return 0;
    }
