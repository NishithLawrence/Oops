#include<iostream>
using namespace std;
class student{
    
    private:
        string name;
        int age;
        int marks;
    
    public:
        student(){
            name="unknown";
            age=0;
            marks=0;
        }

        student(string n, int m, int l){
            name=n;
            age=m;
            marks=l;
        }

        string getname(){
            return name;
        }
        int getage(){
            return age;
        }
        int getmarks(){
            return marks;
        }
};
int main(){

    student s1;
    cout<<s1.getname()<<s1.getage()<<s1.getmarks()<<endl;

    student s2("Nishi", 20, 100);
    cout<<s2.getname()<<s2.getage()<<s2.getmarks()<<endl;

    return 0;
}