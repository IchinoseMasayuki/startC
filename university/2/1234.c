#include<stdio.h>

int main(void){
	
	char ch;

	ch=getchar();

	if(ch=='a' || ch=='b' || ch=='c')
		printf("%cが入力されました。\n",ch);
	else
		printf("a,b,c以外が入力されました。\n");
	return 0;
}
