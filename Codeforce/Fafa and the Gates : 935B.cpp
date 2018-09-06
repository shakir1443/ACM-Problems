//Author : Abdul Alim Shakir
#include<iostream>
using namespace std;
int main()
{
    int n,i,x=0,y=0,count=0;
    char str[100000];
    int xcor[100000],ycor[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(i=0;i<n;i++)
    {
        if(str[i]=='U')
        {
            y++;
        }
        ycor[i]=y;
        if(str[i]=='R')
        {
            x++;
        }
        xcor[i]=x;
    }
     for(i=1;i<n;i++)
     {
          if(xcor[i]==ycor[i] && xcor[i+1]-xcor[i-1] == 2 || xcor[i]==ycor[i] && ycor[i+1]-ycor[i-1] ==2)
          {
              count++;
          }
     }
    cout<<count<<endl;
    return 0;
}
