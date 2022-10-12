#include <stdio.h>
//재귀함수를 활용하여 1~20의 합계를 계산하여 출력하는 프로그램
//재귀 함수명 : rSum
//입력 변수명 : data
//입력 값 :20

void main(){
	int data;
	scanf("%d",&data);
	printf("sum of 1~%d : %d",data,rSum(data));}
//	int rSum=0;
//	for(int a=1; a<20; a++){
//		rSum=
//	}
	
int rSum(int n){
	if(n==1)return 1;
	return n+rSum(n-1);
}

//재귀함수(recursive call function) : 자기 자신의 함수를 계속 돌아와
//호출하게 하므로써 반복 효과를 적용하는 함수