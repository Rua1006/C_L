#include <stdio.h>
#include <limit>
//변수의 데이터 타입
int main(){
	//데이터타입 변수명=초기값; -> 변수의 선언 및 초기화
	//const 데이터타입 상수명=값; -> 상수의 선언 및 값
	char a=30;//문자
	short b=50;//단정도 정수
	int c=500;//일반 정수
	long d=600;//배정도 정수
	float e=3.14;//단정도 실수
	double f=36000.127856;//배정도 실수
	int num1=10,num2=20,num3=30;
	unsigned int h=256; //부호 없는 값
	const float pi = 3.14; //상수 선언
	
	printf("a=%c\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
	printf("d=%ld\n",d);
	printf("e=%f\n",e);
	printf("f=%lf\n",f);
	printf("num1=%d, num2=%d, num3=%d",num1,num2,num3);
	printf("num2의 8진수 : %o\n",num2);
	char c1 = CHAR_MIN;//표현 범위의 하한치(_MIN)
	char c2 = CHAR_MAX;//표현 범위의 상한치(_MAX)
	short s1 = SHORT_MIN;
	short s2 = SHORT_MAX;
	int i1 = INT_MIN;
	int i2 = INT_MAX;
	return 0;	
}