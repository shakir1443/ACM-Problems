#include<iostream>
#include<cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,d,i,s[100],j,m=0;
  cin>>n>>d;
  for(i=1;i<=n;i++)
  {
      cin>>s[i];
  }
  sort(s+1,s+1+n);
  for(i=1;i<=n;i++)
  {
      for(j=i;j<n;j++)
      {
           if(s[j]-s[i]>d) break;
          {
                 m=min(m,n-j+i-1);
          }
      }

  }
  cout<<m<<endl;
  return 0;
}
