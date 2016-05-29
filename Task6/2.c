#include<stdio.h>

int main(void)
{
	int x, y, z, V, S;				/*  変数の設定  */
	printf("3辺の長さx,y,zは？\n");
	scanf("%d",&x);					/*　辺xの入力　*/
	scanf("%d",&y);					/*　辺yの入力　*/
	scanf("%d",&z);					/*　辺zの入力　*/
	V=x*y*z;					/*　体積Vの計算　*/
	S=2*x*y+2*y*z+2*z*x;				/*　表面積Sの計算　*/
	printf("直方体の３辺の長さx,y,z=>%d",x);	/*　辺xの表示　*/
	printf(" %d",y);				/*　辺yの表示  */
	printf(" %d\n",z);				/*  辺zの表示  */
	printf("体積＝%d\n",V);				/*  体積Vの表示  */
	printf("表面積＝%d\n",S);			/*  表面積Sの表示  */
	return 0;
}
