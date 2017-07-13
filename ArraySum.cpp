#------------>>>>array sum

#include<bits/stdc++.h>

using namespace std;

int main(){
  int array[] = {34,45,23,32,3, 67,7};
  int sum = 0 ;
  int len = sizeof(array)/4;
  for(int i =0 ; i < len ; i++){
      sum = sum + array[i];
  }

  cout<<sum;

}