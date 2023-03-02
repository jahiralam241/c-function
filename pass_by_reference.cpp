#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
//we should avoid writing any complax instruction call by reference funtion

}
int main(){
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;

}