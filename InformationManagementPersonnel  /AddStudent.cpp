#include <iostream>
#include <fstream>
#include <cassert>
#include "list"
#include "Person.h"
#include "Person.cpp"

using namespace std;

void addStudent();
void loadFile();
void updateList();
Person listToPerson(list<string> strList);
list<string> split(const string& str, const string& delim);

void addStudent(){
    Person person;
    cout << "请输入学号：" << endl;
    cin >> person.number;
    cout << "请输入姓名：" << endl;
    cin >> person.name;
    cout << "请输入性别：" << endl;
    cin >> person.sex;
    cout << "请输入出生年月：" << endl;
    cin >> person.dateOfBirth;
    cout << "请输入地址：" << endl;
    cin >> person.address;
    cout << "请输入电话：" << endl;
    cin >> person.phone;
    cout << "请输入邮箱：" << endl;
    cin >> person.email;
    cout << "请输入课程名称：" << endl;
    cin >> person.courseName;
    cout << "请输入考试成绩：" << endl;
    cin >> person.achievement;
    string data = to_string(person.number) + "," + person.name + "," + person.sex + 
    "," + person.dateOfBirth + "," + person.address + "," + person.phone + 
    "," + person.email + "," + person.courseName + "," + to_string(person.achievement);
    ofstream outfile;
    outfile.open(filePath, ios::app);
    outfile << data << endl;
    outfile.close();
    studentList.push_back(person);
}

void loadFile(){
    ifstream infile; 
    infile.open(filePath);
    assert(infile.is_open());
    string s;
    while(getline(infile,s))
    {
        list<string> thisList = split(s,",");
        studentList.push_back(listToPerson(thisList));
    }
    infile.close();
}

Person listToPerson(list<string> strList){
    Person person;
    person.number = atoi(strList.front().c_str());
    strList.pop_front();
    person.name = strList.front();
    strList.pop_front();
    person.sex = strList.front();
    strList.pop_front();
    person.dateOfBirth = strList.front();
    strList.pop_front();
    person.address = strList.front();
    strList.pop_front();
    person.phone = strList.front();
    strList.pop_front();
    person.email = strList.front();
    strList.pop_front();
    person.courseName = strList.front();
    strList.pop_front();
    person.achievement = atof(strList.front().c_str());
    return person;
}

list<string> split(const string& str, const string& delim) {
	list<string> res;
	if("" == str) return res;
	//先将要切割的字符串从string类型转换为char*类型
	char * strs = new char[str.length() + 1] ; //不要忘了
	strcpy(strs, str.c_str()); 
 
	char * d = new char[delim.length() + 1];
	strcpy(d, delim.c_str());
 
	char *p = strtok(strs, d);
	while(p) {
		string s = p; //分割得到的字符串转换为string类型
		res.push_back(s); //存入结果数组
		p = strtok(NULL, d);
	}
 
	return res;
}

void updateList(){
    string deleC = "rm " + filePath;
    system(deleC.c_str());
    ofstream outfile;
    outfile.open(filePath, ios::app);
    for (list<Person>::iterator iter = studentList.begin(); iter != studentList.end(); ++iter) {
        string data = to_string(iter->number) + "," + iter->name + "," + iter->sex + 
            "," + iter->dateOfBirth + "," + iter->address + "," + iter->phone + 
            "," + iter->email + "," + iter->courseName + "," + to_string(iter->achievement);
        outfile << data << endl;
    }
    outfile.close();
}
