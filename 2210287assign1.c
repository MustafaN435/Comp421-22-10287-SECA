#include <unistd.h>
#include <stdio.h>
int main()
{

int n1 = fork();
int n2 = fork();

if (n1 > 0 && n2 > 0 ){
printf("Parent\n");
printf("%d %d \n",n1,n2);
printf("My id is: %d \n", getpid());
}

else if (n1 == 0 && n2>0) {
printf("first child \n");
printf("%d %d \n", n1, n2);
printf("My id is : %d \n",getpid());
}

else if (n1 > 0 && n2 ==0) {
printf("second child \n");
printf("%d %d \n", n1, n2);
printf("My id is : %d \n",getpid());
}

else {
printf("third child \n");
printf("%d %d \n", n1, n2);
printf("My id is : %d \n",getpid());
}
return 0 ;
}
