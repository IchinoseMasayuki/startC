#include<stdio.h>

int main(void){
	/*エスケープシーケンスの表示*/
	printf("「\a」警告音\n");
	printf("「\b」バックスペース\n");
	printf("「\t」水平タブ\n");
	printf("「\v」垂直タブ\n");
	printf("「\n」改行\n");
	printf("「\f」改ページ\n");
	printf("「\r」復帰\n");
	printf("「\'」アポストロフィー\n");
	printf("「\"」引用符\n");
	printf("「\\」円記号\n");
	printf("「\?」クエスチョンマーク\n");
	printf("「\123」8進数123の文字コードを持つ文字\n");
	printf("「\xab」16進数abの文字コードを持つ文字\n");

	/*整数定数の表示*/
	printf("10進数の10は%d\n",10);
	printf(" 8進数の10は%d\n",010);
	printf("16進数の10は%d\n",0x10);

	return 0;
}
