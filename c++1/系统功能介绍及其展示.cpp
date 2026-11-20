#include <iostream>
using namespace std;
#include<iostream>
#define Max 1000

void showmenu()
{
    //菜单界面 
    cout << "************************" << endl;
    cout << "***** 1、添加联系人 *****" << endl;
    cout << "***** 2、显示联系人 *****" << endl;
    cout << "***** 3、删除联系人 *****" << endl;
    cout << "***** 4、查找联系人 *****" << endl;
    cout << "***** 5、修改联系人 *****" << endl;
    cout << "***** 6、清空联系人 *****" << endl;
    cout << "***** 0、退出通讯录 *****" << endl;
    cout << "************************" << endl;

}

//联系人结构体
struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};

//通讯录结构体
struct Addressbook
{
    //通讯录保存的联系人数组
    struct Person personArray[Max];

    //通讯录中当前记录联系人个数
    int m_size;
};
//添加联系人
void addPerson(Addressbook* abs)
{
    if (abs->m_size == Max)
    {
        cout << "通讯录已满，无法添加！" << endl;
        ;
    }
    else
    {
        //添加具体联系人
        //姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_size].m_Name = name;

        //性别
        cout << "请输入性别：" << endl;
        cout << "1.-- 男" << endl;
        cout << "2.-- 女" << endl;
        int sex = 0;
        while (true) 
        {
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_size].m_Sex = sex;
                break;
            }
            cout << "输入有误，重新输入" << endl;
        }
        //年龄
        int age = 0;

    }
}
int main()
{
    //创建通讯录结构体变量
    Addressbook abs;
    //初始化人数
    abs.m_size = 0;
    int select;
    showmenu();

    while (true)
    {
        //showmenu();

        cin >> select;

        switch (select)
        {
        case 1:  //添加联系人
            addPerson(&abs);
            break;
        case 2:  //显示联系人
            break;
        case 3:  //删除联系人
            break;
        case 4:  //查找联系人
            break;
        case 5:  //修改联系人
            break;
        case 6:  //清空联系人
            break;
        case 0:  //退出通讯录
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }

	system("pause");
	return 0;
}