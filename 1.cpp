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
	//��ʼ������
	csh(qp,ROW,COL);
	//��ӡ����
	dy(qp, ROW, COL);
	//����
	while (1) {
		//�������
		wjxq(qp, ROW, COL);
		//�ж���Ӯ
		rel = pd(qp, ROW, COL);
		if (rel != 'c') {
			break;
		}
		dy(qp, ROW, COL);
		//��������
		dnxq(qp, ROW, COL);
		//�ж���Ӯ
		rel = pd(qp, ROW, COL);
		if (rel != 'c') {
			break;
		}
		dy(qp, ROW, COL);
	}

	if (rel == '*') {
		printf("���ʤ��\n");
		
	}
	else if (rel == '#') {
		printf("����ʤ��\n");
		
	}
	else {
		printf("ƽ��\n");
	}
	dy(qp, ROW, COL);
}

int main() 
{
	srand((unsigned int)time(NULL));//����������������
        	int input=0;
	do 
	{
		//��ӡ�˵�
		cd();
		printf("���������ѡ��->");
		scanf_s("%d",&input);
		switch (input) {
		case 1:
			//������Ϸ
			szq();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������->\n");
			break;
		}
		
	} while (input);
	return 0;
}

