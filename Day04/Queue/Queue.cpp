#include<iostream>
using namespace std;

const int size=5;
int queue[size],front=0,rear=0;


void enqueue(int value){
    if(rear==size){
        cout<<"queue is full"<<endl;
    }else{
        cout<<value<<" added"<<endl;
        queue[rear]=value;
    }
    rear++;
}

void dequeue(){
    if(front==rear){
        cout<<"queue is empty"<<endl;
    }else{
        front++;
        cout<<"\n"<<" removed from the queue"<<endl;
    }
}


void display(){
    int temp;
    temp=front;
    if(temp==rear){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Current queue is :"<<" ";
        for(int i=temp;i<rear;i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    enqueue(3);
    display();

    enqueue(2);
    display();

    enqueue(1);
    display();

    dequeue();
    display();

}
