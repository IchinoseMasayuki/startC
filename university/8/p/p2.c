#include<stdio.h>

int first(int x,int y,int z){
	return (x*(x>=y && x>=z)+y*(y>x && y>=z)+z*(z>x && z>y));
}

int second(int x,int y,int z){
	return (x*((x>=y && z>=x) || (y>=x && x>=z))+y*((y>x && z>=y) || (x>y && y>=z))+z*((z>x && y>z) || (x>z && z>y)));
}

int third(int x,int y,int z){
	return (x*(x<=y && x<=z)+y*(y<x && y<=z)+z*(z<x && z<y));
}

int main(void){
	int num[3];
	int i;
	printf("O‚Â‚Ì®”„");
	for(i=0;i<3;i++) scanf("%d",&num[i]);
	printf("ˆê”Ô–Ú„%d\n“ñ”Ô–Ú„%d\nO”Ô–Ú„%d\n",first(num[0],num[1],num[2]),second(num[0],num[1],num[2]),third(num[0],num[1],num[2]));
	return 0;
}