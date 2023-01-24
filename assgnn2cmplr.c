#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int E();
int E_prime();
char expr[100];
int count;
int main()
{
count=0;
printf("\n Recursive descent parsing for following grammar \n");
printf("\nE->iE'\nE->+iE'|@ \n");
printf("\n Enter string to check: \n");
fgets(expr,100,stdin);
if(E())
{
if(expr[count]=='$')
{
printf("\n String accepted");
}
else
{
printf("\n String not accepted");
}
}
else
{
printf("\n String not accepted");
}
return 0;
}
int E()
{
if(expr[count]=='i')
{
count++;
if(E_prime())
{
return 1;
}
else
{
return 0;
}
}

else
{
return 0;
}

}
int E_prime()
{
if(expr[count]=='+')
{
count++;
if(expr[count]=='i')
{
count++;
}
if(E_prime())
{
return 1;
}
else
{
return 1;
}
}
else
{
return 0;
}
}

