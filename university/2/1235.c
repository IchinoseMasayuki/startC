#include<stdio.h>

int main(void){
	int a=0;
	char ch;

	ch=getchar();
	if(ch=='a' || ch=='b' || ch=='c')
		a=1;

	switch(a){
		case 0:
			printf("a,b,c以外が入力されました。\n");
			break;
		case 1:
			printf("%cが入力されました。\n",ch);
			break;
	}
	return 0;
}
