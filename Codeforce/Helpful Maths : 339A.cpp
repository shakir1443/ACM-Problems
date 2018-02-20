#include<iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;
int main()
{
    string str,result;
    int n,i;
    cin>>str;
    n = str.length();
    for(i=0;i<n;i++)
    {
        if(str[i]!='+')
        {
            result += str[i];
        }
    }
    sort(result.begin(), result.end());
    int m = result.length();
    for(i=0;i<=m-1;i++)
    {
        if(i == m-1)
        {
           cout<<result[i];
        }
        else
        {
            cout<<result[i]<<"+";
        }
    }
    cout<<endl;
    return 0;
}
