#include<stdio.h>

int ruizyo(int x,int y){
	int i,z;
	z=1;
	for(i=1;i<=y;i++){
		z=z*x;
	}
	return z;
}

int main(void){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",ruizyo(a,b));
	return 0;
}