#include <iostream>

using namespace std;

// 函数定义
void menu();

int main() {
    menu();
    return 0;
}

/**
 * 菜单
 */
void menu() {
    cout << "Hello, World!" << endl;
    cout << "\t\t┌────────────────────────────┐" << endl;
    cout << "\t\t│      校内人员信息管理系统      │" << endl;
    cout << "\t\t│       1、学生信息录入         │" << endl;
    cout << "\t\t│       2、学生信息浏览         │" << endl;
    cout << "\t\t│       3、信息查询模块         │" << endl;
    cout << "\t\t│       4、学生信息排序         │" << endl;
    cout << "\t\t│       5、学生信息删除         │" << endl;
    cout << "\t\t│       6、学生信息修改         │" << endl;
    cout << "\t\t│       7、清空学生信息         │" << endl;
    cout << "\t\t│       6、系统退出            │" << endl;
    cout << "\t\t└────────────────────────────┘" << endl;
}
