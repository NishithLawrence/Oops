#include<iostream>
#include<string>
using namespace std;
class my_string{
    string str;

    public:
        my_string(string s=""){
            str=s;
        }

        void to_upper(){
            for(int i=0;i<str.length();i++){
                if(str[i]>='a' && str[i]<='z'){
                    str[i]=str[i]-32;
                }
            }
        }

        void to_lower(){
            for(int i=0; i<str.length();i++){
                if(str[i]>='A' && str[i]<='Z'){
                    str[i]=str[i]+32;
                }
            }
        }
        string display(){
            return str;
        }
};
int main(){

    my_string s("my name is nishith");
    cout<<"original"<<s.display()<<endl;

    s.to_upper();
    cout<<"uppercase: "<<s.display()<<endl;

    s.to_lower();
    cout<<"lowercase: "<<s.display()<<endl;

    return 0;
}
 