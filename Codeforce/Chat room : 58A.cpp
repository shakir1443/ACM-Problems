//Author : Abdul Alim Shakir

#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    string hello = "hello";
    string bolo;
    bool condition = true;
    int i,j;
    cin>>bolo;
    for(i=0;i<hello.size();i++){
          if(bolo.find(hello[i])!=string::npos){
              bolo = bolo.substr(bolo.find(hello[i])+1,bolo.length());
          }
          else
          {
              condition = false;
              break;
          }
    }
    if(condition==true)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
