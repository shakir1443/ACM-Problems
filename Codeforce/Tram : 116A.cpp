//Author : Abdul Alim Shakir
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,a[1000],b[1000],i,j=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
          sum -= a[i];
          sum += b[i];
          if(j<sum){
             j = sum;
          }
        //printf("%d %d\n",a[i],b[i]);
    }
    printf("%d\n",j);
    return 0;
}
