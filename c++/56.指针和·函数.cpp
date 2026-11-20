//#include<iostream>
//using namespace std;
//
//void swap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	cout << a << endl;
//	cout << b << endl;
//
//}
////值传递只改变形参，不改变实参
//
//void swap02(int* num1, int* num2)
//{
//	int temp1 = *num1;
//	*num1 = *num2;
//	*num2 = temp1;
//}
////地址传递可以改变实参
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	swap01(x, y);
//
//	swap02(&x, &y);
//
//	cout << x << endl;
//	cout << y << endl;
//
//	system("pause");
//	return 0;
//}
