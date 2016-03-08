#include<stdio.h>
int isVowel(char x)
{
switch(x)
{
case 'a' :
return(1);
case 'e' :
return(1);
case 'i' :
return(1);
case 'o' :
return(1);
case 'u' :
return(1);
}
return(0);
}

int main()
{
char a[6]= “abcde”;
int i;
for(i=0;i<6;i++)  {
if(isVowel(a[i]))
a[i]=a[i]+1;
}
printf(“%s\n”,a);
}
