#include<stdio.h>
#include<stdlib.h>


int main(void){

	int nen,tuki,hi,num;			/*年、月、日にち*/
	int zure=0;				/*ずれ*/
	int i;
	int nnn[]={31,28,31,30,31,30,31,31,30,31,30,31};
	char ch[]="土日月火水木金";
	printf("西暦＝＞");
	scanf("%d",&nen);
	printf("月＝＞");
	scanf("%d",&tuki);
	printf("日にち＝＞");
	scanf("%d",&hi);

	if(tuki>12 || hi>nnn[tuki-1]){
		if(tuki!=2){
			printf("実在しない日です。\n");
			exit(0);
		}
		else{
			if(nen%4!=0){
				printf("実在しない日です。\n");
				exit(0);
			}
		}
	}
		/*グレゴリオ暦法より*/
		/*西暦年号が4で割り切れる年はうるう年で366にち*/
		/*西暦年号が100で割り切れて400で割り切れない年はうるう年に含まない*/
		/*一年は365日で7で割ると余りは1であるため、曜日は1日ずれが生じる*/
		/*まず指定年数の1/1の曜日を見つける*/

	if(nen>=2000){
		num=nen-2000;
		for(i=0;i<num;i++){
			zure++;
			if((i%4==1 && i%100!=1) || i%400==1){
				zure++;
			}
		}
	}
	else{
		num=2000-nen;
		for(i=1;i<=num;i++){
			zure++;
			if((i%4==0 && i%100!=0) || i%400==0){
				zure++;
			}
		}
		zure=7-zure%7;
	}

		/*次に指定年数の指定月の1日の曜日を見つける*/
	num=0	;
	for(i=0;i<=tuki-2;i++){
		num=num+nnn[i];
		if(i==1 && nen%4==0){
			num++;
		}
	}
	zure=zure+num;
		/*最後に日にちのずれを足す*/
	zure=zure+hi-1;

	zure=(zure%7)*2;

	printf("%d年%d月%d日は%c%c曜日です。\n",nen,tuki,hi,ch[zure],ch[zure+1]);
	return 0;
}
