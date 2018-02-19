#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    int a[100000],b[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
           printf("Happy Alex\n");
           return 0;
        }
    }
    printf("Poor Alex\n");
    return 0;
}
