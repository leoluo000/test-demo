#include <iostream>
#include "Person.h"
#ifndef _COMMON
#define _COMMON

using namespace std;

/**
 * 校内人员
 */
class SchoolStaff {
public:
    // 个人信息
    virtual void getPersonInfo(Person person) = 0;

    // 获取人员种类
    virtual char* getPersonType() = 0;
};

/**
 * 学生
 */
class Student : public SchoolStaff {
public:
    void getPersonInfo(Person person) {
        cout << "学号：" + to_string(person.number) + " 姓名：" + person.name + " 性别：" + person.sex + " 出生年月：" +
                person.dateOfBirth + " 地址：" + person.address + " 电话：" + person.phone + " email：" + person.email +
                " 课程名称：" + person.courseName + " 考试成绩：" + to_string(person.achievement) << endl;
    }

    char* getPersonType() {
        return "学生";
    }

};

/**
 * 老师
 */
class Teacher : public SchoolStaff {
public:
    void getPersonInfo(Person person) {
        cout << "编号：" + to_string(person.number) + " 姓名：" + person.name + " 性别：" + person.sex + " 出生年月：" +
                person.dateOfBirth + " 地址：" + person.address + " 电话：" + person.phone + " email：" + person.email +
                " 所教课程：" + person.teachingCourses << endl;
    }

    char* getPersonType() {
        return "老师";
    }
};

/**
 * 管理员
 */
class Admin : public SchoolStaff {
public:
    void getPersonInfo(Person person) {
        cout << "编号：" + to_string(person.number) + " 姓名：" + person.name + " 性别：" + person.sex + " 出生年月：" +
                person.dateOfBirth + " 地址：" + person.address + " 电话：" + person.phone + " email：" + person.email +
                " 管理校内人员数量：" + to_string(person.managingTheNumberOfPeople) << endl;
    }

    char* getPersonType() {
        return "管理员";
    }
};

#endif