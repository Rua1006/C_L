#include <stdio.h>
//조건문
/*
if(조건식)실행문;

if(조건식)
	실행문;
	
if(조건식)
	실행문;

else
	실행문;

if(조건식){
	실행문1;
	실행문2;
}

if(조건식){
	실행문1;
	실행문2;
}

if(조건식){
	실행문1;
	실행문2;
}else{
	실행문1;
	실행문2;
*/

void main() {
	int jum=90;
	
	if(jum>=90) printf("pass");
	
	
	printf("\n");
	
	
	if(jum>=80)
		printf("pass");
	else
		printf("no pass");
	
	
	printf("\n");


	printf("GRADE :");
	
	
	if(jum>=90)
		printf("A");
	else if(jum>=80)
		printf("B");
	else if(jum>=70)
		printf("C");
	else if(jum>=60)
		printf("D");
	else
		printf("F");
		
	printf("\n");
	
	if(jum>=90||jum>=90||jum>=90){
		printf("part great student");
	}
				
}	