#include<stdio.h>

void mqr(int n1,int n2,int* mul,int* qut,int* res){
	*mul = n1*n2;
	*qut = n1/n2;
	*res = n1%n2;
}

int main(void){
	int a,b,x,y,z;
	printf("“ñ‚Â‚Ì©‘R”„");
	scanf("%d%d",&a,&b);
	mqr(a,b,&x,&y,&z);
	printf("Ï„ %d\n¤„ %d\n—]„ %d\n",x,y,z);
	return 0;
}
