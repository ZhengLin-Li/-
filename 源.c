#include <stdio.h>
#include "menu.h"
#include "page_leader.h"

int main()
{
	int choice;
	do
	{
		choice = mainMenu();
		switch (choice)
		{
		case 0:
		{
				  break;
		}
		case 1:
		{
				  //case 1 code
				  int choice_leader;
				  do{
					  choice_leader = leaderMune();
					  operation_leader(choice_leader);
				  } while (choice_leader);
				  break;
		}
		case 2:
		{
				  //case 2 code
				  printf("case 2, do something\n");
				  int choice_staff = staffMune();
				  break;
		}
		case 3:
		{
				  //case 3 code
				  printf("case 3, do something\n");
				  int choice_customer = customerMune();
				  break;
		}
		case 4:
		{
				  //case 4 code
				  printf("�����˳�ϵͳ����ӭ�´�ʹ��\n");
				  break;
		}
		default:
		{
				   printf("ERROR, ��������ȷ��ѡ��\n");
				   break;
		}
		}
	} while (choice);
	return 0;
}