//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//查看所占的内存空间
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//
//	cout << "数组所占的内存空间:"<< sizeof(arr) << endl;
//	cout << "数组一行的大小：" << sizeof(arr[0]) << endl;
//	cout << "数组元素的大小：" << sizeof(arr[0][0]) << endl;
//	cout << "二维数组的行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "二维数组的列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//	//地址
//
//	cout << "首行地址" << arr << endl;
//	cout << "第一行地址" << arr[0] << endl;
//	cout << "第二行" << arr[1] << endl;
//
//	cout << "第一个元素：" <<&arr[0][0] << endl;
//	cout << "第二个元素：" << &arr[0][1] << endl;
//
//
//	system("pause");
//	return 0;
//}