/******************************************************************************
  Author : Abdul Alim Shakir
*******************************************************************************/

#include <stdio.h>

int main()
{
    int t,n;
    scanf("%d",&t);
    int count=1;
    while(t--)
    {
        scanf("%d %d %d",&l,&w,&h);
        if(h<=20 && w<=20 && l<=20)
        {
            printf("Case %d: good\n",count);
        }
        else
        {
            printf("Case %d: bad\n",count);
        }
        count++;
    }
    return 0;
}
