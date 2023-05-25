#include <iostream>
using namespace std;

void insertion_sort(int n, int* arr){
   
    int j;
    int temp;
    for(int i = 1; i < n; i ++){
        j=i-1;
        temp =arr[i];
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
     
     arr[j+1]=temp;
    }
}


int main(){
    int arr[10]={6,1,8,7,4,3,3,23,52,7};
    insertion_sort(10,arr);
    for(int i=0;i<10; i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}