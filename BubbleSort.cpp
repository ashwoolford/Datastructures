#------->>Bubble sort

#include<bits/stdc++.h>

using namespace std;


int main(){

  int array[] = {2,434,52,63,74,8};
  int len = sizeof(array)/4;

  for(int i = 0 ; i < len ; i++){
      for(int j = 0 ; j < len - i ; j++){
          if(array[j]>array[j+1]){
              int temp = array[j];
              array[j] = array[j+1];
              array[j+1] = temp;
          }

      }
  }

  for(int i = 0 ; i < len ; i++)
    cout<<array[i]<<" ";                       



}