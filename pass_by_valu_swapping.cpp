#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
cout<<a<<" "<<b<<endl;

}
int main(){
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y;// as you can see swapping is not success full because call by valu method does not chage the actual parametear
    return 0;
    
}