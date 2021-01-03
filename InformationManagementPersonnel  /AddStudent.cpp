#include <iostream>
#include <fstream>
#include "Person.h"
#include "Person.cpp"

using namespace std;

bool addStudent(){
    ofstream outfile;
    Person person;
    cout << "请输入学号：" << endl;
    cin >> person.number;
    cout << "请输入姓名：" << endl;
    cin >> person.name;
    string file_name = "file/" + to_string(person.number) + "_" + person.name + ".txt";
    outfile.open(file_name);
    outfile << person.number << endl;
    outfile << person.name << endl;
    cout << "请输入性别：" << endl;
    cin >> person.sex;
    outfile << person.sex << endl;
    cout << "请输入出生年月：" << endl;
    cin >> person.dateOfBirth;
    outfile << person.dateOfBirth << endl;
    cout << "请输入地址：" << endl;
    cin >> person.address;
    outfile << person.address << endl;
    cout << "请输入电话：" << endl;
    cin >> person.phone;
    outfile << person.phone << endl;
    cout << "请输入邮箱：" << endl;
    cin >> person.email;
    outfile << person.email << endl;
    cout << "请输入课程名称：" << endl;
    cin >> person.courseName;
    outfile << person.courseName << endl;
    cout << "请输入考试成绩：" << endl;
    cin >> person.achievement;
    outfile << person.achievement << endl;
    outfile.close();
    return true;
}
