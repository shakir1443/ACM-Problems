//Author : Abdul Alim Shakir
#include<iostream>
using namespace std;
int main()
{
    int n, s[5000],counter=0,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    for(i=1;i<=n;i++)
    {
        j = s[i];
        if(j==i)
            continue;
        k = s[j];
        if(k==i)
            continue;
        if(i==s[k])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
   cout<<"NO"<<endl;
   return 0;
}
