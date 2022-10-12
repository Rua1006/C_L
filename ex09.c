#include <stdio.h>
void main(){
	int arr1[10] = {80,70,65,95,90,85,75,85,65,55}; //1 depth array
	int arr2[3][4] = {{10,30,40,20},{15,35,45,25},{55,35,25,15}}; //2 depth array
	int arr3[2][3][2] ={{{50,90},{60,70},{80,50}},{{55,95},{65,75},{85,55}}}
	
	for(int i=0; i<10; i++){
		printf("%d : %d\n",i,arr1[i]);
	}
	for(int i=0; i<3; i++){
		for(int j=0;j<4;j++){
		printf("(%d,%d) : %d\n",i,j,arr2[i][j]);
		}	
	}
}