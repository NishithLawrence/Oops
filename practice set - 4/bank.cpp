#include<iostream>
using namespace std;
class bankacc{
    private:
        int accno;
        long balance;
    
    public:
        bankacc(){
            accno=0;
            balance=0;
        }

        bankacc(int n){
            accno=n;
            balance=0;
        }

        bankacc(int n, long m){
            accno=n;
            balance=m;
        }

        int getaccno(){
            return accno;
        }
        long getbalance(){
            return balance;
        }
};
int main(){

    bankacc b1;
    cout<<"def "<<b1.getaccno()<<b1.getbalance()<<endl;

    bankacc b2(5);
    cout<<"def "<<b2.getaccno()<<b2.getbalance()<<endl;

    bankacc b3(5,2);
    cout<<"def "<<b3.getaccno()<<b3.getbalance()<<endl;

    return 0;
}