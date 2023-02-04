#include<iostream>
using namespace std;
int frequencychecker(int number,int digit);
main()
{
  int number;
  int digit;
  int answer;
  cout<< "enter number is :";
  cin>> number;;
  cout<< "enter digit is :";
  cin>> digit;
  answer=frequencychecker(number,digit);
  cout<< "frequency of digit is :"<< answer;
}
int frequencychecker(int number,int digit)
{
  int i;
  int j;
  int frequency;
  int rem;
  for(int i=0;i<10;i=i++){
    for(j=number;j>0;j= j/10){
      rem= j%10;
      if(rem==i){
      frequency++;
    }
  }
  cout<<frequency<< endl;
  }
  return frequency;
}