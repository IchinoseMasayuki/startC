#include<stdio.h>

int fnp(int x,int y){return x+y;}
int fnm(int x,int y){return x-y;}
int fnt(int x,int y){return x*y;}
int fnd(int x,int y){return x/y;}
int fncsw(int x,int y, char ccc){
	switch(ccc){
		case '+': return fnp(x,y); break;
		case '-': return fnm(x,y); break;
		case '*': return fnt(x,y); break;
		case '/': return fnd(x,y); break;
	}
}
int main(void){
	int a,c;
	c=0;
	char ch='+';
	while(ch!='\n'){
		scanf("%d",&a);
		c=fncsw(c,a,ch);
		scanf("%c",&ch);
	}
	printf("%d\n",c);
	return 0;
}