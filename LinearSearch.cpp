#------>>Linear search


#include<bits/stdc++.h>

using namespace std;

int linearSearch(int key  , int array[], int array_len){
    for(int i = 0 ; i < array_len ; i++){
        if(array[i] == key)
          return 1;
    }

    return -1;
}

int main(){
  //int n = 5;
  int array[] = {2,4,5,6,7,8};
  int key = 2000;
  int len = sizeof(array)/4;
  //int value = 34;

  cout<<linearSearch(key , array , len);


}