#include <stdio.h>
#include <string.h>

int securityCheck_admin()
{
	FILE *fp = fopen("securityCheck_admin.txt", "r");
	char temp[100] = { 0 };
	int check = 0,i=0;
	char id[7];
	char password[7];
	//printf("����������ID");
	//scanf("%s", id);
	while (!feof(fp))
	{
		memset(temp, 0, sizeof(temp));
		fgets(temp, sizeof(temp)-1, fp);

		printf("%s", temp);
	}
	fclose(fp);
	return 0;
}

void operation_admin(int choice_eachPage)
{
	switch (choice_eachPage)
	{
	case 0:
	{
			  printf("���˳�����Աҳ�棬�ص����˵�ҳ��\n\n\n\n");
			  break;
	}
	case 1:
	{
			  FILE *fp = fopen("leader_list.txt", "a+");
			  char ID[10],name[10],password[10];
			  printf("���ӹ���Ա����ִ��\n");
			  printf("������Ҫ�����ĵ곤��ID\n");
			  scanf("%s", ID);
			  fputs(strcat(ID,"\t"), fp);
			  printf("������Ҫ�����ĵ곤������\n");
			  scanf("%s", name);
			  fputs(strcat(name, "\t"), fp);
			  printf("������Ҫ�����ĵ곤������\n");
			  scanf("%s", password);
			  fputs(strcat(password, "\n"), fp);
			  fclose(fp);
			  break;
	}
	case 2:
	{
			  printf("do operation leader_2\n");
			  break;
	}
	case 3:
	{
			  printf("do operation leader_3\n");
			  break;
	}
	case 4:
	{
			  printf("do operation leader_4\n");
			  break;
	}
	default:
	{
			   printf("ERROR, ��������ȷ��ѡ��\n");
			   break;
	}
	}
}

