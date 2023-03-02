#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;


}
int main(){
    int x=10,y=20;
    swap(&x,&y);//as you can see in the output the actual parametar are changeing 
    //for swap in two number call by address works fine
    
    cout<<x<<" "<<y;
    return 0;
    
}