#include<iostream>
using namespace std;
class rectangle{
    private:
        int length;
        int width;
    public:
        void setlength(int n){
            length=n;
        }
        int getlength(){
            return length;
        }

        void setwidth(int m){
            width=m;
        }
        int getwidth(){
            return width;
        }

        int getArea(){
            return length*width;
        }

};
int main(){

    rectangle r1;
    r1.setlength(25);
    cout<<r1.getlength()<<endl;

    r1.setwidth(25);
    cout<<r1.getwidth()<<endl;

    return 0;
}