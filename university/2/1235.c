#include<stdio.h>

int main(void){
	int a=0;
	char ch;

	ch=getchar();
	if(ch=='a' || ch=='b' || ch=='c')
		a=1;

	switch(a){
		case 0:
			printf("a,b,c�ȊO�����͂���܂����B\n");
			break;
		case 1:
			printf("%c�����͂���܂����B\n",ch);
			break;
	}
	return 0;
}
