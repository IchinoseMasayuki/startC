#include<stdio.h>

int main(void)
{
	int sp;									/*繰り返し用*/
	int num;								/*入力用*/
	printf("n＝＞");
	scanf("%d",&num);
	int a, aa;								/*a:10^7までの数。b:10^7から10^14まで。bb:aの繰り上がりの数。*/
		a=1;
	int b, bb;								/*c:10^14からの数。cc:bの繰り上がりの数。*/
		b=0;
	int c, cc;
		c=0;
	int d, dd;								/*dからも同様。また、10^8では変数aがnum=26でオーバーフローする。*/
		d=0;
	int e, ee;
		e=0;
	int f, ff;								
		f=0;
	int g, gg;								
		g=0;
	int h, hh;								
		h=0;
	int i, ii;								
		i=0;
	int j, jj;								
		j=0;
	int k, kk;								
		k=0;
	int l, ll;								
		l=0;
	aa=0;
	bb=0;
	cc=0;
	dd=0;
	ee=0;
	ff=0;
	gg=0;
	hh=0;
	ii=0;
	jj=0;
	kk=0;
	ll=0;

	for(sp=1;sp<=num;sp++){
		a=a*sp;
			if(a>=10000000){					/*aの繰り上げ計算*/
				aa=a/10000000;
				a=a-(aa*10000000);
			}

		b=b*sp;
		b=b+aa;
			if(b>=10000000){					/*bの繰り上げ計算*/
				bb=b/10000000;
				b=b-(bb*10000000);
			}

		c=c*sp;
		c=c+bb;
			if(c>=10000000){					/*cの繰り上げ計算*/
				cc=c/10000000;
				c=c-(cc*10000000);
			}

		d=d*sp;
		d=d+cc;
			if(d>=10000000){					/*dの繰り上げ計算*/
				dd=d/10000000;
				d=d-(dd*10000000);
			}

		e=e*sp;
		e=e+dd;
			if(e>=10000000){					/*eの繰り上げ計算*/
				ee=e/10000000;
				e=e-(ee*10000000);
			}

		f=f*sp;
		f=f+ee;
			if(f>=10000000){					/*bの繰り上げ計算*/
				ff=f/10000000;
				f=f-(ff*10000000);
			}
		g=g*sp;
		g=g+ff;
			if(g>=10000000){					/*bの繰り上げ計算*/
				gg=g/10000000;
				g=g-(gg*10000000);
			}

		h=h*sp;
		h=h+gg;
			if(h>=10000000){					/*bの繰り上げ計算*/
				hh=h/10000000;
				h=h-(hh*10000000);
			}

		i=i*sp;
		i=i+hh;
			if(i>=10000000){					/*bの繰り上げ計算*/
				ii=i/10000000;
				i=i-(ii*10000000);
			}

		j=j*sp;
		j=j+ii;
			if(j>=10000000){					/*bの繰り上げ計算*/
				jj=j/10000000;
				j=j-(jj*10000000);
			}

		k=k*sp;
		k=k+jj;
			if(k>=10000000){					/*bの繰り上げ計算*/
				kk=k/10000000;
				k=k-(kk*10000000);
			}

		l=l*sp;
		l=l+kk;

	aa=0;
	bb=0;
	cc=0;
	dd=0;
	ee=0;
	ff=0;
	gg=0;
	hh=0;
	ii=0;
	jj=0;
	kk=0;
	ll=0;
	}
	if(l>0){
		printf("%d！＝%d%07d%07d%07d%07d%07d%07d%07d%07d%07d%07d%07d\n",num,l,k,j,i,h,g,f,e,d,c,b,a);
	}
	else if(k>0){
		printf("%d！＝%d%07d%07d%07d%07d%07d%07d%07d%07d%07d%07d\n",num,k,j,i,h,g,f,e,d,c,b,a);
	}
	else if(j>0){
		printf("%d！＝%d%07d%07d%07d%07d%07d%07d%07d%07d%07d\n",num,j,i,h,g,f,e,d,c,b,a);
	}
	else if(i>0){
		printf("%d！＝%d%07d%07d%07d%07d%07d%07d%07d%07d\n",num,i,h,g,f,e,d,c,b,a);
	}
	else if(h>0){
		printf("%d！＝%d%07d%07d%07d%07d%07d%07d%07d\n",num,h,g,f,e,d,c,b,a);
	}
	else if(g>0){
		printf("%d！＝%d%07d%07d%07d%07d%07d%07d\n",num,g,f,e,d,c,b,a);
	}
	else if(f>0){
		printf("%d！＝%d%07d%07d%07d%07d%07d\n",num,f,e,d,c,b,a);
	}
	else if(e>0){
		printf("%d！＝%d%07d%07d%07d%07d\n",num,e,d,c,b,a);
	}
	else if(d>0){
		printf("%d！＝%d%07d%07d%07d\n",num,d,c,b,a);
	}
	else if(c>0){
		printf("%d！＝%d%07d%07d\n",num,c,b,a);
	}
	else if(b>0){
		printf("%d！＝%d%07d\n",num,b,a);
	}	
	else{
		printf("%d！＝%d\n",num,a);
	}	
	return 0;
}
