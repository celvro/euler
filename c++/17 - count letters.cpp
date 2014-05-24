#include<iostream>
using namespace std;

int main()
{
  int count = 0;
  //numbers 1-9 (3+3+5+4+4+3+5+5+4 = 36)
  //each number used 100 times: TWO hundred, TWO hundred and one, etc.
  count += 36*100;
  
  //numbers 1-99 (10-19 = 70, 20-99 = 748)
  //count letters 10-19, math 20-99, then 1-99 used 10 times in each hundred
  count += (36+70+748) * 10;
  
  //"hundred"
  count += 7*9;
  
  //"hundred and"
  count += 10 * 99 * 9;
  
  //"thousand"
  count += 11;
  
  cout << count;
  
}
