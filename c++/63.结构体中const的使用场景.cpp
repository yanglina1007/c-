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
////指针 4
////将结构体中的形参改为指针，可以减少内存空间，不会生成新的副本
////加入const 防止误操作
//void printstudent2(const student* stu)
//{
//	//stu->age = 28;
//	cout << "姓名：" << stu->name << "  年龄：" << stu->age << "  分数：" << stu->score << endl;
//}
//
//int main()
//{
//	student stu = { "张三",18,100 };
//	printstudent2(&stu);
//	cout << "姓名：" << stu.name << "  年龄：" << stu.age << "  分数：" << stu.score << endl;
//
//	system("pause");
//	return 0;
//}