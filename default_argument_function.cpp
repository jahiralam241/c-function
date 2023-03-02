#include<iostream>
using namespace std;
int sum (int a,int b,int c=0){//int c=0  is is the defaulyt argument 
    return a+b+c;

}

int max(int a=0,int b=0,int c=0){//so this funtion will work for 4  different function 

    return a>b &&a>c ?a:b>c?b:c;

}







int main(){
    cout<<sum(5,5)<<endl;
    cout<<sum(5,5,5)<<endl;
    cout<<max(10,5)<<endl;
    cout<<max(10,50,8);

    return  0;
    
}