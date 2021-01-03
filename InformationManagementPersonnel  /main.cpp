#include <iostream>

using namespace std;

/**
 * 函数定义
 */
// 菜单
void menu();

// 1、学生信息录入子菜单
void oneSubmenu();

// 2、学生信息浏览子菜单
void twoSubmenu();

// 3、信息查询模块子菜单
void threeSubmenu();

// 4、学生信息排序子菜单
void fourSubmenu();

// 5、学生信息删除子菜单
void fiveSubmenu();

// 6、学生信息修改子菜单
void sixSubmenu();

// 7、清空学生信息子菜单
void sevenSubmenu();

// 8、系统退出子菜单
void eightSubmenu();


int main() {
    menu();
    while (true) {
        int condition = 0;
        cin >> condition;
        switch (condition) {
            case 1:
                oneSubmenu();
                menu();
                break;
            case 2:
                twoSubmenu();
                menu();
                break;
            case 3:
                threeSubmenu();
                menu();
                break;
            case 4:
                fourSubmenu();
                menu();
                break;
            case 5:
                fiveSubmenu();
                menu();
                break;
            case 6:
                sixSubmenu();
                menu();
                break;
            case 7:
                sevenSubmenu();
                menu();
                break;
            case 8:
                eightSubmenu();
                menu();
                break;
            default:
                eightSubmenu();
                menu();
                break;
        }
    }
}

/**
 * 菜单
 */
void menu() {
    cout << "\t\t┌────────────────────────────┐" << endl;
    cout << "\t\t│      校内人员信息管理系统      │" << endl;
    cout << "\t\t│       1、学生信息录入         │" << endl;
    cout << "\t\t│       2、学生信息浏览         │" << endl;
    cout << "\t\t│       3、信息查询模块         │" << endl;
    cout << "\t\t│       4、学生信息排序         │" << endl;
    cout << "\t\t│       5、学生信息删除         │" << endl;
    cout << "\t\t│       6、学生信息修改         │" << endl;
    cout << "\t\t│       7、清空学生信息         │" << endl;
    cout << "\t\t│       8、系统退出            │" << endl;
    cout << "\t\t└────────────────────────────┘" << endl;
    cout << "请输入要进行的操作: " << endl;
}

void oneSubmenu() {

}

void twoSubmenu() {

}

void threeSubmenu() {

}

void fourSubmenu() {

}

void fiveSubmenu() {

}

void sixSubmenu() {

}

void sevenSubmenu() {

}

void eightSubmenu() {
    cout << "系统退出！" << endl;
    exit(1);
}




