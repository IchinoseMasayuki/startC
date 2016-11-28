#include<stdio.h>


int quotient(int num1,int num2){
	return (num1/num2);
}
	
int main(void){
	int result;
	result=quotient(123,10);
	printf("%d\n",result);
}