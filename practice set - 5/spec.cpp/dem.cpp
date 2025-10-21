#include<iostream>
using namespace std;
class demt{
    private:
        string name;
        int age;
    public:
        demt(string n,int a){
            name=n;
            age=a;
        }
        demt set(string n){
            name=n;
        }
        string get(){
            return name;
        }
        demt aset(int a){
            age=a;
        }
        int aget(){
            return age;
        }
};
int main(){
    demt d1("micheal",18);
    cout<<d1.get()<<d1.aget()<<endl;
    return 0;
}