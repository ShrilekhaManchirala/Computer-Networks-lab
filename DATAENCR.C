#include<stdio.h>
int main()
{
int i,x;
char str[100];
clrscr();
printf("\n Please enter a string:\t");
gets(str);
 printf("\n Please choose following options:\n");
printf("1=Encrypt the string.\n");
printf("2=Decrypt the string.\n");
scanf("%d",&x);
switch(x)
{
case 1:
for(i=0;(i<100&&str[i]!='\0');i++)
str[i]=str[i]+3;
printf("\n Encrypted String:%s\n",str);
break;
case 2:
for(i=0;(i<100&&str[i]!='\0');i++)
str[i]=str[i]-3;
printf("\n Decrypted string:%s\n",str);
break;
default:
printf("\n Error\n");
}
return 0;
}