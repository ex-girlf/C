#pragma once    
#include "worker.h"
#include <iostream>
#include <string>

class Manager:public Worker {
public:
    Manager(int id, string name, int deptid);
    virtual void showInfo();
    virtual string  showDeptName();
};
