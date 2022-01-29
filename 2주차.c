#include <stdio.h>

int main()
{
	Example04();
}


int Example02() {
	// 숫자를 입력받아라
	// 0 ~ 9 범위 숫자를 입력하면 
	// 0,2,4,6,8 입력 시 "짝수"
	// 1,3,5,7,9 입력 시 "홀수"
	// 0 ~ 9 범위 숫자가 아니라면
	// "숫자 범위를 벗어났습니다." 출력
	int number = 0;

renumber:
	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &number);

	if (0 <= number && number <= 9)
	{
		switch (number % 2 == 0)
		{
		case 0:
			printf("짝수");
			break;
		case 1:
			printf("홀수");
			break;
		}
	}
	else
	{
		printf("숫자 범위를 벗어났습니다. \n");
		goto renumber;
	}

}

int Example03() {

	int input = 3;


	for (int s = 2; s <= 9; s++)
	{
		printf("\n");
		for (int i = 1; i <= 9; i++)
		{
			printf("%d * %d = %d\n", s, i, s * i);
		}
	}
}
		
int Example04()
{
	int width;

	printf("삼각형의 크기를 입력해주세요 : ");
	scanf_s("%d", &width);

	for (int s = 0; s < width; s++)
	{
		for (int k = 5; k > s + 1; k--) {

			printf(" ");
		}
			for (int i = 0; i < s+1; i++)
			{
				printf("*");
			}
		
			
		printf("\n");
	}	
	return 0;
}
//     *
//    **
//   ***
//  ****
// ***** 
int Example05()
{
	int num;

	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &num);

	
}