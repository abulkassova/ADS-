#include <iostream>
#include <vector>
using namespace std;

void merge(int* arr, int start, int mid, int end){
    
    vector <int> left, right;

    for(int i=start;i<=mid; i++){
        left.push_back(arr[i]);
    }
    for(int j=mid+1; j<=end; j++){
        right.push_back(arr[j]);
    }

    left.push_back(10000);
    right.push_back(10000);

    for(int i=start;i<=end;i++){
        if(left.front() <right.front())
        {
            arr[i]=left.front();
            left.erase(left.begin());
        }
        else
            {
            arr[i]=right.front();
            right.erase(right.begin());
            }
        
        };
}

void merge_sort(int* arr, int start, int end){

    if(start>=end) return;

        int mid = start+(end-start)/2;
        merge_sort(arr,start,mid);
        merge_sort(arr, mid+1, end);
        merge(arr,start,mid,end);
}

int main(){
  int arr[10]={6,1,8,7,4,3,3,23,52,7};

    merge_sort(arr, 0, 9);
    for(int i=0;i<10; i++){
        cout<< arr[i]<<" ";
    }
    
    return 0;
}