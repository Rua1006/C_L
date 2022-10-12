#include <stdio.h>
//입력된 두 수를 매개변수로 받아 큰 값을 찾아서 반환하는 함수 작성 ??

//int main(){
//	int a;
//	int b;
//	int res;
//	do{	
//		int =a;,int= b++;
//		pirntf("? %d",a>b; || a<b;);
//	while(a<b);
//	}return res;
//}


void main(){
	int a;
	int b;
	scanf("%d",&a);
	scanf("%d",&b);
	res=bignum(a,b);
	printf("big number : %d\n",res);
	
}
int bignum(int num1, int num2){
	if(num1>num2) return num1;
	else return num2;
}