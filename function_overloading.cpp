#include<iostream>
using namespace std;
int add(int x,int y){
    int z=x+y;
    return z;

}
//program can have same funtion name but with different argument this id called funion overlapping 
//c does not can have function with same name but c++ can 
int add(int x,int y,int z){
    int a=x+y+z;
    return a;

}
int main(){
    int a=10,b=12,c=10;
    int m=add(a,b);
    int n=add(a,b,c);
    cout<<m;
    cout<<n;

    return 0;
    
}