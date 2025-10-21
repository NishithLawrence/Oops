#include<iostream>
using namespace std;
class student{
    private:
        string name;
        int age;
    
    public:
        void setName(string n){
            name=n;
        }

        string getName(){
            return name;
        }
        
        void setAge(int m){
            age=m;
        }
        int getAge(){
            return age;
        }
};
int main(){
    student s1;
    s1.setName("Nishith");
    cout<<s1.getName()<<endl;

    s1.setAge(20);
    cout<<s1.getAge()<<endl;

    return 0;
}