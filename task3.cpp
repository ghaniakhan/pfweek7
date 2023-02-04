#include<iostream>
using namespace std;
void printtable(int number);
  main ()
 {
    int number;
    cout<< "enter number :";
    cin>> number;
    int i;
    int table;
    for(i=1;i<=10;i=i+1){
    table= number*i;
    cout<< "number *"<< i<<"="<<table<< endl;
    }
 }

