#include <iostream>
#include <algorithm>
using namespace std;
void counting_sort(int arr[], int n, int k){
    int* c=new int [k];
    int* b=new int [n]; // temperary array b 
    for(int i=0;i<k; i++){ // intialization of array c
        c[i]=0;
    }
    for(int i=0;i<n;i++){ // counting of every element
        c[arr[i]-1]++;
    }
    for(int i=1;i<k;i++){ // update the array to get cumulative sum 
        c[i]+=c[i-1];
    }
    for(int i=n-1;i>=0;i--){ // building temporary b array
        b[c[arr[i]-1]-1]=arr[i];
        c[arr[i]-1]--;
    };

    for(int i=0;i<n;i++){ // copy to the main array
        arr[i]=b[i];
    }
    delete[]b; // free memory
    delete[]c;
}
int getMax(int* arr, int n){
     int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        return max;
}
}

void radix_sort(int* arr, int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    } //get the number of digits
    for(int k=0;max/k>0; k*=10){
        counting_sort(arr,n,k);
    }

}
int main(){

    int arr[10]={6,1,8,7,4,3,3,23,52,7};
    radix_sort(arr, 10);
    for(int i=0;i<10; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}