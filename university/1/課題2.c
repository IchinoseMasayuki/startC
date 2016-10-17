#include <stdio.h>

int main(void){

	char ch;
	int a;

	printf("一文字を入力してください:");
	ch = getchar();


	a=ch;
	printf("%cの文字コードは0x%xです。\n",ch,a);

	return 0;
}
