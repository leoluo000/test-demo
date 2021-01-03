#include <iostream>
#include "Person.cpp"
#include "Person.h"

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
    cout << "请输入1-8之间的数：" << endl;
}

void oneSubmenu() {
    Person person;

    cout << "请输入学生学号\n" << endl;
    cin >> person.number;

    cout << "请输入学生姓名\n" << endl;
    cin >> person.name;

    cout << "请输入学生性别\n" << endl;
    cin >> person.sex;

    cout << "请输入学生出生年月\n" << endl;
    cin >> person.dateOfBirth;

    cout << "请输入学生地址\n" << endl;
    cin >> person.address;

    cout << "请输入学生电话\n" << endl;
    cin >> person.phone;

    cout << "请输入学生邮箱\n" << endl;
    cin >> person.email;

    cout << "请输入学生课程名称\n" << endl;
    cin >> person.courseName;

    cout << "请输入学生考试成绩\n" << endl;
    cin >> person.achievement;

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