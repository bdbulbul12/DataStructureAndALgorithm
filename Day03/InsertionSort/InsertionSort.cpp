#include<iostream>
using namespace std;

int main(){
    const int size=5;
    int arr[size]={5,4,3,2,1};
    int temp,j,count=0;

    for(int i=0;i<size;i++){
        count++;
        j=i;

        cout<<"After" <<count<<"pass"<<endl;

        while(j>0 && arr[j]<arr[j-1]){
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;


            for(int j = 0 ; j<size;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
    }
}
