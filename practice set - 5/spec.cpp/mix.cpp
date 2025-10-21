#include<iostream>
using namespace std;
class emp{
    private:
        int salary;
    public:
        string name;

        emp set(int s){
            salary=s;
        }
        int get(){
            return salary;
        }
};
int main(){
    emp e1;
    e1.name="anatoly";
    cout<<e1.name;
    e1.set(2000);
    cout<<e1.get();

    return 0;
}