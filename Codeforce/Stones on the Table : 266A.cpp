#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,counter=0;
    char str[150];
    cin>>n;
    cin>>str;
    for(i=1;i<n;i++)
    {
        if(str[i-1]==str[i])
        {
           counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
