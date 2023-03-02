#include<iostream>
using namespace std;
int maximum_find(int a,int b,int c){
    if(a>b &&a>c){
        return a;

    }
    else if(b>c){
        return b;

    }
    else{
        return c;

    }
}
int main(){
    int x=10,y=16,z=5;
    int a=maximum_find(x,y,z);
    cout<<a;
    
    return 0;
    
}