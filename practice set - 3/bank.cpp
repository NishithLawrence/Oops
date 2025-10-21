#include<iostream>
using namespace std;
class bankaccount{
    private:
        int balance;
    public:
        void setBalance(int n){
            if(n>=0){
                balance=n;
            }
            else{
                cout<<"balance cannot be zero"<<endl;
            }
        }
        int getBalance(){
            return balance;
        }
};
int main(){
    bankaccount a1;
    a1.setBalance(202020);
    cout<<a1.getBalance()<<endl;

    return 0;
}