//Author : Abdul Alim Shakir

#include<iostream>
using namespace std;
int main()
{
    string str;
    int n,i,x=0,counterplus,counterminus;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        counterplus = 0;
        counterminus = 0;
        for(int j=0;j<=2;j++)
        {
            if(str[j]!='X')
            {
            if(str[j]=='+')
            {
                counterplus++;
            }
            if(str[j]=='-')
            {
                counterminus++;
            }
            }
        }
        if(counterplus == 2)
        {
            x++;
        }
        if(counterminus == 2)
        {
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}
