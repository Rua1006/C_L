#include <stdio.h>
//두개의 정수를 입력받아 최대 공약수(GCD)를 출력하는 프로그램을 작성하라
//(while문 이용)
//순서도를 반드시 만들 것.
//최대공약수란 ? 두 수 이상의 공통된 약수중에서 가장 큰 수
//공통으로 두 수의 나머지가 0인(나누어 떨어지는) 수를 공약수로 하고,
//나누는 수를 증가시켜서 맨 나중까지 gcd에 남아 있는 수가 공약수 중에서
//가장 큰 값인 최대공약수가 된다.
//종료시점은 나누는 수가 두 수중에서 어느라도 더 크거나 같으면 종료
void main(){
	int a, b, devide=1, gcd=1;
	printf("number of first : ");
	scanf("%d",&a);
	printf("number of second : ");
	scanf("%d",&b);
	
	while(1){
		if(a%devide==0 && b%devide==0) gcd=devide;
		if(devide>=a || devide>=b) break;
		devide++;
	}
	printf("between %d and %d GCD : %d\n",a,b,gcd);
}