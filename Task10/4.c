#include<stdio.h>
#include<math.h>

int main(void){

	int i;			/*JèÔµp*/
	double r, h, n, V;	/*üÍp*/

	printf("êÊÌ¼a r");	/*üÍ*/
	scanf("%lf",&r);
	printf("³ h");
	scanf("%lf",&h);
	printf("ª n");
	scanf("%lf",&n);
	V=0;
					/*ªÌ³Íh/n*/
					/*ªÌiÔÚÌêÊÌ¼aÍn-i/n*/
					/*ªÌiÔÚÌÊÏÍ(r*n-i/n)^2*Î*h/nÆÈé*/
	for(i=1;i<=n;i++){;
		V=V+pow((n-i)/(n)*r,2)*M_PI*h/n;
	}

	printf("ÌÏ%.2f\n",V);
	return 0;
}
