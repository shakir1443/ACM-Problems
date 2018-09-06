//Author : Abdul Alim Shakir
#include<iostream>
#include<cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,d,i,s[100],j,m=0,temp;
  cin>>n>>d;
  for(i=1;i<=n;i++)
  {
      cin>>s[i];
  }
  sort(s+1,s+1+n);
  m=n-1;
  for(i=1;i<=n;i++)
  {
      temp = i-1;
      for(j=i;j<=n;j++)
      {
           if(s[j]-s[i]>d)
          {
                 temp++;
          }
      }
      m=min(m,temp);
  }
  cout<<m<<endl;
  return 0;
}
