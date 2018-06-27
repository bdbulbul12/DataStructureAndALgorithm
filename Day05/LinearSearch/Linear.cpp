#include<iostream>
using namespace std;
int main(){
    const int size = 5;
    int arr[size]={5,2,1,0,3};
    int value,i;

    cout<<"Enter the value for searching";
    cin>>value;
    for(i=0;i<size;i++){
        if(value==arr[i]){
            break;
        }
    }

    if(i!=size){
        cout<<value<<" Found at "<<i<<" index"<<endl;
    }else{
        cout<<"value not found"<<endl;
    }
}
