//#include<iostream>
//using namespace std;
//#include<string>
//
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
////值传递
//void printstudent(student stu)
//{
//	stu.age = 28;
//	cout << "子函数中的姓名" << stu.name << "	年龄：" << stu.age << "	分数：" << stu.score << endl;
//}
////地址传递
//void printstudent2(student* stu)
//{
//	stu->age = 28;
//	cout << "姓名：" << stu->name << "  年龄：" << stu->age << "  分数：" << stu->score << endl;
//}
//
//int main()
//{
//	student stu = { "张三",18,100 };
//	printstudent(stu);
//	cout << "姓名：" << stu.name << "  年龄：" <<stu.age << "  分数：" << stu.score << endl;
//
//	printstudent2(&stu);
//	cout << "姓名：" << stu.name << "  年龄：" << stu.age << "  分数：" << stu.score << endl;
//
//	system("pause");
//	return 0;
//}