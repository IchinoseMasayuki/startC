#include<stdio.h>

int main(void)
{
	int i;									/*繰り返し用*/
	int num;								/*入力用*/
	printf("n＝＞");
	scanf("%d",&num);
	int a, b, bb, c, cc, d, dd, e, ee, f, ff;				/*a:10^7までの数。b:10^7から10^14まで。bb:aの繰り上がりの数。*/
	a=1;									/*c:10^14からの数。cc:bの繰り上がりの数。*/
	b=0;									/*dからも同様、10^8では変数aがnum=26でオーバーフローする。*/
	c=0;
	d=0;
	e=0;
	f=0;
	for(i=1;i<=num;i++){
		a=a*i;
		b=b*i;
		c=c*i;
		d=d*i;
		e=e*i;
		f=f*i;
		if(a>10000000){					/*aの繰り上げ計算*/
			bb=a/10000000;
			a=a-(bb*10000000);
			b=b+bb;
		}
		if(b>10000000){					/*bの繰り上げ計算*/
			cc=b/10000000;
			b=b-(cc*10000000);
			c=c+cc;
		}
		if(c>10000000){					/*cの繰り上げ計算*/
			dd=c/10000000;
			c=c-(dd*10000000);
			d=d+dd;
		}
		if(d>10000000){					/*dの繰り上げ計算*/
			ee=d/10000000;
			d=d-(ee*10000000);
			e=e+ee;
		}
		if(e>10000000){					/*eの繰り上げ計算*/
			ff=e/10000000;
			e=e-(ff*10000000);
			f=f+ff;
		}
	}
	if(b==0){
		printf("%d！＝%d\n",num,a);
	}	
	else if(c==0){
		printf("%d！＝%d%07d\n",num,b,a);
	}	
	else if(d==0){
		printf("%d！＝%d%07d%07d\n",num,c,b,a);
	}
	else if(e==0){
		printf("%d！＝%d%07d%07d%07d\n",num,d,c,b,a);
	}
	else if(f==0){
		printf("%d！＝%d%07d%07d%07d%07d\n",num,e,d,c,b,a);
	}
	else{
		printf("%d！＝%d%07d%07d%07d%07d%07d\n",num,f,e,d,c,b,a);
	}
	return 0;
}
