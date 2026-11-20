//#include<iostream>
//using namespace std;
////time系统时间头文件
//#include<ctime>
//
//int main()
//{
//	//添加随机数种子 作用利用当前系统时间生成随机数种子
//	srand((unsigned int)time(NULL));
//
//	//生成1-100之间的随机数
//	int secret = rand() % 100 + 1;//rand() % 100 生成0-99之间的随机数 +1 生成1-100之间的随机数
//	int guess = 0;
//	int attempts = 0;
//
//	while (guess != secret)
//	{
//		cout << "请输入你猜测的数字(1-100): ";
//		cin >> guess;
//		attempts++;
//
//		if (guess < secret)
//		{
//			cout << "太小了！" << endl;
//		}
//		else if (guess > secret)
//		{
//			cout << "太大了！" << endl;
//		}
//		else
//		{
//			cout << "恭喜你，猜对了！" << endl;
//			cout << "你总共猜了 " << attempts << " 次。" << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}