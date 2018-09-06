//Author : Abdul Alim Shakir
#include<iostream>
using namespace std;
int main()
{
    string str;
    int n,i,counter=0,cnt=0;
    cin>>str;
    n=str.length();
    for(i=0;i<n;i++)
    {
        if(str[i]=='0')
        {
            cnt=0;
            counter++;
        }
        else
        {
            counter = 0;
            cnt++;
        }
        if(counter>=7)
        {
           cout<<"YES"<<endl;
           return 0;
        }
        else if(cnt>=7)
        {
           cout<<"YES"<<endl;
           return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
