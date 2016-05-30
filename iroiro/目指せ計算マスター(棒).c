#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*目指せ計算マスター(棒)*/
int main(void)
{
	double t, tt, T;						/*t 開始時間、tt終了時間、T終了時間*/
	int ans;							/*ans 正答数の表示*/
	char c;								/*c モード選択用*/
	printf("目指せ計算マスター！\n");
	printf("+か-か*を選択してください。\n");
	c = getchar();

	/*足し算用*/
	if(c=='+'){
		int i, a, b, c;						/*i ループ用、ab 計算用、c 解答用*/
		srand((unsigned int)time(NULL));			/*rand関数をtime関数によって初期化*/
		ans = 0;
		printf("頑張って！n");
		t = clock();						/*開始時間の設定*/
			for(i=0;i<10;i++){				/*ループ　10回行う*/
			a = rand();					/*aに乱数を代入*/
			b = rand();					/*bに乱数を代入*/
			printf("%d+",a);				/*計算内容の表示*/
			printf("%d=",b);
			scanf("%d",&c);					/*解答の入力*/
				if(c==a+b){				/*正答の場合ans+1*/
				ans = ans + 1;
				}
			}
	}								/*繰り返し文終了*/

	/*3桁足し算用*/
	else if(c=='p'){
		int i, a, b, c, d;					/*i ループ用、abd 計算用、c 解答用*/
		srand((unsigned int)time(NULL));			/*rand関数をtime関数によって初期化*/
		ans = 0;
		printf("頑張って！\n");
		t = clock();						/*開始時間の設定*/
			for(i=0;i<10;i++){				/*ループ　10回行う*/
			a = rand();					/*aに乱数を代入*/
			b = rand();					/*bに乱数を代入*/
			d = rand();
			printf("%d+",a);				/*計算内容の表示*/
			printf("%d+",b);
			printf("%d=",d);
			scanf("%d",&c);					/*解答の入力*/
				if(c==a+b+d){				/*正答の場合ans+1*/
				ans = ans + 1;
				}
			}
	}								/*繰り返し文終了*/


	/*引き算用*/
	else if(c=='-'){
		int i, a, b, c;						/*i ループ用、ab 計算用、c 解答用*/
		srand((unsigned int)time(NULL));			/*rand関数をtime関数によって初期化*/
		ans = 0;
		printf("頑張って！\n");
		t = clock();						/*開始時間の設定*/
			for(i=0;i<10;i++){				/*ループ　10回行う*/
			a = rand();					/*aに乱数を代入*/
			b = rand();
				if(a>b){				/*bに乱数を代入*/
				printf("%d-",a);			/*計算内容の表示*/
				printf("%d=",b);
				scanf("%d",&c);				/*解答の入力*/
					if(c==a-b){				/*正答の場合ans+1*/
					ans = ans + 1;
					}
				}

				else{
				printf("%d-",b);			/*計算内容の表示*/
				printf("%d=",a);
				scanf("%d",&c);				/*解答の入力*/
					if(c==b-a){			/*正答の場合ans+1*/
					ans = ans + 1;
					}
				}
			}						/*繰り返し文終了*/
	}

	/*掛け算用*/
	else if(c=='*'){
		int i, a, b, c;					/*i ループ用、ab 計算用、c 解答用*/
		srand((unsigned int)time(NULL));			/*rand関数をtime関数によって初期化*/
		ans = 0;
		printf("頑張って！\n");
		t = clock();						/*開始時間の設定*/
			for(i=0;i<10;i++){				/*ループ　10回行う*/
			a = rand();					/*aに乱数を代入*/
			b = rand();					/*bに乱数を代入*/
			printf("%d*",a);				/*計算内容の表示*/
			printf("%d=",b);
			scanf("%d",&c);					/*解答の入力*/
				if(c==a*b){				/*正答の場合ans+1*/
				ans = ans + 1;
				}
			}
	}

	tt = clock();							/*終了時間の代入*/
	T = (tt - t)/1000;						/*終了時間-開始時間*/
	printf("%d問正解しました！",ans);				/*正答数の表示*/
	printf("%.2f秒かかりました！\n",T);				/*時間の表示*/
	if(T<15){
		if(ans>8){
		printf("今日から君は計算マスターだ！\n");
		}
	
		else if(ans>5){
		printf("もっと正確に行こう！\n");
		}
	
		else{
		printf("時間をかけてじっくりやってみよう！\n");
		}
	}
	else if(T<60){
		if(ans>8){
		printf("いい感じ！\n");
		}
	
		else if(ans>5){
		printf("もっと正確に！\n");
		}
	
		else{
		printf("じっくり頑張ろう！\n");
		}
	}
	else{
		if(ans>8){
		printf("今度はもっと早くやってみよう！\n");
		}
	
		else if(ans>5){
		printf("もっと正確に！\n");
		}
	
		else{
		printf("じっくり頑張ろう！\n");
		}
	}
	return 0;
}
