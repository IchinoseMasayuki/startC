#include<stdio.h>

int main(void)
{
	int sp;									/*�J��Ԃ��p*/
	int num;								/*���͗p*/
	printf("n����");
	scanf("%d",&num);
	int a, aa;								/*a:10^7�܂ł̐��Bb:10^7����10^14�܂ŁBbb:a�̌J��オ��̐��B*/
		a=1;
	int b, bb;								/*c:10^14����̐��Bcc:b�̌J��オ��̐��B*/
		b=0;
	int c, cc;
		c=0;
	int d, dd;								/*d��������l�B�܂��A10^8�ł͕ϐ�a��num=26�ŃI�[�o�[�t���[����B*/
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
			if(a>=10000000){					/*a�̌J��グ�v�Z*/
				aa=a/10000000;
				a=a-(aa*10000000);
			}

		b=b*sp;
		b=b+aa;
			if(b>=10000000){					/*b�̌J��グ�v�Z*/
				bb=b/10000000;
				b=b-(bb*10000000);
			}

		c=c*sp;
		c=c+bb;
			if(c>=10000000){					/*c�̌J��グ�v�Z*/
				cc=c/10000000;
				c=c-(cc*10000000);
			}

		d=d*sp;
		d=d+cc;
			if(d>=10000000){					/*d�̌J��グ�v�Z*/
				dd=d/10000000;
				d=d-(dd*10000000);
			}

		e=e*sp;
		e=e+dd;
			if(e>=10000000){					/*e�̌J��グ�v�Z*/
				ee=e/10000000;
				e=e-(ee*10000000);
			}

		f=f*sp;
		f=f+ee;
			if(f>=10000000){					/*b�̌J��グ�v�Z*/
				ff=f/10000000;
				f=f-(ff*10000000);
			}
		g=g*sp;
		g=g+ff;
			if(g>=10000000){					/*b�̌J��グ�v�Z*/
				gg=g/10000000;
				g=g-(gg*10000000);
			}

		h=h*sp;
		h=h+gg;
			if(h>=10000000){					/*b�̌J��グ�v�Z*/
				hh=h/10000000;
				h=h-(hh*10000000);
			}

		i=i*sp;
		i=i+hh;
			if(i>=10000000){					/*b�̌J��グ�v�Z*/
				ii=i/10000000;
				i=i-(ii*10000000);
			}

		j=j*sp;
		j=j+ii;
			if(j>=10000000){					/*b�̌J��グ�v�Z*/
				jj=j/10000000;
				j=j-(jj*10000000);
			}

		k=k*sp;
		k=k+jj;
			if(k>=10000000){					/*b�̌J��グ�v�Z*/
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
		printf("%d�I��%d%07d%07d%07d%07d%07d%07d%07d%07d%07d%07d%07d\n",num,l,k,j,i,h,g,f,e,d,c,b,a);
	}
	else if(k>0){
		printf("%d�I��%d%07d%07d%07d%07d%07d%07d%07d%07d%07d%07d\n",num,k,j,i,h,g,f,e,d,c,b,a);
	}
	else if(j>0){
		printf("%d�I��%d%07d%07d%07d%07d%07d%07d%07d%07d%07d\n",num,j,i,h,g,f,e,d,c,b,a);
	}
	else if(i>0){
		printf("%d�I��%d%07d%07d%07d%07d%07d%07d%07d%07d\n",num,i,h,g,f,e,d,c,b,a);
	}
	else if(h>0){
		printf("%d�I��%d%07d%07d%07d%07d%07d%07d%07d\n",num,h,g,f,e,d,c,b,a);
	}
	else if(g>0){
		printf("%d�I��%d%07d%07d%07d%07d%07d%07d\n",num,g,f,e,d,c,b,a);
	}
	else if(f>0){
		printf("%d�I��%d%07d%07d%07d%07d%07d\n",num,f,e,d,c,b,a);
	}
	else if(e>0){
		printf("%d�I��%d%07d%07d%07d%07d\n",num,e,d,c,b,a);
	}
	else if(d>0){
		printf("%d�I��%d%07d%07d%07d\n",num,d,c,b,a);
	}
	else if(c>0){
		printf("%d�I��%d%07d%07d\n",num,c,b,a);
	}
	else if(b>0){
		printf("%d�I��%d%07d\n",num,b,a);
	}	
	else{
		printf("%d�I��%d\n",num,a);
	}	
	return 0;
}
