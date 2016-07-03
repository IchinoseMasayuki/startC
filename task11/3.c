#include<stdio.h>

int main(void){

	const char *n[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	const char *m[]={"ガーネット","アメシスト","アクワマリン・サンゴ","ダイヤモンド","エメラルド・ジェイダイト（ヒスイ）","真珠・ムーンストーン","ルビー","ぺリドット・サードオニックス","サファイア","オパール・トルマリン","トパーズ・シトリン","トルコ石・ラピスラズリ"};/*参考 : http://www.jja.ne.jp/aboutjewellery/aboutjewellery_inner04.html*/
	int a, b;	/*配列は0から始まるため入力されたa-1で読み込む*/

	printf("何月ですか＝＞");
	scanf("%d",&a);
	b=a-1;
	printf("%d月のスペルは %s です。\n誕生石は %s です。\n",a,n[b], m[b]);
	return 0;
}
