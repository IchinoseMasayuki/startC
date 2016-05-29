#include<stdio.h>

int main(void)
{
	int a, b, c;/*a=底辺 b=高さ c=三角形の面積*/
	printf("底辺は？\n");
	scanf("%d", &a);/*底辺の入力*/
	printf("高さは？\n");
	scanf("%d", &b);/*高さの入力*/
	c = a*b*1/2;/*三角形の面積の公式*/
	printf("底辺=>%d \n",a);
	printf("高さ=>%d \n",b);
	printf("面積=%d \n", c);
	return 0;
}
