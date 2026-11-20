//#include<iostream>
//using namespace std;
//// 函数的值传递不会改变实参的值，函数的值传递是将实参的值传递给形参，形参在函数中是一个局部变量
//
////函数不需要返回值，声明可以写void
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << "swap函数中a的值为：" << a << endl;
//	cout << "swap函数中b的值为：" << b << endl;
//}
//
//int main()
//{
//	int x = 5;
//	int y = 3;
//	cout << "调用swap函数前：" << endl;
//	cout << "x的值为：" << x << endl;
//	cout << "y的值为：" << y << endl;
//
//	swap(x, y);
//
//	cout << "调用swap函数后：" << endl;
//	cout << "x的值为：" << x << endl;
//	cout << "y的值为：" << y << endl;
//
//	system("pause");
//	return 0;
//}