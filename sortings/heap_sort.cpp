#include <iostream>
using namespace std;

 void heapify(int* arr, int n, int i){
        int max=i;
        int left=2*i+1;
        int right = 2*i+2;
         if(left<n && arr[left]>arr[max]){
            max=left;
         }
         if(right<n && arr[right]>arr[max]){
            max=right;
         }
         if(max!=i){
            swap(arr[i],arr[max]);
            heapify(arr, n, max);
         }
    }

 void heap_sort(int* arr, int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr, n, i);
    }
    for(int i=n-1;i>0;i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
 }
 
int main(){
     int arr[10]={6,1,8,7,4,3,3,23,52,7};

    heap_sort(arr, 10);
    for(int i=0;i<10; i++){
        cout<< arr[i]<<" ";
    }
   
    return 0;
}