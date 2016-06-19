#include<stdio.h>
#include<math.h>

int main(void)							/*13‚ÌŠKæ‚Ü‚Å‚µ‚©s‚¦‚È‚¢–Í—l*/
{

	int num, num1, num9, num18, numm1, numm2, numm3, S, i;
	i = 1;
	num1=1;
	num9=0;
	num18=0;
	printf("n„");
	scanf("%d",&num);
	while(i<=num){
		numm3=(((num18*(10000000000000000))+(num9*(100000000))+num1)*i)/(10000000000000000);
		numm2=((((num18*(10000000000000000))+(num9*(100000000))+num1)*i)-(numm3*(10000000000000000)))/(100000000);
		numm1=(((num18*(10000000000000000))+(num9*(100000000))+num1)*i)-(numm3*(10000000000000000))-(numm2*(100000000));
		num18=numm3;
		num9=numm2;
		num1=numm1;
		i=i+1;
	}
	printf("%dI%d %08d %08d\n",num,num18,num9,num1);
	return 0;
}
