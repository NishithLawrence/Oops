#include<iostream>
using namespace std;
class temperature{
    private:
    int celsius;

    public:
        void setCelsius(int n){
            celsius=n;
        }
        
        int getFahren(){
            return (celsius * 9.0 / 5.0) + 32;
        }
};

int main(){

    temperature t1;
    t1.setCelsius(25);
    cout<<"celsius to fahrenheit: "<<t1.getFahren()<<endl;

    return 0;
}