//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[9] = { 3,6,9,5,6,8,2,5,12 };
//	for (int i = 0;i < 9;i++)
//	{
//		cout << arr[i] << "\t";
//
//	}
//	cout << endl;
//	//总共排序轮数=元数个数 - 1
//	for (int i = 0;i < 9 - 1;i++)
//	{
//		//次数=元数个数 - 当前轮数 - 1
//		for (int j = 0;j < 9 - i - 1;j++)
//		{
//			if (arr[j ] > arr[j+1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//
//			}
//
//		}
//	}
//
//	cout << "排序后：" << endl;
//	for (int i = 0;i < 9;i++)
//	{
//		cout << arr[i] << "\t";
//
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}