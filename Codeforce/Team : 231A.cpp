#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a[1000][3],c,counter=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
             cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        c = 0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
               c++;
            }
        }
        if(c>=2)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
