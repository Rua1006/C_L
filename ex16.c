#include <stdio.h>

//정수를 입력받아 그 수가 소수인지 판별하는 프로그램을 작성하라(for문 이용)
//순서도를 반드시 만들 것
//소수 : 특정 숫자로 나누어 떨어지지 않는 수
//2,3,5,7,11,13
//카운트변수와 입력을 숫자를 나누어 떨어지면,
//만약, 그 카운트변수의 값이 입력 한 수와 일치하다면, 그 수는 소수임

void main(){
	int a;
	printf("prime discriminations\' number input :");
	scanf("%d",&a);
	for(int i=2;i<=a;i++){
		if(a%i==0){
			if(a==i) {
			printf("\n input number is prime");
			return 0;
		}
		else break;
		}
	}
	printf("\ninput number is not prime");
}