#include "seqlist.h"
int main()
{
	while (1)
	{
		switch (menu_select())
		{
		case 1:
			t_output();
			break;
		case 2:
			s_output();
			break;
		case 3:
			//sort();
			break;
		case 4:
			//search();
			break;
		case 0:
			//save();
			printf("Thank you for using��\n");
			system("pause");
			return 0;
		}
	}
}
//�˵�ģ��
extern int menu_select()
{
	int MenuItem;
	printf("\n ");
	printf("         | ***********���ϵͳ*********** |          \n");
	printf("          | ------------------------------ |          \n");
	printf("          |            ���˵���            |          \n");
	printf("          | ------------------------------ |          \n");
	printf("          |	  1 --- ��ʾ������Ϣ       |          \n");
	printf("          |	  2 --- ��ʾѧ����Ϣ	   |          \n");
	printf("          |	  3 --- ���д�ֻ���	   |          \n");
	printf("          |	  4 --- ��ʾ�����ɼ�	   |          \n");
	printf("          |	  0 --- �˳�ϵͳ  	   |          \n");
	do
	{
		printf("\n������ѡ�0��4����");
		fflush(stdin);
		scanf("%d", &MenuItem);
	} while (MenuItem<0 || MenuItem>4);
	return MenuItem;
}
extern void t_output()
{

}
extern void s_output()
{

}