#include <stdio.h>

int main()
{
	Example04();
}


int Example02() {
	// ���ڸ� �Է¹޾ƶ�
	// 0 ~ 9 ���� ���ڸ� �Է��ϸ� 
	// 0,2,4,6,8 �Է� �� "¦��"
	// 1,3,5,7,9 �Է� �� "Ȧ��"
	// 0 ~ 9 ���� ���ڰ� �ƴ϶��
	// "���� ������ ������ϴ�." ���
	int number = 0;

renumber:
	printf("���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &number);

	if (0 <= number && number <= 9)
	{
		switch (number % 2 == 0)
		{
		case 0:
			printf("¦��");
			break;
		case 1:
			printf("Ȧ��");
			break;
		}
	}
	else
	{
		printf("���� ������ ������ϴ�. \n");
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

	printf("�ﰢ���� ũ�⸦ �Է����ּ��� : ");
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

	printf("���ڸ� �Է����ּ��� : ");
	scanf_s("%d", &num);

	
}