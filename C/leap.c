#include<stdio.h>

void isLeap(int);

void main(void){
	
	int year = 2000;

	isLeap(year);	

}

void isLeap(int year){
	
	printf("%d \n", year);
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf("it is a leap year");
	
	}else{
		printf("it is not a leap year");
	}
}

	