#include<iostream>
using namespace std;
class car{
    private:
        string brand;
        string model;
    public:
        car(string b, string m){
            brand=b;
            model=m;
        }
        string getb(){
            return brand;
        }
        string getm(){
            return model;
        }
        ~car(){
            cout<<"destructor is called"<<endl;
        }
};
int main(){
    car c1("toyata","fortuner");
    cout<<c1.getb()<<" "<<c1.getm()<<endl;
    car c2("ford","everest");
    cout<<c2.getb()<<" "<<c2.getm()<<endl;
    car c3("hyundai","palaside");
    cout<<c3.getb()<<" "<<c3.getm()<<endl;
    return 0;
}