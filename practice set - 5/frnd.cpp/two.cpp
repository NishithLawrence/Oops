#include<iostream>
using namespace std;

class stu;

class univ{
    private:
        int roll;
        string name;
        int maths;
    public:
        univ(){
            maths = 99;
        }
        friend void display(univ u1,stu s1);
};

class stu{
    private:
        string name;
        int phy;
    public:
        stu(){
            name = "nishith";
            phy = 100;
        }
        friend void display(univ u1,stu s1);
};

void display(univ u1,stu s1){
    cout<<"Total marks: "<<u1.maths+s1.phy;
}

int main(){
    univ u1;
    stu s1;

    display(u1,s1);

    return 0;
}