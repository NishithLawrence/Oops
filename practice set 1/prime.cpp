 #include <iostream>
 #include <cmath>
 using namespace std;
 int main(){
    int i,j, count;
    for(int i=2;i<=100;i++){
        count=0; //to reset the count to 0
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            cout<<i<<endl;
        }
    }

    return 0;
 }