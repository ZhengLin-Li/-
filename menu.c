//���˵�
int main_menu()
{
	int choice;
	printf("�����������������Ӧ����ţ�\n");
	printf("1. ��������Ա��\n");
	printf("2. ��ͨ����Ա��\n");
	printf("0. �˳���ǰ���档\n");
	scanf("%d", &choice);
	return choice;
}

int staffmemu()  //����Ա��Ϣ����Ŀ¼
{
	int a = 0;       //����һ��������¼�����ڹ���Ա��Ϣ�����ϵľ���
	printf("\n\n\n\n\n\t\t*************************************************\t\t\n");
	printf("\t\t*\t\t����Ա����ϵͳ\t\t\t*\t\n");
	printf("\t\t*1����ӹ���Ա\t\t\t\t*\n");
	printf("\t\t*2��ɾ������Ա\t\t\t\t*\n");
	printf("\t\t*3���޸Ĺ���Ա\t\t\t\t*\n");
	printf("\t\t*4��չʾ����Ա\t\t\t\t*\n");
	printf("\t\t*�������š��˳�\t\t\t\t\t*\n");
	printf("\t\t*************************************************\t\t\n");
	printf("���������ѡ��\n");
	scanf("%d", &a);
	return a;
}

//�������ϵͳ�˵�����
int financememu()
{
	int a = 0;
	printf("\n\n\n\n\n\t\t*************************************************\t\t\n");
	printf("\t\t*\t\t�������ϵͳ\t\t\t*\t\n");
	printf("\t\t*1����������\t\t\t\t*\n");
	printf("\t\t*2������֧��\t\t\t\t*\n");
	printf("\t\t*3������ӯ��\t\t\t\t*\n");
	printf("\t\t*�������š��˳�\t\t\t\t\t*\n");
	printf("\t\t*************************************************\t\t\n");
	printf("���������ѡ��\n");
	scanf("%d", &a);
	return a;
}

//ѡ��չʾ
int goodsmemu()
{
	int a = 0;
	printf("\n\n\n\n\n\t\t*************************************************\t\t\n");
	printf("\t\t*\t\t��Ʒ����ϵͳ\t\t\t*\t\n");
	printf("\t\t*1�������Ʒ\t\t\t\t*\n");
	printf("\t\t*2��ɾ����Ʒ\t\t\t\t*\n");
	printf("\t\t*3���޸���Ʒ\t\t\t\t*\n");
	printf("\t\t*4��ͳ����Ʒ\t\t\t\t*\n");
	printf("\t\t*5��չʾ������Ʒ\t\t\t\t*\n");
	printf("\t\t*6��������Ʒ\t\t\t\t*\n");
	printf("\t\t*�������š��˳�\t\t\t\t\t*\n");
	printf("\t\t*************************************************\t\t\n");
	printf("���������ѡ��\n");
	scanf("%d", &a);
	return a;
}