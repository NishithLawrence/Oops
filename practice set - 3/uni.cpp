#include<iostream>
using namespace std;
class university{

    private:
        string name;
        int rank;
    
    public:
        void setName(string n){
            name=n;
        }
        string getName(){
            return name;
        }

        void setRank(int m){
            rank=m;
        }
        int getRank(){
            return rank;
        }

};

int main(){

    university c1;
    c1.setName("sai university");
    cout<<"Name: "<<c1.getName()<<endl;
    c1.setRank(0);
    cout<<"rank: "<<c1.getRank()<<endl;

    return 0;
}