#include<stdio.h>
#include<stdlib.h>


int main(void){

	int nen,tuki,hi,num;			/*�N�A���A���ɂ�*/
	int zure=0;				/*����*/
	int i;
	int nnn[]={31,28,31,30,31,30,31,31,30,31,30,31};
	char ch[]="�y�����ΐ��؋�";
	printf("�����");
	scanf("%d",&nen);
	printf("������");
	scanf("%d",&tuki);
	printf("���ɂ�����");
	scanf("%d",&hi);

	if(tuki>12 || hi>nnn[tuki-1]){
		if(tuki!=2){
			printf("���݂��Ȃ����ł��B\n");
			exit(0);
		}
		else{
			if(nen%4!=0){
				printf("���݂��Ȃ����ł��B\n");
				exit(0);
			}
		}
	}
		/*�O���S���I��@���*/
		/*����N����4�Ŋ���؂��N�͂��邤�N��366�ɂ�*/
		/*����N����100�Ŋ���؂��400�Ŋ���؂�Ȃ��N�͂��邤�N�Ɋ܂܂Ȃ�*/
		/*��N��365����7�Ŋ���Ɨ]���1�ł��邽�߁A�j����1�����ꂪ������*/
		/*�܂��w��N����1/1�̗j����������*/

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

		/*���Ɏw��N���̎w�茎��1���̗j����������*/
	num=0	;
	for(i=0;i<=tuki-2;i++){
		num=num+nnn[i];
		if(i==1 && nen%4==0){
			num++;
		}
	}
	zure=zure+num;
		/*�Ō�ɓ��ɂ��̂���𑫂�*/
	zure=zure+hi-1;

	zure=(zure%7)*2;

	printf("%d�N%d��%d����%c%c�j���ł��B\n",nen,tuki,hi,ch[zure],ch[zure+1]);
	return 0;
}
