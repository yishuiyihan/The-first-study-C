#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int no;
	int ans;
	int rest;
	int a, b;
	printf("猜一个a~b范围内的数");
	scanf_s("%d   %d", &a, &b);
	printf("猜一个%d~%d的数", a, b);
	printf("你认为你需要多少次呢?");
	scanf_s("%d", &rest);
	int max_stage = rest;
	srand(time(NULL));
	ans = a + rand() % (b + 1);

	while (max_stage > 0)
	{
		printf("请输入你猜的数字:\n");
		scanf_s("%d", &no);

		if (max_stage == 1) {
			printf("%d", ans);
		}
		printf("还有%d次加油偶\n", --max_stage);
		if (no > ans) {
			printf("猜大了偶\n");
		}
		else if (no < ans) {
			printf("猜小了偶\n");
		}
		else {
			printf("\a恭喜你,猜对了\n");
			break;
		}

	}

	return 0;

}
