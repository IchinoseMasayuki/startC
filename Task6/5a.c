#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char ch;
	printf("�p���̏���������͂��Ȃ�������");
	ch = getchar();

	printf("�p�啶������%c", toupper(ch));
	return 0;
}
