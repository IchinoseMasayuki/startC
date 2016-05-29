#include<stdio.h>

int main(void)
{
	char ch, CH;					/*変数の宣言ch小文字CH変換後の大文字*/
	printf("英字の小文字を入力しなさい＝＞");	
	ch = getchar();					/*文字の入力*/
	CH = ch - 0x20;					/*shift-jisの小文字コードは「大文字の文字コード　0x20」であるということを使う。*/
	printf("英大文字＝＞%c",CH);			/*結果の表示*/
	return 0;
}
