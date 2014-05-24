#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

const int SIZE=101;

int main(){
  vector<double> list;
  double result;
  for(int i=2; i<=SIZE; i++){
    for(int j=2; j<=SIZE; j++){
      result = i*log(j);
      if(find(list.begin(),list.end(),result)==list.end())
        list.push_back(result);
    }
  }
  
  cout<<list.size();//Too high, should be 9183. Fuck it I'm learning python
}
