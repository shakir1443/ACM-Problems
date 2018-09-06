//Author : Abdul Alim Shakir
#include<stdio.h>
#include<conio.h>
#include<string.h>
void strdelc(char *s, char c)
{
   while (*s) {
      if (*s == c) {
         strcpy(s, s + 1);
      } else {
         s++;
      }
   }
}

int main()
{
 int i;
 char str[100];
 scanf("%s",&str);
  for(i=0;str[i]!=0;i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i]|=' ';
        }
    }
    strdelc(str,'a');
    strdelc(str,'e');
    strdelc(str,'i');
    strdelc(str,'o');
    strdelc(str,'u');
    strdelc(str,'y');
    for(i=0;str[i]!=0;i++)
    {
        printf(".%c",str[i]);
    }
 printf("\n");
 return 0;
}

