#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(int* arr, int start, int end){
    int pivot= arr[start]; // pivot - arr[0]
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot) count ++; //counting how many elements equal/less than pivot
    }
    int pivot_ind=start+count; //givin pivot correct position
    swap(arr[pivot_ind], arr[start]);

    //sorting from pivot
    int i=start, j=end;
    while(i<pivot_ind && j>pivot_ind){
       while (arr[i]<pivot) i++;
       while (arr[j]>pivot) j--;
       if(i<pivot_ind && j>pivot_ind){
        swap(arr[i++], arr[j--]);
       }
    }
    return pivot_ind;
    ;
}
void quick_sort(int* arr, int start, int end){
    if(start>=end) //base condition
    return;
    int pivot=partition(arr,start, end); //geting pivot index
    quick_sort(arr, start, pivot-1);//sorting the left
    quick_sort(arr, pivot+1, end);//sorting the right
}

int main(){
  int arr[10]={6,1,8,7,4,3,3,23,52,7};

    quick_sort(arr, 0, 9);
    for(int i=0;i<10; i++)
        cout<< arr[i]<<" ";    
    return 0;
}