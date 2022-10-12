#include <stdio.h>
//구구단을 출력하는 문제

void main(){
	for(int a=1; a<10; a++){
		printf("\n");
		for(int b=2; b<10; b++)
		printf("%d*%d=%d\t",b,a,b*a);
	}
	
}
