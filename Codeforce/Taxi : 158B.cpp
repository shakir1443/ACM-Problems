//Author : Abdul Alim Shakir

#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,group[100000],g1=0,g2=0,g3=0,g4=0,j;
    int counter = 0;
    cin>>t;
    for(j=0;j<t;j++)
    {
       scanf("%d",&group[j]);
       if(group[j]==1) g1++;
       else if(group[j]==2) g2++;
       else if(group[j]==3) g3++;
       else if(group[j]==4) g4++;
    }
    int sum = 0;
    sum = sum+g4;
    sum = sum +g3;
    //printf("Case1 : %d\n",sum);
    if(g1>0){
        g1 = g1-g3;
        g3 = 0;
        if(g1<0)
            g1=0;
    }
    if(g2%2==1){
       g2 = g2 - 1;
       sum = sum+g2/2;
       //printf("Case2 : %d\n",sum);
       g2 = 1;
       if(g1<=2){
          g1=0;
          g2=0;
          sum = sum + 1;
          //printf("Case3 : %d\n",sum);
       }
       else
       {
          g1 = g1 - 2;
          g2=0;
          sum = sum +1;
          //printf("Case4 : %d\n",sum);
       }
    }
    else if(g2%2==0){
       sum = sum+g2/2;
       //printf("Case5 : %d\n",sum);
       g2=0;
    }
    int group1;
    group1 = g1/4;
    sum = sum + group1;
    //printf("Case6 : %d\n",sum);
    if(g1%4!=0){
            g1 = g1%4;
            sum = sum + 1;
           // printf("Case7 : %d\n",sum);
            }
    printf("%d\n",sum);
    return 0;
}
