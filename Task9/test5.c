#include<stdio.h>

int main(void)
{
	int i;									/*�J��Ԃ��p*/
	int num;								/*���͗p*/
	printf("n����");
	scanf("%d",&num);
	int a, b, bb, c, cc, d, dd, e, ee, f, ff;				/*a:10^7�܂ł̐��Bb:10^7����10^14�܂ŁBbb:a�̌J��オ��̐��B*/
	a=1;									/*c:10^14����̐��Bcc:b�̌J��オ��̐��B*/
	b=0;									/*d��������l�A10^8�ł͕ϐ�a��num=26�ŃI�[�o�[�t���[����B*/
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
		if(a>10000000){					/*a�̌J��グ�v�Z*/
			bb=a/10000000;
			a=a-(bb*10000000);
			b=b+bb;
		}
		if(b>10000000){					/*b�̌J��グ�v�Z*/
			cc=b/10000000;
			b=b-(cc*10000000);
			c=c+cc;
		}
		if(c>10000000){					/*c�̌J��グ�v�Z*/
			dd=c/10000000;
			c=c-(dd*10000000);
			d=d+dd;
		}
		if(d>10000000){					/*d�̌J��グ�v�Z*/
			ee=d/10000000;
			d=d-(ee*10000000);
			e=e+ee;
		}
		if(e>10000000){					/*e�̌J��グ�v�Z*/
			ff=e/10000000;
			e=e-(ff*10000000);
			f=f+ff;
		}
	}
	if(b==0){
		printf("%d�I��%d\n",num,a);
	}	
	else if(c==0){
		printf("%d�I��%d%07d\n",num,b,a);
	}	
	else if(d==0){
		printf("%d�I��%d%07d%07d\n",num,c,b,a);
	}
	else if(e==0){
		printf("%d�I��%d%07d%07d%07d\n",num,d,c,b,a);
	}
	else if(f==0){
		printf("%d�I��%d%07d%07d%07d%07d\n",num,e,d,c,b,a);
	}
	else{
		printf("%d�I��%d%07d%07d%07d%07d%07d\n",num,f,e,d,c,b,a);
	}
	return 0;
}
