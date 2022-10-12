#include <stdio.h>
//while

//중첩 무한 루프


void main(){
	int a=0, sum=0;
	while(a<100){
		a++;
		printf("Hello~! %d\n",a);
		sum+=a;
		printf("result %d : ",a,sum);
	}
	a=100;
	sum=0;
	while(a>0){
		sum+=a;
		printf("result %d : ",a,sum);
		a--;
	}
}