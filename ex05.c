#include <stdio.h>

void main(){
	int num1;
//	printf("Birthstone :");
//	scanf("%d",&num1);
	
/*	switch(num1){
		case 1:
		 	printf("Garnet");
		 	break;
		case 2:
			printf("Amethyst");
			break;
		case 3:
			printf("Coral");
			break;
		case 4:
			printf("Diamond");
			break;
		case 5:
			printf("Jade");
			break;
		case 6:
			printf("Pearl");
			break;
		case 7:
			printf("Ruby");	
			break;
		case 8:
			printf("Peidot");	
			break;
		case 9:
			printf("Sapphire");	
			break;						
		case 10:
			printf("Opal");	
			break;
		case 11:
			printf("Topaz");	
			break;
		case 12:
			printf("Zircon");	
			break;
		default :
			printf("Invaild value enterd");
			break;												
	}
*/	
	printf(" num :");
		scanf("%d",&num1);
	switch(num1){
		case 1:
		case 2:
			printf("birth is \'2000 before\'");
			break;
		case 3:
		case 4:
			printf("birth is \'2000 after\'");
			break;
		default:
			printf("Foreigner");
	}
	
	char blood;
	printf("blood type : ");
	scanf("%c",&blood);
	
	switch(blood){
		case 'A':
		case 'a':
			printf("\nblood type : A type");
			break;
		case 'B':
		case 'b':
			printf("\nblood type : B type");
			break;
		case 'O':
		case 'o':
			printf("\nblood type : O type");
			break;
		default :
			printf("\nblood tpye : AB type");
	}
		
		
}