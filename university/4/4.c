#include<stdio.h>

int main(void){
	int n,i;

	scanf("%d",&n);
	while(n!=0){
		i=n;
		while(i!=0){
			printf("%d\n",i);
			if(i<0) i++;
			else if(i>0) i--;
		}
		scanf("%d",&n);
	}
	return 0;
}
