#include<iostream>
#include<string.h>
#include<time.h>
using namespace std;

int main(){
    string password;
    cout<<"Enter your password: ";
    cin>>password;

    srand(time(NULL));

    int size=password.size();

    for(int i=0;i<size;i++){
        int num=rand()%256;
        password[i]=(char)num;
    }
    cout<<"The encrypted password is:"<<password;
}