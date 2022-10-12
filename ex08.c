#include <stdio.h>
/*
do~while
초기값부여문
do {
	반복실행문장;
	[증감식]
	}while(조건식);
*/
void main (){
	int a=0;
	do{
		printf("-> %d\n",a);
		a++;
	} while(a<10);
	return 0;
}