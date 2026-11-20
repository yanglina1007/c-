//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//通过数组名可以计算整个数组所占内存空间的大小
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "arr所占内存空间的大小为：" << sizeof(arr) << endl;
//	cout << "arr数组中每个元素所占内存空间的大小为：" << sizeof(arr[0]) << endl;
//	cout << "arr数组中元素的个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
//	
//
//	//访问首个数组地址
//	cout << "arr数组的首地址为：" << arr << endl;
//	//强制转换成十进制
//	cout << "arr数组的首地址为：" << (int)arr << endl;
//	cout << "arr数组的首地址为：" << &arr[0] << endl;
//	cout << "arr数组的第二个元素的地址为：" << &arr[1] << endl;
//
//	//数组名是常量，不能赋值
//	system("pause");
//	return 0;
//}