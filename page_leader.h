void operation_leader(int choice_leader)
{
	int this_choice_leader = choice_leader;
	do{
		switch (this_choice_leader)
		{
		case 0:
		{
				  break;
		}
		case 1:
		{
				  printf("do operation leader_1\n");
				  scanf("%d", &this_choice_leader);
				  break;
		}
		case 2:
		{
				  printf("do operation leader_2\n");
				  scanf("%d", &this_choice_leader);
				  break;
		}
		case 3:
		{
				  printf("do operation leader_3\n");
				  scanf("%d", &this_choice_leader);
				  break;
		}
		case 4:
		{
				  printf("do operation leader_4\n");
				  scanf("%d", &this_choice_leader);
				  break;
		}
		case 5:
		{
				  printf("do operation leader_5\n");
				  scanf("%d", &this_choice_leader);
				  break;
		}
		default:
		{
				   printf("ERROR, ��������ȷ��ѡ��\n");
				   scanf("%d", &this_choice_leader);
				   break;
		}
		}
	} while (this_choice_leader);

	printf("�����˳��곤ҳ�棬�ص����˵�ҳ��\n\n\n\n");
}