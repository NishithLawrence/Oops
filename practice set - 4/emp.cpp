#include<iostream>
using namespace std;
class employee{
    private:
        string name;
        float id;
        float salary;
    public:
        employee(string n, float i){
            name=n;
            id=i;
        }
        employee(string n, float i, float s){
            name=n;
            id=i;
            salary=s;
        }

        string getname(){
            return name;
        }
        float getid(){
            return id;
        }
        float getsalary(){
            return salary;
        }
};

int main(){

    employee e1("polo",25001);
    cout<<e1.getname()<<e1.getid()<<endl;

    employee e2("polo",25001, 50000);
    cout<<e2.getname()<<e2.getid()<<e2.getsalary()<<endl;

    return 0;
}