#include<iostream>
using namespace std;

const int MAX=20162;

bool is_abundant( int n ){
  int sum=1;
  for(int i=2; i*i<=n; i++){
    if(n%i==0){
      if(i*i==n)
        sum+=i;
      else
        sum+=i+n/i;
    }
  }
  return sum>n?1:0;
}

int main(){  
  int abundant[MAX];
  bool checked[MAX];
  int count=0, sum=0;
  
  for(int i=1; i<MAX; i++)
    if(is_abundant(i))
      abundant[count++]=i;
  for(int i=0; i<count; i++)
    for(int j=i; j<count; j++)
      if(abundant[i]+abundant[j] < MAX)
        checked[abundant[i]+abundant[j]] = true;
  for(int i=1; i<MAX; i++)
    if(!checked[i])
      sum+=i;
        
  cout<<sum;
}
