#include<iostream>
using namespace std;
class rect{
    private:
        int len;
        int bre;
    public:
        rect(int l, int b){
            len=l;
            bre=b;
        }
        int getl(){
            return len;
        }
        int getb(){
            return bre;
        }
        ~rect(){
            cout<<"destructor is called"<<endl;
        }   
};
int main(){
    rect r1(15,20);
    cout<<r1.getl()<<" "<<r1.getb()<<endl;
    return 0;
}