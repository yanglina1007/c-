#include<iostream>
using namespace std;
#include<string>
struct hero
{
	string name;
	int age;
	string sex;
};

void bubblesort(struct hero heroArray[], int len)
{
	for (int i = 0;i < len - 1;i++)
	{

		for (int j = 0;j < len - i - 1;j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				int temp = heroArray[j].age;
				heroArray[j].age = heroArray[j + 1].age;
				heroArray[j + 1].age = temp;

			}
		}
	}
}

void printhero(struct hero heroArray[], int len)
{
	for (int i = 0;i < len;i++)
	{
		cout << "姓名：" << heroArray[i].name << " 年龄：" << heroArray[i].age
			<< " 性别：" << heroArray[i].sex << endl;
	}
}
int main()
{
	//2、创建数组存放5名英雄
	struct hero heroArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);

	bubblesort(heroArray, len);
	printhero(heroArray, len);

	system("pause");
	return 0;
}
