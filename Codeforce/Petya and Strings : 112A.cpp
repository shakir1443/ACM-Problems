//Author : Abdul Alim Shakir
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    string a,b;
    int i,ret;
    cin>>a>>b;
    for(i=0;i<a.length();i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i]|=' ';
        }
    }
    for(i=0;i<b.length();i++)
    {
        if (b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i]|=' ';
        }
    }
    ret = strcmp(a.c_str(),b.c_str());
    if(ret<0)
    {
        cout<<"-1"<<endl;
    }
    else if(ret>0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}
