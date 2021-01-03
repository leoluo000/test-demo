//
// Created by xiongzhaowu on 2021/1/3.
//
using namespace std;
#ifndef INFORMATIONMANAGEMENTPERSONNEL___PERSON_H
#define INFORMATIONMANAGEMENTPERSONNEL___PERSON_H

struct Person {
    // 编号
    int number;
    // 姓名
    string name;
    // 性别
    string sex;
    // 出生年月
    string dateOfBirth;
    // 地址
    string address;
    // 电话
    string phone;
    // 邮箱
    string email;
    // 课程名称
    string courseName;
    // 考试成绩
    double achievement;
    // 所教授课程
    string teachingCourses;
    // 管理校内人员数量
    int managingTheNumberOfPeople;
};

#endif //INFORMATIONMANAGEMENTPERSONNEL___PERSON_H