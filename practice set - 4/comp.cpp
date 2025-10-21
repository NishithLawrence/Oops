#include<iostream>
using namespace std;
class complex{
    private:
        int real;
        int imag;
    public:
        complex(){
            real=0;
            imag=0;
        }
        complex(int r){
            real=r;
            imag=0;
        }
        complex(int r, int i){
            real=r;
            imag=i;
        }

        int getreal(){
            return real;
        }

        int getimag(){
            return imag;
        }
};

int main(){

    complex c1;
    cout<<c1.getreal()<<" "<<c1.getimag()<<endl;

    complex c2(5);
    cout<<c2.getreal()<<" "<<c2.getimag()<<endl;

    complex c3(5,3);
    cout<<c3.getreal()<<" "<<c3.getimag()<<endl;

    return 0;
}