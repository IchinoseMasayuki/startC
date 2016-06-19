#include<stdio.h>

int main(void)
{
	int i;									/*繰り返し用*/
	int num;								/*入力用*/
	int un;									/*13までのとき*/
	printf("n＝＞");							/*入力*/
	scanf("%d",&num);
	if(num<=12){								/*int関数一つでオーバーフローしない12まで*/
		un=1;
		for(i=1;i<=num;i++){						/*ループ*/
			un=un*i;
		}
	printf("%d！＝%d\n",num,un);
	}

	else if(num>12){							/*一度目のオーバーフローが発生するのでint関数を2つ繋げる。*/
		int a, b, bb;							/*a:10^8までの数。b:10^8から10^16まで。bb:aの繰り上がりの数。*/
		a=1;					
		b=0;
		for(i=1;i<=num;i++){
			a=a*i;				
			b=b*i;	
			if(a>100000000){					/*aの繰り上げ計算*/
				bb=a/100000000;					/*aの10^8の位をbに追加する。*/
				a=a-(bb*100000000);
				b=b+bb;
			}
		}
		if(num>=20){							/*二度目のオーバーフロー*/
			int c, cc;						/*c:10^16からの数。cc:bの繰り上がりの数。*/
			a=1;				
			b=0;
			c=0;
				for(i=1;i<=num;i++){
					a=a*i;
					b=b*i;
					c=c*i;
					if(a>100000000){			/*aの繰り上げ計算*/
						bb=a/100000000;
						a=a-(bb*100000000);
						b=b+bb;
					}
					if(b>100000000){			/*bの繰り上げ計算*/
						cc=b/100000000;
						b=b-(cc*100000000);
						c=c+cc;
					}
				}			/*26で10^8乗では変数aがオーバーフローする。*/
		printf("%d！＝%d%08d%08d\n",num,c,b,a);
		}
		else if(num<=20){
			printf("%d！＝%d%08d\n",num,b,a);
		}
	}
	return 0;
}
