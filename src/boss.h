#pragma once    
#include "worker.h"
#include <iostream>
#include <string>

class Boss:public Worker {
public:
    Boss(int id, string name, int deptid);
    virtual void showInfo();
    virtual string  showDeptName();
};
