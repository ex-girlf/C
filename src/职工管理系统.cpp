#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"  
using namespace std;


int main(){
    //测试代码
    // Worker * worker = new Employee(1,"张三",1);
    // worker->showInfo();
    // delete worker;

    // Worker * manager = new Manager(2,"李四",2);
    // manager->showInfo();
    // delete manager;

    // Worker * boss = new Boss(3,"赵四",3);
    // boss->showInfo();
    // delete boss;

    WorkerManger vm;
    // 
    int choice = 0;
    // bool condition = true;
    // while(condition){
        vm.Showmenu();
        cout<<"请输入数字:"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 0:
            vm.Exitmenu();
            break;
        case 1: //添加职工
            vm.Add_Emp();
            break;
        case 2:
            vm.show();
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        default:
            break;
        }      
    }
    
//     return 0;
// }