//Author : Abdul Alim Shakir
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
     long long n,k,a,b,m;
     long long ans = 0,d=0;
     cin>>n>>k>>a>>b;
     while(n!=1)
     {
         if(n<k)
         {
             ans += (n-1)*a;
             n = 1;
             break;
         }
         if(n%k==0)
         {
             d = n - n/k;
             if(d*a<b)
             {
                 ans += (n-1)*a;
                 n = 1;
             }
             else
             {
                 n = n/k;
                 ans += b;
             }
         }
         else
         {
             m = n%k;
             n -= m;
             ans += m*a;
         }
     }
     cout<<ans<<endl;
     return 0;
}
