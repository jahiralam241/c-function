#include<iostream>
using namespace std;


void fun(){
    static int a=0;
    int b=5;
    a++;
    cout<<b<<" "<<a<<endl;

}
int main(){
    fun();
    fun();
    fun();
    return 0;

}