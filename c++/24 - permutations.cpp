#include<iostream>
#include<algorithm>
using namespace std;

const int MAX=1000000;

int main(){
  int ints[] = {0,1,2,3,4,5,6,7,8,9};
  for(int i=0;i<MAX-1;i++)
    next_permutation(ints,ints+10);
  for(int i=0;i<10;i++)
    cout<<ints[i];
}
