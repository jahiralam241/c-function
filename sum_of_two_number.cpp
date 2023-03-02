#include<iostream>
using namespace std;
int add(int x,int y){
    int z=x+y;
    return z;
}
int main(){
    int a=10,b=15;
    int c=add(a,b);
    cout<<c;
    return 0;
    
}