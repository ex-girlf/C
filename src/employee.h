#pragma once
#include <iostream>
#include "worker.h"
using namespace std;


class Employee:public Worker{
public:
    //构造函数
    Employee(int id, string name, int deptid);
    virtual void showInfo();
    virtual string  showDeptName();
    //virtual void Addemployee(int id, string name, int deptid,int numofepm);
};