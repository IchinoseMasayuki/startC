#include <stdio.h>

int main(void)
{
	printf("円記号を表示します。:%c\n",'\\');		/*円記号「\」はエスケープシーケンス\\で表される。*/
	printf("アポストロフィを表示します。:%c\n",'\'');	/*アポストロフィ「'」はエスケープシーケンス\'で表される。*/

	return 0;
}

