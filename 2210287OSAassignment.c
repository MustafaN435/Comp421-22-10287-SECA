#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
void *runner(void *param);
void *runner2(void *param);
void *runner3(void *param);
void *runner4(void *param);
char ans[100];
int main(){
 	long loop1=100000;
 	long loop2=10000;
 	long loop3= 100000;
 	char*loop4= "Press Q to terminate\n";

	pthread_t tid,tid2,tid3,tid4;
	pthread_attr_t attr,attr2,attr3,attr4;
	pthread_attr_init(&attr);  
	pthread_create(&tid,&attr, runner, (void*)loop1);

	pthread_attr_init(&attr2);  
	pthread_create(&tid2,&attr2, runner2, (void*)loop2);

	pthread_attr_init(&attr3);  
	pthread_create(&tid3,&attr3, runner3, (void*)loop3);

	pthread_attr_init(&attr4);  
	pthread_create(&tid4,&attr4, runner4, loops4);

	pthread_join(tid,NULL);
	pthread_join(tid2,NULL);
	pthread_join(tid3,NULL);

	pthread_join(tid4,NULL);
	printf("Number od 1's:%ld\n",loop1);
	printf("Number od 2's:%ld\n",loop2);
	printf("Number od 3's:%ld\n",loop3);
	return 0;
	}

void *runner(void *param){
	long i=(long)param;
	for (int k=0;k<i;k++) {printf("1");}
	pthread_exit(0);
	}

void *runner2(void *param){
	long i=(long)param;
	for (int k=0;k<i;k++) {printf("2");}
	pthread_exit(0);
	}

void *runner3(void *param){
	long i=(long)param;
	for (int k=0;k<i;k++) {printf("3");}
	pthread_exit(0);
	}

void *runner4(void *param){
	sleep(3);

	printf("\nPress Q to terminate:");
	scanf("%s",ans);
	printf("Terminated by : %s.\n",ans);
	if(ans=="q"){
	printf("hello");
	pthread_exit(0);
	}	 


}
return 0








