#include <iostream>

struct Person {
    // 编号
    int number;
    // 姓名
    char name[50];
    // 性别
    char sex[50];
    // 出生年月
    char dateOfBirth[50];
    // 地址
    char address[100];
    // 电话
    char phone[50];
    // Email
    char email[50];
    // 课程名称
    char courseName[100];
    // 考试成绩
    double achievement;
    // 所教授课程
    char teachingCourses[100];
    // 管理校内人员数量
    int managingTheNumberOfPeople;
};

/**
 * 校内人员
 */
class SchoolStaff {
public:
    // 个人信息
    virtual void getPersonInfo(Person person) = 0;

    // 获取人员种类
    virtual char getPersonType() = 0;
};

/**
 * 学生
 */
class Student : public SchoolStaff {
public:
    void getPersonInfo(Person person) override {
        std::cout
                << "学号：" + person.number + " 姓名：" + person.name + " 性别：" + person.sex + " 出生年月：" + person.dateOfBirth +
                   " 地址：" + person.address + " 电话：" + person.phone + " Email：" + person.email + " 课程名称：" +
                   person.courseName + " 考试成绩：" + person.achievement << std::endl;
    }

    char getPersonType() override {

    }

};

/**
 * 老师
 */
class Teacher : public SchoolStaff {
public:
    void getPersonInfo(Person person) override {
        std::cout
                << "编号：" + person.number + " 姓名：" + person.name + " 性别：" + person.sex + " 出生年月：" + person.dateOfBirth +
                   " 地址：" + person.address + " 电话：" + person.phone + " Email：" + person.email + " 所教课程：" +
                   person.teachingCourses << std::endl;
    }

    char getPersonType() override {

    }
};

/**
 * 管理员
 */
class Admin : public SchoolStaff {
public:
    void getPersonInfo(Person person) override {
        std::cout
                << "编号：" + person.number + " 姓名：" + person.name + " 性别：" + person.sex + " 出生年月：" + person.dateOfBirth +
                   " 地址：" + person.address + " 电话：" + person.phone + " Email：" + person.email + " 管理校内人员数量：" +
                   person.managingTheNumberOfPeople << std::endl;
    }

    char getPersonType() override {

    }
};