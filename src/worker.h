#pragma once
#include <iostream>
#include <string>

using namespace std;

class Worker{
public:
    //获取职工信息
    virtual void showInfo() = 0;
    //获取岗位信息
    virtual string showDeptName() = 0;

    int m_Id;
    string m_name;
    int m_DeptId;
};