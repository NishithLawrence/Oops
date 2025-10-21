#include<iostream>
using namespace std;
class book{
    private:
        string title;
        int price;

    public:
        void setname(string n){
            title=n;
        }
        string getname(){
            return title;
        }

        
        void setprice(int m){
            price=m;
        }
        int getprice(){
            return price;
        }

};
int main(){
    
    book b1;
    b1.setname("health");
    cout<<b1.getname()<<endl;
    b1.setprice(2000);
    cout<<b1.getprice()<<endl;

    return 0;
}