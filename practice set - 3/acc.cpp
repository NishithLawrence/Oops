#include<iostream>
using namespace std;
class account{
    private:
        int accno;
        double balance;
    
    public:
        void setAccno(int n){
            accno=n;
        }

        int getAccno(){
            return accno;
        }

        void setBalance(double m){
            balance=m;
        }
        double getBalance(){
            return balance;
        }
};

int main(){

    account a1;
    a1.setAccno(250001);
    cout<<"account number: "<<a1.getAccno()<<endl;
    a1.setBalance(50000);
    cout<<"balance: "<<a1.getBalance()<<endl;

    return 0;
}