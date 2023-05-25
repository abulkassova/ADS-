#include <iostream>
#include <list> 
#include <vector>
#include <algorithm>
using namespace std;
void bucket_sort(float arr[], int n){
  vector< list < float > > bucket(10);//create 10 empty buckets
  int first_digit;
  for(int i=0;i<n;i++){
    first_digit = (int)(arr[i]*10); //gettin the first digit through int
    bucket[first_digit].push_back(arr[i]);//pushing the element to the each digits end
  }

  for(int i=0;i<10;i++){ //sorting
    bucket[i].sort();
  }

  int j = 0; 
  for(int i=0;i<10;i++){
    while(!bucket[i].empty()) //while not empty
    {
        arr[i] = bucket[i].front(); //getting the first element 
        bucket[i].pop_front(); // deleting
        j++;
    }
  }

}
int main(){
float arr[10]={0.1,0.7,0.4,0.23,0.342,0.424420,0.3,0.2};
    bucket_sort(arr, 10);
    for(int i=0;i<10; i++){
        cout<< arr[i]<<" ";
    }
    return 0;
}