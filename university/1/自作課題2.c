#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void){

	int a[3];
	int i;
	int n[2];
	char nc[2];
	int ans, anss;
	printf(" –â‘è‚ğ•\\¦‚µ‚Ü‚·B\n");
	srand((unsigned int)time(NULL));

	for(i=0;i<=2;i++){
		a[i]=rand()%20+1;
	}

	for(i=0;i<=1;i++){
		n[i]=rand()%4+1;
		switch(n[i]){
			case 1:
				nc[i]='+';
				break;
			case 2:
				nc[i]='-';
				break;
			case 3:
				nc[i]='*';
				break;
			case 4:
				nc[i]='/';
				break;
		}
	}

	printf("%d%c%d%c%d=",a[0],nc[0],a[1],nc[1],a[2]);
	
	ans=a[0];
	for(i=0;i<=1;i++){
		switch(n[i]){
			case 1:
				ans=ans+a[1+i];
				break;
			case 2:
				ans=ans+a[1-i];
				break;
			case 3:
				ans=ans+a[1*i];
				break;
			case 4:
				ans=ans+a[1/i];
				break;
		}
	}

	scanf("%d",&anss);
	if(anss==ans){
		printf("\"‚¨‚ß‚Å‚Æ‚¤‚²‚´‚¢‚Ü‚·I\"\n");
	}
	else
		printf("\n\a");

	return 0;
}
