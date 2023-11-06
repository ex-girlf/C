#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "worker.h"
#define FILENAME "worker.txt"
class WorkerManger{
public:
    
    WorkerManger();
    ~WorkerManger();
    void Showmenu();
    void Exitmenu();
    void Add_Emp();
    //
    int m_EmpNum;
    Worker ** m_EmpArray;

    void save();
    void show();
    void del();
    void Find_Emp();

};



