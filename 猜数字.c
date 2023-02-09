#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu() {
	printf("*********************\n");
	printf("*** 1.plsy 0.exit ***\n");
}
void game() {
	int rand_num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("输入你想要猜的数字：>");
		scanf("%d", &input);
		if (input > rand_num) {
			printf("你猜大了！\n");
		}
		else if (input < rand_num) {
			printf("你猜小了！\n");
		}
		else if (input == rand_num) {
			printf("你猜对了!\n");
			break;
		}
	}
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("语法错误，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}
