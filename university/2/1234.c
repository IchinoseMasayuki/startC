#include<stdio.h>

int main(void){
	
	char ch;

	ch=getchar();

	if(ch=='a' || ch=='b' || ch=='c')
		printf("%c�����͂���܂����B\n",ch);
	else
		printf("a,b,c�ȊO�����͂���܂����B\n");
	return 0;
}
