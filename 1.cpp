#include "yxdm.h"
#include <time.h>



void cd() {
	printf("*****************************\n");
	printf("*****  1.paly   0.exit  *****\n");
	printf("*****************************\n");
}

void szq()
{
	char qp[ROW][COL] = { 0 };
	char rel=0;
	//初始化棋盘
	csh(qp,ROW,COL);
	//打印棋盘
	dy(qp, ROW, COL);
	//下棋
	while (1) {
		//玩家下棋
		wjxq(qp, ROW, COL);
		//判断输赢
		rel = pd(qp, ROW, COL);
		if (rel != 'c') {
			break;
		}
		dy(qp, ROW, COL);
		//电脑下棋
		dnxq(qp, ROW, COL);
		//判断输赢
		rel = pd(qp, ROW, COL);
		if (rel != 'c') {
			break;
		}
		dy(qp, ROW, COL);
	}

	if (rel == '*') {
		printf("玩家胜利\n");
		
	}
	else if (rel == '#') {
		printf("电脑胜利\n");
		
	}
	else {
		printf("平局\n");
	}
	dy(qp, ROW, COL);
}

int main() 
{
	srand((unsigned int)time(NULL));//设置随机数生成起点
        	int input=0;
	do 
	{
		//打印菜单
		cd();
		printf("请输入你的选择->");
		scanf_s("%d",&input);
		switch (input) {
		case 1:
			//进入游戏
			szq();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入->\n");
			break;
		}
		
	} while (input);
	return 0;
}

