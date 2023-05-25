#include <iostream>
using namespace std; 

void selection_sort(int* arr, int n){
    int min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j])
            min=j;
        }
        swap(arr[min], arr[i]);
    }
}

int main(){
  int arr[10]={6,1,8,7,4,3,3,23,52,7};
    selection_sort(arr, 10);
    for(int i=0;i<10; i++){
        cout<< arr[i]<<" ";
    }
    return 0;

}