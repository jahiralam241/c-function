#include<iostream>
using namespace std;
template<class T>
T max(T a,T b){
   return  a>b?a:b;

}
int main(){
 cout<<max(5,10);
 

}