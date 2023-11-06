#include "manager.h"

Manager::Manager(int id, string name, int deptid){
    this->m_Id = id;
    this->m_name = name;
    this->m_DeptId = deptid;
}

void Manager::showInfo(){
    cout<<"Employee id: "<<this->m_Id
    <<" name: "<<this->m_name<<" deptid: "
    <<this->m_DeptId<<"岗位是:"<<this->showDeptName()<<endl;
}

string Manager::showDeptName(){
    return "经理";
}


