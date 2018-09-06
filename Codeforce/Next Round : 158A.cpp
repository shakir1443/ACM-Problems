//Author : Abdul Alim Shakir
#include<iostream>
using namespace std;
int main()
{
    int i,n,k,a[100],c=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
        if(a[i] >= a[k-1])
        {
            c++;
        }
        }
    }
    cout<<c<<endl;
    return 0;
}
