// do..while문을 이용한 메뉴
#include <stdio.h>

int main(void)
{
	int i;
	do
	{
		printf("1 --- 새로만들기 \n");
		printf("2 --- 파일열기 \n");
		printf("3 --- 파일닫기 \n");
		printf("4 --- 종료 \n");
		scanf("%d", &i);
	} while (i < 1 || i >3);
	printf("선택된 메뉴 = %d\n", i);
	return 0;

}