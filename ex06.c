#include <stdio.h>

void main(){
	int sum=0;
	for(int a=1;a<=100;a++){
		sum+=a;
	}printf("Total : %d", sum);
	
	printf("\n");
	
	for(int a=0; a<=100; a+=2){
		sum+=a;
	}printf("Total2 : %d",sum);
	
	printf("\n");
	
	for(int a=0; a<=100; a++){
		if(a%3==0) sum+=a;
	}printf("Total3 : %d",sum);
	
	printf("\n");
	
	for(int a=0; a<5; a++){
		for(int b=0; b<=a; b++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	//infinite loop : always condition true
	for(;;){
		
	}
}
