//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	//1.const 修饰指针  常量指针
//	//指针的指向可以改，指针指向的值不可以改
//	const int* p = &a;
//
//	//*p = 20;//错误
//	p = &b;//正确
//
//	//2.const修饰常量，指针常量
//	//指针的指向不可以改，指针的值可以改
//
//	int* const p2 = &a;
//	*p2 = 20;//正确
//	//p2= &b;//错误
//
//	//3.const 修饰常量与指针
//	const int* const p3 = &a;
//
//	//*p3 = 30;错误
//	//p3= &b;错误
//
//	system("pause");
//	return 0;
//}