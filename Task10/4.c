#include<stdio.h>
#include<math.h>

int main(void){

	int i;			/*ŒJ‚è•Ô‚µ—p*/
	double r, h, n, V;	/*“ü—Í—p*/

	printf("’ê–Ê‚Ì”¼Œa r„");	/*“ü—Í*/
	scanf("%lf",&r);
	printf("‚‚³ h„");
	scanf("%lf",&h);
	printf("•ªŠ„” n„");
	scanf("%lf",&n);
	V=0;
					/*•ªŠ„‚Ì‚‚³‚Íh/n*/
					/*•ªŠ„‚Ìi”Ô–Ú‚Ì’ê–Ê‚Ì”¼Œa‚Ín-i/n*/
					/*•ªŠ„‚Ìi”Ô–Ú‚Ì–ÊÏ‚Í(r*n-i/n)^2*ƒÎ*h/n‚Æ‚È‚é*/
	for(i=1;i<=n;i++){;
		V=V+pow((n-i)/(n)*r,2)*M_PI*h/n;
	}

	printf("‘ÌÏ„%.2f\n",V);
	return 0;
}
