//Author : Abdul Alim Shakir
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int i;
 int count_lchar,count_uchar,mid_length;
 char str[100],first,last[99]={0};
 count_lchar = 0;
 count_uchar = 0;
 scanf("%s",&str);
 for(i=0;str[i]!='\0';i++)
  {
  if (str[i] >= 'a' && str[i] <= 'z')
  {
      count_lchar++;
  }
  if (str[i] >= 'A' && str[i] <= 'Z')
  {
      count_uchar++;
  }
  }
  if(count_uchar>count_lchar)
  {
      for(i=0;str[i]!='\0';i++){
      str[i]&='_';
      }
  }
  if(count_lchar>count_uchar)
  {
      for(i=0;str[i]!='\0';i++){
            str[i]|=' ';
      }
  }
  if(count_lchar==count_uchar)
  {
      for(i=0;str[i]!='\0';i++){
            str[i]|=' ';
      }
  }
  printf("%s\n",str);
 return 0;
}

