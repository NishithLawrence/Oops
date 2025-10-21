#include<iostream>
using namespace std;
class book{
    private:
        string title;
        string author;
        int price;

    public:
        book(string t){
            title=t;
        }
        book(string t, string a){
            title=t;
            author=a;
        }
        book(string t, string a, int p){
            title=t;
            author=a;
            price=p;
        }

        string gettitle(){
            return title;
        }
        string getauthor(){
            return author;
        }
        int getprice(){
            return price;
        }
};

int main(){

    book b1("avengers");
    cout<<b1.gettitle()<<endl;

     book b2("avengers", "ronnie" );
    cout<<b2.gettitle()<<b2.getauthor()<<endl;

     book b3("avengers", "ronnie", 2000);
    cout<<b3.gettitle()<<b3.getauthor()<<b3.getprice()<<endl;

    return 0;
}