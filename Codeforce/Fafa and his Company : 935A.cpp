//Author : Abdul Alim Shakir
#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cin>>n;
    if(n>=2)
    {
       for(i=2;i<=n;i++)
       {
           if(n%i==0)
           {
               count++;
           }
       }
       cout<<count<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
