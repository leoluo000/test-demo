#include <iostream>
#include "Person.cpp"
#include "Person.h"
#include "AddStudent.cpp"

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
    addStudent();
}

void twoSubmenu() {
    Person person;
    cout << "学号\t\t姓名\t\t性别\t\t出生年月\t\t地址\t\t电话\t\t邮箱\t\t课程名称\t\t考试成绩" << endl;
    cout << to_string(person.number) + "\t" + person.name + "\t" + person.sex + "\t" + person.dateOfBirth + "\t"
            + person.address + "\t" + person.phone + "\t" + person.email + "\t" + person.courseName + "\t"
            + to_string(person.achievement) + "\t" << endl;
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