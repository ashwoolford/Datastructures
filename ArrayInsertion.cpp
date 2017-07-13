#----------->>> insetion in array

#include<bits/stdc++.h>

using namespace std;

int main(){
  int n = 5;
  int array[n];
  int loc = 2 ;
  int len = sizeof(array)/4;
  int value = 34;

  for(int i = 0 ; i < n-1 ; i++){
      cin>>array[i];
  }

  for(int i = n-1 ; i>=loc ; i--){
      array[i] = array[i-1];
  }

  array[loc] = value;


   for(int i = 0 ; i < n ; i++){
    cout<<array[i]<<" ";
  }

}