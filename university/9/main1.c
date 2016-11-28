#include<stdio.h>

void sort3(int* n1,int* n2,int* n3){
	int x;
	if(*n1>=*n2){
		if(*n1>=*n3 && *n2<*n3){
			x=*n2;*n2=*n3;*n3=x;
		}
		else if(*n3>*n1){
			x=*n1;*n1=*n3;*n3=*n2;*n2=x;
		}
	}
	else{
		if(*n1>=*n3){
			x=*n1;*n1=*n2;*n2=x;
		}
		else if(*n3>=*n1 && *n3<=*n2){
			x=*n1;*n1=*n2;*n2=*n3;*n3=x;
		}
		else if(*n3>*n2){
			x=*n1;*n1=*n3;*n3=*n2;*n3=x;
		}
	}
}

int main(void){
	int a,b,c;
	printf("O‚Â‚Ì®”„");
	scanf("%d%d%d",&a,&b,&c);
	sort3(&a,&b,&c);
	printf("%d %d %d\n",a,b,c);
	return 0;
}
