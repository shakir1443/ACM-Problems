#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int i;
 int count_char,mid_length;
 char str[100],first,last;
 int a;
 scanf("%d",&a);
 while(a--)
 {
 count_char = 0;
 scanf("%s",&str);
 for(i=0; str[i]!='\0'; i++)
 {
   count_char++;
 }
 if(count_char<11)
    {
     printf("%s\n",str);
    }
 else
    {
       first = str[0];
       for(i=0;str[i]!='\0';i++)
       {
          last = str[i];
       }
       mid_length = count_char-2;
       printf("%c%d%c\n",first,mid_length,last);
    }
 }
 return 0;
}
