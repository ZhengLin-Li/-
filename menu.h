#include <stdio.h>

int mainMenu()
{
	int choice;
	printf("********************************\n");
	printf("������Ϣ����ϵͳ\n");
	printf("��ѡ���������\n");
	printf("1--���ǵ곤\n");
	printf("2--����Ա��\n");
	printf("3--���ǹ˿�\n");
	printf("0--��Ҫ�˳�\n");
	printf("********************************\n\n\n");
	scanf("%d", &choice);
	return choice;
}

int leaderMune()
{
	int choice_leader;
	printf("********************************\n");
	printf("�곤ҳ��\n");
	printf("��ѡ�����Ĳ���\n");
	printf("1--�곤operation1\n");
	printf("2--�곤operation2\n");
	printf("3--�곤operation3\n");
	printf("4--�곤operation4\n");
	printf("5--�곤operation5\n");
	printf("0--�˳�\n");
	printf("********************************\n\n\n");
	scanf("%d", &choice_leader);
	return choice_leader;
}

int staffMune()
{
	int choice_staff;
	printf("********************************\n");
	printf("Ա��ҳ��\n");
	printf("��ѡ�����Ĳ���\n");
	printf("1--000\n");
	printf("2--111\n");
	printf("3--222\n");
	printf("4--333\n");
	printf("********************************\n\n\n");
	scanf("%d", &choice_staff);
	return choice_staff;
}

int customerMune()
{
	int choice_customer;
	printf("********************************\n");
	printf("�˿�ҳ��\n");
	printf("��ѡ�����Ĳ���\n");
	printf("1--000\n");
	printf("2--111\n");
	printf("3--222\n");
	printf("4--333\n");
	printf("********************************\n\n\n");
	scanf("%d", &choice_customer);
	return choice_customer;
}