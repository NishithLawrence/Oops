#include<iostream>
using namespace std;
class car{
    private:
        string brand;
        string model;
        int price;
    
    public:
        car(string b){
            brand=b;
        }
        car(string b, string m){
            brand=b;
            model=m;
        }
        car(string b, string m, int p){
            brand=b;
            model=m;
            price=p;
        }

        string getbrand(){
            return brand;
        }
        string getmodel(){
            return model;
        }
        int getprice(){
            return price;
        }
};

int main(){

    car c1("FOrd");
    cout<<"brand: "<<c1.getbrand()<<endl;

    car c2("Ford","Endevour");
    cout<<"brand: "<<c2.getbrand()<<"model: "<<c2.getmodel()<<endl;

    car c3("Ford","Endevour", 5000000);
    cout<<"brand: "<<c3.getbrand()<<"model: "<<c3.getmodel()<<"price: "<<c3.getprice()<<endl;

    return 0;
}