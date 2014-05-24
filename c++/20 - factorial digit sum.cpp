#include<iostream>
#include<cstring>
using namespace std;

const int MAX=5000;

int main()
{
  int carry, sum=0;
  int *arr = new int[MAX];//use array to store each digit of number separately
  memset(arr, 0, MAX*sizeof(int)); //set all of array to 0
  arr[MAX-1] = 1;
  
  for(int i=1; i<=100; i++){
    //this is basically long multiplication
    carry=0;
    for(int j=MAX-1; j>=0; j--){
      arr[j] = (arr[j]*i) + carry;
      carry = arr[j]/10;
      arr[j] %= 10;
    }
  }
  
  for(int i=0; i<MAX; i++){
    sum+=arr[i];
  }
  cout <<sum;
  
  return 0;
}
