#include<iostream>
using namespace std;


int  linear_search(int a[],int n,int key){
    for(int i=0;i<5;i++){
        if(key==a[i])
        return i;
    }
    return -1;

}
int main(){
    int a[5]={1,2,5,6,7};
    int index=linear_search(a,5,7);
    cout<<"element founded at"<<index<<endl;

    
    return 0;
    
}