#include "yxdm.h"



void csh(char qp[ROW][COL],int row,int col)
{
	int i, j;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			qp[i][j] = ' ';
		}
	}

}

//��һ�汾
//void dy(char qp[ROW][COL])
//{
//	int i;
//	for (i = 0; i < ROW; i++) {
//		//��ӡ����
//		printf(" %c | %c | %c \n", qp[i][0], qp[i][1], qp[i][2]);
//		//��---
//		if (i < ROW - 1) {
//			printf("---|---|---\n");
//		}
//	}
//}

void dy(char qp[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++) {
		int j;
		for (j = 0; j < col;j++) {
			//��ӡ����
			printf(" %c ", qp[i][j]);
			//��ӡ��|
			if (col > j + 1) {
				printf("|");
			}
		}
		printf("\n");
		if (row > i + 1) {
			for (j = 0; j < col;j++) {
			//�ж��С���
				printf("---");
				if (col > j + 1) {
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void wjxq(char qp[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("�������->\n");
	printf("���������꣺");
	scanf_s("%d %d", &x, &y);
	while (1) {
		if (x>=1 && x<=row && y>=1 && y<=col) {
			if (qp[x-1][y-1] == ' ')
			{
				qp[x - 1][y - 1] = '*';
				break;
			}
		}

		else {
			printf("�����������������\n");
			scanf_s("%d %d", &x, &y);
		}
	}
}

void dnxq(char qp[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("��������->\n");
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (qp[x][y]==' ') {
			qp[x][y] = '#';
			break;
		}
	}
}
//Ӯ�˷���1
//���˷���0
//�ж�ƽ��
int pj(char qp[ROW][COL], int row, int col) {
	int i, j;
	for (i = 0; i < row;i++) {
		for (j = 0; j < col; j++) {
			if (qp[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

//�ж���Ӯ
//����*���Ӯ 
//����#����Ӯ
//����pƽ��
//����c����

char  pd(char qp[ROW][COL], int row, int col) {
	int i=0;
	int j = 0;
	//�ж���

	/*for (i = 0; i < row;i++) {

		if (qp[i][j] == qp[i][j+1] && qp[i][j+1] == qp[i][j+2] && qp[i][j] != ' ') {
			if (qp[i][j] == '*') {
				return '*';
			}
			else {
				return '#';
			}

		}
	}*/
	
	/*for (i = 0; i < row;i++) {
		for (j = 0; j < col; j++) {
			if (qp[i][j] == qp[i][j + 1] && qp[i][j + 1]== qp[i][j + 2] && qp[i][j] != ' ') {
				return qp[i][j];
			}
		}
	}*/
	//��
	/*for (i = 0; i < row;i++) {
		for (j = 0; j < col; j++) {
			if (qp[i][j] == qp[i+1][j] && qp[i + 1][j] == qp[i + 2][j] && qp[i][j] != ' ') {
				return qp[i][j];
			}
		}
	}*/

	for (j = 0; j < col; j++) {

		if (qp[0][j] == qp[1][j] && qp[1][j] == qp[2][j] && qp[1][j] != ' ') {
			if (qp[1][j] == '*') {
				return '*';
			}
			else {
				return '#';
			}
			
		}
	}


	//�󽻲�
	if (qp[0][0] == qp[1][1] && qp[1][1] == qp[2][2] && qp[1][1] != ' ') {
		if (qp[1][1] == '*') {
			return '*';
		}
		else {
			return '#';
		}
		}

	//�ҽ���
	if (qp[0][2] == qp[1][1] && qp[1][1] == qp[2][0] && qp[1][1] != ' ') {
		if (qp[1][1] == '*') {
			return '*';
		}
		else {
			return '#';
		}
	}

	if (pj(qp,ROW,COL) )
	{
		return 'p';
	}

	return 'c';

}
	
