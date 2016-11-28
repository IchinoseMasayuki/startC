#include<stdio.h>

void func3(int* z){
	printf("In func3 z „%p\n",z);
}
void func2(int* y){
	printf("In func2 y „%p\n",y);
	func3(y);
}
void func1(int* x){
	printf("In func1 x „%p\n",x);
	func2(x);
}
int main(void){
	int a=3;
	printf("In main	 a „%p\n",&a);
	func1(&a);
}