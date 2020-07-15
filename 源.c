#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "page_leader.h"
#include "page_staff.h"
#include "page_customer.h"

#define MAX_stdin 7

struct admin
{
	char account_number[MAX_stdin];       //�˺�
	char account_password[MAX_stdin];	  //����
	char name[MAX_stdin];                 //�û���������
	int staff_code;                       //Ա�����
	int sale_number;                      //��������
	double sale_price;                    //���۽��
	double salary_basic;                  //��������

	double salary_percentage;             //��ɹ���
}admin;

struct staff
{
	char account_number[MAX_stdin];       //�˺�
	char account_password[MAX_stdin];	  //����
	char name[MAX_stdin];                 //�û���������
	int staff_code;                       //Ա�����
	int sale_number;                      //��������
	double sale_price;                    //���۽��
	double salary_basic;                  //��������

	double salary_percentage;             //��ɹ���
	int department_code;                  //���ű��
	int post_code;                        //��λ���
}staff;


struct customer
{
	char account_number[MAX_stdin];       //�˺�
	char account_password[MAX_stdin];	  //����
	char name[MAX_stdin];                 //�û���������
	int customer_code;                    //�˿ͱ��
	int consumption_number_in_total;      //�ܹ�������
	double consumption_price_in_total;    //�ܹ�����
	int  bonus_points;                    //Ŀǰ����

	
}customer;

struct goods
{
	int goods_code;                        //��Ʒ���
	int sale_number_in_total;              //��Ʒ����������
	int type_code;                         //���ͱ��
	double price_in;                       //�����۸�
	double price_out;                      //�۳��۸�
}goods;

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
				  printf("���˳�ϵͳ");
				  break;
		}
		case 1:
		{
				  //�곤ҳ��
				  system("cls");  //��ʱ�������������� 
				  int choice_eachPage;
				  securityCheck_admin();
				  do{
					  show_adminMenu();
					  scanf("%d", &choice_eachPage);
					  operation_admin(choice_eachPage);
				  } while (choice_eachPage);
				  break;
		}
		case 2:
		{
				  //Ա��ҳ��
				  int choice_eachPage;
				  do{
					  show_staffMenu();
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
					  show_customerMenu();
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