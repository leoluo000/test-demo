#include <iostream>

void menu();

int main() {
    menu();
    return 0;
}

/**
 * 菜单
 */
void menu() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "\t\t┌────────────────────────────┐\n" << std::endl;
    std::cout << "\t\t│      校内人员信息管理系统      │\n" << std::endl;
    std::cout << "\t\t│       1、学生信息录入         │\n" << std::endl;
    std::cout << "\t\t│       2、学生信息浏览         │\n" << std::endl;
    std::cout << "\t\t│       3、信息查询模块         │\n" << std::endl;
    std::cout << "\t\t│       4、学生信息排序         │\n" << std::endl;
    std::cout << "\t\t│       5、学生信息删除         │\n" << std::endl;
    std::cout << "\t\t│       6、学生信息修改         │\n" << std::endl;
    std::cout << "\t\t│       7、清空学生信息         │\n" << std::endl;
    std::cout << "\t\t│       6、系统退出            │\n" << std::endl;
    std::cout << "\t\t└────────────────────────────┘\n" << std::endl;
}
