#include <iostream>
#include "Person.cpp"
#include "Person.h"
#include "AddStudent.cpp"
#include<iomanip>
#include<algorithm>

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

// 9、查找校内人员
list<Person> findPerson(int number);

list<Person> findPerson(string name);

// 10、排序学生信息
bool sortPersonASC(const Person &m1, const Person &m2);

bool sortPersonDESC(const Person &m1, const Person &m2);

// 11、输出集合信息
void display(list<Person> personList);

// 12、删除校内人员
void deletePerson(int number);


int main() {
    loadFile();
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

/**
 * 1、学生信息录入
 */
void oneSubmenu() {
    addStudent();
}

/**
 * 2、学生信息浏览
 */
void twoSubmenu() {
    if (studentList.empty()) {
        cout << "当前没有任何学生信息，请先进行添加！" << endl;
        return;
    }

    display(studentList);
}

/**
 * 3、信息查询模块
 */
void threeSubmenu() {
    if (studentList.empty()) {
        cout << "当前没有任何学生信息，请先进行添加！" << endl;
        return;
    }

    cout << "请选择查询方式（1：根据学号进行查询，2：根据姓名进行查询）" << endl;
    int condition = 0;
    cin >> condition;
    switch (condition) {
        case 1: {
            cout << "请输入学号：" << endl;
            int number;
            cin >> number;
            list<Person> personList = findPerson(number);
            if (personList.empty()) {
                cout << "未找到该学生，请确认学号是否正确！" << endl;
                break;
            }

            display(personList);
            break;
        }
        case 2: {
            cout << "请输入姓名：" << endl;
            string name;
            cin >> name;
            list<Person> namePersonList = findPerson(name);
            if (namePersonList.empty()) {
                cout << "未找到该学生，请确认姓名是否正确！" << endl;
                break;
            }

            display(namePersonList);
            break;
        }
        default:
            cout << "请输入正确的数字（1-2）!" << endl;
            break;
    }
}

/**
 * 4、学生信息排序
 */
void fourSubmenu() {
    if (studentList.size() <= 0) {
        cout << "当前没有任何学生信息，请先进行添加！" << endl;
        return;
    }

    list<Person> sortList;
    sortList.assign(studentList.begin(), studentList.end());

    cout << "请选择排序方式（1：根据学号升序排列，2：根据学号降序排列）" << endl;
    int condition = 0;
    cin >> condition;
    switch (condition) {
        case 1:
            sortList.sort(sortPersonASC);
            display(sortList);
            break;
        case 2:
            sortList.sort(sortPersonDESC);
            display(sortList);
            break;
        default:
            cout << "请输入正确的数字！" << endl;
            break;
    }
}

/**
 * 5、学生信息删除
 */
void fiveSubmenu() {
    if (studentList.empty()) {
        cout << "当前没有任何学生信息，请先进行添加！" << endl;
        return;
    }

    cout << "请输入要删除的学号：" << endl;
    int number = 0;
    cin >> number;

    deletePerson(number);
    display(studentList);
}

/**
 * 6、学生信息修改
 */
void sixSubmenu() {
    if (studentList.empty()) {
        cout << "当前没有任何学生信息，请先进行添加！" << endl;
        return;
    }

    cout << "请输入要修改的学号：" << endl;
    int number = 0;
    cin >> number;

    for (list<Person>::iterator iter = studentList.begin(); iter != studentList.end();) {
        if ((*iter).number == number) {
            cout << "已找到该学生！" << endl;

            cout << "请输入修改后的学号:" << endl;
            int number;
            cin >> number;
            (*iter).number = number;

            cout << "请输入修改后的姓名:" << endl;
            string name;
            cin >> name;
            (*iter).name = name;

            cout << "请输入修改后的性别:" << endl;
            string sex;
            cin >> sex;
            (*iter).sex = sex;

            cout << "请输入修改后的出生年月:" << endl;
            string dateOfBirth;
            cin >> dateOfBirth;
            (*iter).dateOfBirth = dateOfBirth;

            cout << "请输入修改后的地址:" << endl;
            string address;
            cin >> address;
            (*iter).address = address;

            cout << "请输入修改后的电话:" << endl;
            string phone;
            cin >> phone;
            (*iter).phone = phone;

            cout << "请输入修改后的邮箱:" << endl;
            string email;
            cin >> email;
            (*iter).email = email;

            cout << "请输入修改后的课程名称:" << endl;
            string courseName;
            cin >> courseName;
            (*iter).courseName = courseName;

            cout << "请输入修改后的考试成绩:" << endl;
            double achievement;
            cin >> achievement;
            (*iter).achievement = achievement;
        } else {
            iter++;
        }
    }
}

/**
 * 7、清空学生信息
 */
void sevenSubmenu() {
    studentList.clear();
    display(studentList);
}

/**
 * 8、系统退出
 */
void eightSubmenu() {
    cout << "系统退出！" << endl;
    exit(1);
}


/**
 * 根据学号进行升序排序
 * @param m1 学号1
 * @param m2 学号2
 * @return
 */
bool sortPersonASC(const Person &m1, const Person &m2) {
    return m1.number < m2.number;
}

/**
 * 根据学号进行降序排列
 * @param m1 学号1
 * @param m2 学号2
 * @return
 */
bool sortPersonDESC(const Person &m1, const Person &m2) {
    return m1.number > m2.number;
}

/**
 * 根据学号进行查找
 * @param number 学号
 * @return
 */
list<Person> findPerson(int number) {
    list<Person> numberPersonList;
    for (list<Person>::iterator iter = studentList.begin(); iter != studentList.end(); ++iter) {
        if (iter->number == number) {
            numberPersonList.push_front(*iter);
        }
    }
    return numberPersonList;
}

/**
 * 根据姓名进行查找
 * @param name 姓名
 * @return
 */
list<Person> findPerson(string name) {
    list<Person> numberPersonList;
    for (list<Person>::iterator iter = studentList.begin(); iter != studentList.end(); ++iter) {
        if (iter->name == name) {
            numberPersonList.push_front(*iter);
        }
    }
    return numberPersonList;
}

/**
 * 输出集合信息
 * @param personList 
 */
void display(list<Person> personList) {
    cout << "学号\t\t姓名\t\t性别\t\t出生年月\t\t地址\t\t\t\t电话\t\t邮箱\t\t课程名称\t\t考试成绩" << endl;
    for (list<Person>::iterator iter = personList.begin(); iter != personList.end(); ++iter) {
        cout <<
             left << setw(8) << to_string(iter->number) <<
             left << setw(8) << iter->name <<
             left << setw(8) << iter->sex <<
             left << setw(12) << iter->dateOfBirth <<
             left << setw(16) << iter->address <<
             left << setw(8) << iter->phone <<
             left << setw(8) << iter->email <<
             left << setw(12) << iter->courseName <<
             left << setw(8) << iter->achievement <<
             endl;
    }
}

/**
 * 删除校内人员
 * @param number
 */
void deletePerson(int number) {
//   studentList.remove_if([](Person person) {return (person.number == number); });
//   for (list<Person>::iterator iter = .begin(); iter != studentList.end(); ++iter) {
//       iter.
//   }
}
