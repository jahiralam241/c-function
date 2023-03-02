#include<iostream>
using namespace std;
int g=5;

void fun (){

    int g ;

    int a;
    a++;
    cout<<a<<" "<<g<<endl;
  g++;


}
int main(){
    int x;
    fun();
    cout<<g<<endl;
    return 0;

}
//varialbe in c++ has block leevl scope .....remeber it 
