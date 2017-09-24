#include<stdio.h>
#include<string.h>
void main()
{
 char string[100];
 int length,temp,count;
 printf("Enter the string\t");
 gets(string);
 length=strlen(string);
 temp=--length;
 for(count=0;count<length/2;count++)
 { 
    if(string[count]==string[temp])
     {}
    else
     {
      printf("NOT A PALINDROME");
       break;
     }
     temp--;
 }
if(count==temp)
printf("palindrome");
}
