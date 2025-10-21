#include<iostream>
using namespace std;

class employee{
    private:
        int id;
        int salary;
    public:
        void setId(int n){
            id=n;
        }
        int getId(){
            return id;
        }

        void setSalary(int m){
            salary=m;
        }
        int getSalary(){
            return salary;
        }
};
int main(){

    employee e1;
    e1.setId(2501);
    cout<<e1.getId()<<endl;
    e1.setSalary(50000);
    cout<<e1.getSalary()<<endl;

    employee e2;
    e2.setId(2502);
    cout<<e2.getId()<<endl;
    e2.setSalary(48000);
    cout<<e2.getSalary()<<endl;

    employee e3;
    e3.setId(2503);
    cout<<e3.getId()<<endl;
    e3.setSalary(46000);
    cout<<e3.getSalary()<<endl;

    employee e4;
    e4.setId(2504);
    cout<<e4.getId()<<endl;
    e4.setSalary(44000);
    cout<<e4.getSalary()<<endl;

    return 0;
}