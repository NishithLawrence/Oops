#include<iostream>
using namespace std;
class x{
    private:
        int a=5;
    friend class y;
};
class y{
    public:
        void show(x obj){
        cout<<obj.a;
        }
};
int main(){
    x obj1;
    y obj2;

    obj2.show(obj1);
    return 0;
}