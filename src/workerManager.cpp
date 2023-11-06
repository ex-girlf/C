#include "workerManager.h"
#include <unistd.h>
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;
#include <fstream>

WorkerManger::WorkerManger(){
    this->m_EmpArray = NULL;
    this->m_EmpNum = 0;
}
WorkerManger::~WorkerManger(){
    
}


void WorkerManger::Showmenu(){
    cout<<"***************************************************"<<endl;
    cout<<"***************欢迎使用职工管理系统****************"<<endl;
    cout<<"******************0.退出管理程序*******************"<<endl;
    cout<<"******************1.增加职工信息*******************"<<endl;
    cout<<"******************2.显示职工信息*******************"<<endl;
    cout<<"******************3.删除职工信息*******************"<<endl;
    cout<<"******************4.修改职工信息*******************"<<endl;
    cout<<"******************5.查找职工信息*******************"<<endl;
    cout<<"******************6.排序职工信息*******************"<<endl;
    cout<<"******************7.清空职工信息*******************"<<endl;
    cout<<"***************************************************"<<endl;
    cout<<endl;


}

void WorkerManger::Exitmenu(){
    cout<<"欢迎下次使用"<<endl;
    pause();
}

void WorkerManger::Add_Emp(){
    //
    int addnum = 0;
    cout<<"请输入添加的职工人数"<<endl;
    cin>>addnum;
    if (addnum>0){
        int newSize = this->m_EmpNum + addnum;
        Worker ** newspace = new Worker*[newSize];
        if(m_EmpArray!=NULL){
            for(int i=0;i<this->m_EmpNum;i++){
                newspace[i] = this->m_EmpArray[i];
            }
                    
        }
        for(int i=0;i<addnum;i++){
                int id;
                string name;
                int Deptid;
                cout<<"请输入第"<<i+1<<"个新员工编号"<<endl;
                //cout<<"请输入员工编号:"<<id<<endl;
                cin>>id;
                cout<<"请输入第"<<i+1<<"个员工姓名:"<<name<<endl;
                cin>>name;
                cout<<"请输入第"<<i+1<<"个员工岗位:"<<endl;
                cout<<"1、普通职工"<<endl;
                cout<<"2、经理"<<endl;
                cout<<"3、老板"<<endl;

                cin>>Deptid;
                //前边for条件已经有了i<addnum，这里就不用while了
                // while (i<addnum)
                Worker * worker = NULL;
                switch (Deptid)
                {
                case 1:
                    worker = new Employee(id,name,1);
                    break;
                case 2:
                    worker = new Manager(id,name,2);
                    break;
                case 3:
                    worker = new Boss(id,name,3);
                default:
                    break;
                }
                newspace[this->m_EmpNum + i] = worker;
 
            }
            //释放原有空间
            delete[] this->m_EmpArray;
            //更改新空间的指向
            this->m_EmpArray = newspace;
            //更新新的职工人数
            this->m_EmpNum = newSize;  
            //提示成功添加
            cout<<"成功添加了"<<addnum<<"名新职工"<<endl;
            this->save();
        } 
    else{
        cout<<"输入有误"<<endl;
        }   
    }
    
void WorkerManger::save(){
    ofstream ofs;
    ofs.open(FILENAME,ios::out);
    for (int i = 0;i < this->m_EmpNum ; i++){
        ofs<<this->m_EmpArray[i]->m_Id<<" "<<
        this->m_EmpArray[i]->m_name<<" "<<
        this->m_EmpArray[i]->m_DeptId<<endl;
    }
    ofs.close();
}

void WorkerManger::show(){
    ifstream ifs;
    ifs.open(FILENAME,ios::in);
    for(int i=0;i<this->m_EmpNum;i++){
        cout<<this->m_EmpArray[i]->m_Id<<" "<<this->m_EmpArray[i]->m_name<<" "<<this->m_EmpArray[i]->m_DeptId<<endl;
    }
    ifs.close();
    pause();
}

void WorkerManger::del(){
    string name;
    cout<<"请输入删除员工的姓名:"<<endl;
    cin>>name;
    for(int i=0;i<this->m_EmpNum;i++){
        if(this->m_EmpArray[i]->m_name == name){
            for(int j=i;j<this->m_EmpNum - i;j++){
                this->m_EmpArray[j] = this->m_EmpArray[j+1];
            }
            // WorkerManger temp;
            // temp = this->m_EmpArray[i+1];
            // this->m_EmpArray[i] = this->m_EmpArray[i+1];
        }
    }
}

void WorkerManger::Find_Emp(){

}