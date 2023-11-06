#include "employee.h"
using namespace std;
#include <iostream>
//自己新增代码
#include <fstream>
#define MAX 100

Employee::Employee(int id, string name, int deptid){
    this->m_Id = id;
    this->m_name = name;
    this->m_DeptId = deptid;
}

void Employee::showInfo(){
    cout<<"Employee id: "<<this->m_Id
    <<" name: "<<this->m_name<<" deptid: "
    <<this->m_DeptId<<"岗位是:"<<this->showDeptName()<<endl;
}

string Employee::showDeptName(){
    return "普通员工";
}

// void Employee::Addemployee(int  id, string name, int deptid,int numofepm=1){
//     ofstream write;
//     char array[MAX];
//     string homeDir = "/home/dp/C/store";
//     string filename = homeDir + "/contact.txt";
//     write.open(filename,ios::binary|ios::out);
//     cout<<"请输入添加员工数量:"<<numofepm<<endl;
//     cin>>numofepm;
//     for (int i=0; i<numofepm; i++){
        
//         write.write(&array[i],sizeof(array));
//     }   
//     cout<<"write completed"<<endl;
    
// }

