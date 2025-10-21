#include<iostream>
using namespace std;
class time{
    private:
        int hours;
        int mins;
        int secs;

    public:
        time(){
            hours=0;
            mins=0;
            secs=0;
        }
        time(int h, int m){
            hours=h;
            mins=m;
            secs=0;
        }
        time(int h, int m, int s){
            hours=h;
            mins=m;
            secs=s;
        }

        int gethours(){
            return hours;
        }
        int getmins(){
            return mins;
        }
        int getsecs(){
            return secs;
        }
};
int main(){

    time t1;
    cout<<" hours: "<<t1.gethours()<<" mins: "<<t1.getmins()<<" secs: "<<t1.getsecs()<<endl;

    time t2(2,50);
    cout<<" hours: "<<t2.gethours()<<" mins: "<<t2.getmins()<<" secs: "<<t2.getsecs()<<endl;

    time t3(2,50,52);
    cout<<" hours: "<<t3.gethours()<<" mins: "<<t3.getmins()<<" secs: "<<t3.getsecs()<<endl;

    return 0;
}