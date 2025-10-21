#include<iostream>
using namespace std;
class car{
    private:
        string brand;
        string model;
    public:
        void setBrand(string n){
            brand=n;
        }
        string getBrand(){
            return brand;
        }

        void setModel(string m){
            model=m;
        }
        string getModel(){
            return model;
        }
};
int main(){

    car cars[3];

    cars[0].setBrand("volkswagen");
    cars[0].setModel("virtus");

    cars[1].setBrand("honda");
    cars[1].setModel("civic");

    cars[2].setBrand("skoda");
    cars[2].setBrand("slavia");

    cars[3].setBrand("maruthi");
    cars[3].setBrand("ciaz");

    for(int i=0;i<=3;i++){
        cout<<"Brand:"<<cars[i].getBrand()<<" "<<"Model:"<<cars[i].getModel()<<endl;
    }

    return 0;
}