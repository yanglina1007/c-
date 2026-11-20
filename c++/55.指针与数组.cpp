//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//
//	int* p = arr;//arr就是数组中的首地址
//
//	cout << "利用指针访问第一个元素：" << *p << endl;
//	p++;//让指针向后偏移四个字节
//	cout << "利用指针访问第二个元素：" << *p << endl;
//
//	int* p2 = arr;
//	for (int i = 0;i < 9;i++)
//	{
//		cout << *p2 << "\t";
//		p2++;
//	}
//
//	system("pause");
//	return 0;
//}