#include<iostream>
using namespace std;

int main(){
     int temp =10;
    for(int i=0; i<10; i++){
        cout <<"##" ;
        temp--;
        if(i>=0 && i<5){
            for(int j=0; j<5; j++){
                if(i==j){
                    cout <<"##" ;
                }
                else{
                    cout <<" " ;
                } 
            }
        }
        else{
            for(int k=5; k>=0; k--){
                if(k==temp){
                    cout << "##";
                }else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}