#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    if(n%2!=0)
    {
       printf("NO\n");
    }
    else if(n<=2)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    return 0;
}
