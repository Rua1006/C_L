#include <stdio.h>

//과목별 총점, 과목별 평균, 과목별 최대값, 과목별 최소값을 출력
//번호   국어 영어 수학 총점 평균 학점 석차

//총점 평균 최대값 최소값

void main(){
	int jum[5][4] = {{10,30,40,20},{15,35,45,25},{55,35,25,15},{95,85,55,75},{65,75,85,95}};
	int tot[5] = {0,0,0,0,0};
	float avg[5] = {0.0f,0.0f,0.0f,0.0f,0.0f};
	char hak[5] = {'A','A','A','A','A'};
	int rank[5] = {1,1,1,1,1};
	int hap[3] = {0,0,0};
	float py[3] = {0.0f,0.0f,0.0f};
	int max[3] = {0,0,0};
	int min[3] = {100,100,100};
	
//	int avg=("(%d+%d+%d)/3 =",tot/3);
//	int hak;
//	int rank;
	
	printf("number\t\tkorean | english | mathmatics | total | average | hakjum | rank");
	printf("\n------------------------------------------------------------------------");
	for(int i=0; i<5; i++)
	printf("\n\t\t%d\t%d\t%d\t%d",jum[i][0],jum[i][1],jum[i][2],jum[i][3]);
	printf("\n------------------------------------------------------------------------");
	printf("\npart total \npart average \nMax \nMin");	
}


