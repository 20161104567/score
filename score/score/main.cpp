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
			printf("Thank you for using！\n");
			system("pause");
			return 0;
		}
	}
}
//菜单模块
extern int menu_select()
{
	int MenuItem;
	printf("\n ");
	printf("         | ***********打分系统*********** |          \n");
	printf("          | ------------------------------ |          \n");
	printf("          |            主菜单项            |          \n");
	printf("          | ------------------------------ |          \n");
	printf("          |	  1 --- 显示裁判信息       |          \n");
	printf("          |	  2 --- 显示学生信息	   |          \n");
	printf("          |	  3 --- 裁判打分环节	   |          \n");
	printf("          |	  4 --- 显示参赛成绩	   |          \n");
	printf("          |	  0 --- 退出系统  	   |          \n");
	do
	{
		printf("\n请输入选项（0－4）：");
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