#include<iostream>
using namespace std;

int top=-1;
int arr[6];

void push(int value){
    top++;
    arr[top]=value;
}

void pop(){
    top--;
}

void print(){
    cout<<"Current Stack is : "<<" ";

    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    push(5);
    print();

    push(4);
    print();

    push(3);
    print();

    push(2);
    print();

    push(1);
    print();

    pop();
    print();

}
