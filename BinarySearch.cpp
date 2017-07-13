#------>>binary search


#include<bits/stdc++.h>

using namespace std;

int BinarySearch(int key  , int array[], int array_len){

    int start = 0 , last = array_len;

    while(start <= last){

         int mid = (start+last)/2;
         if(array[mid] == key)
         return 1;
         else if(key < array[mid])
           last = mid - 1;
         else
           start = mid+1;
    }


    return -1;
}

int main(){

  int array[] = {2,4,5,6,7,8};
  int key = 2000;
  int len = sizeof(array)/4;

  cout<<BinarySearch(key , array , len);


}