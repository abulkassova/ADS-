#include <iostream>
using namespace std;

void bubble_sort(int* arr, int n){
    bool swapped = false;

    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
        
            if (arr[j] > arr[j + 1]){
                swap(arr[j],arr[j + 1]);
                swapped = true; }
        }
        if(swapped == false) break;
    }
}
int main(){
    int arr[10]={6,1,8,7,4,3,3,23,52,7};
    bubble_sort(arr, 10);
    for(int i=0;i<10; i++){
        cout<< arr[i]<<" ";
    }

    return 0;
}