#include <stdio.h>
#include "menu.h"
#include "page_leader.h"
#include "page_staff.h"
#include "page_customer.h"

int main()
{
	int choice;
	do
	{
		show_mainMenu();
		scanf("%d", &choice);
		switch (choice)
		{
		case 0:
		{
				  printf("�����˳�ϵͳ");
				  break;
		}
		case 1:
		{
				  //�곤ҳ��
				  int choice_eachPage;
				  do{
					  show_leaderMune();
					  scanf("%d", &choice_eachPage);
					  operation_leader(choice_eachPage);
				  } while (choice_eachPage);
				  break;
		}
		case 2:
		{
				  //Ա��ҳ��
				  int choice_eachPage;
				  do{
					  show_staffMune();
					  scanf("%d", &choice_eachPage);
					  operation_staff(choice_eachPage);
				  } while (choice_eachPage);
				  break;
		}
		case 3:
		{
				  //�˿�ҳ��
				  int choice_eachPage;
				  do{
					  show_customerMune();
					  scanf("%d", &choice_eachPage);
					  operation_customer(choice_eachPage);
				  } while (choice_eachPage);
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