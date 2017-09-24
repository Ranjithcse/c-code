#include<stdio.h>
#include<string.h>
void main()
{
 char str[100];
 int len,i;
 printf("Enter the string ");
 gets(str);
 len=strlen(str);len--;
 while(len!=0)
 {
   printf("%c",str[len]);len--;
 }
 printf("%d",len);
}
