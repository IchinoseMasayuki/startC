#include<stdio.h>

void func3(int* px, int* py, int* pz){
	*px=*py=10;
	*py=*py+1;
	*pz=*px-*py;
}
int main(void){
	int x,y,z;
	func3(&x,&y,&z);
	printf("%d\n",z);
}