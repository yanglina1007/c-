//#include<iostream>
//#include<string>
//#include<ctime>
//using namespace std;
//
//
//struct student
//{
//	string sname;
//	int score;
//};
//struct teacher
//{
//	string tname;
//	struct student sArray[5];
//};
//void allocateSpace(struct teacher tArray[], int len)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0;i < len;i++)
//	{
//		tArray[i].tname = "teacher_";
//		tArray[i].tname += nameSeed[i];
//		for (int j = 0;j < 5;j++)
//		{
//			tArray[i].sArray[j].sname = "student_";
//			tArray[i].sArray[j].sname += nameSeed[j];
//
//			//随机数
//			int random = rand() % 61 + 40;//0~100
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
//void printinfo(struct teacher tArray[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		cout << "老师姓名：" << tArray[i].tname << endl;
//		for (int j = 0;j < 5;j++)
//		{
//			cout << "学生姓名：" << tArray[i].sArray[j].sname
//				<< "学生成绩:"  << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	//随机数种子
//	srand((unsigned int)time(NULL));
//	//1.创建3名老师的数组
//	struct teacher tArray[3];
//
//	//2.通过函数给3名老师的信息赋值，并给老师带的学生赋值
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, 3);
//	
//	//3.打印信息
//	printinfo(tArray,len);
//	system("pause");
//	return 0;
//}