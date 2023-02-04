#include<iostream>
using namespace std;
int calculategcd(int number1,int number2);
int calculatelcm(int number1,int number2,int gcd);
main ()
{
    int number1;
    int number2;
    int answer;
    int ans;
    cout<< "enter first number:";
    cin>> number1;
    cout<< "enter second number :";
    cin>> number2;
     answer=calculategcd(number1,number2);
     ans=answer;
     cout<< "gcd is :"<< answer<<  endl;
     cout<< "lcm is :"<< ans<< endl;
}
int calculategcd(int number1,int number2)
{
    while(number1!=number2){
        if(number1>number2){
            number1= number1-number2;
        }
        else
        {
            number2= number2-number1;  
        } 
    }
    return number1;
}
int calculatelcm(int number1,int number2,int gcd)
{
    int lcm= (number1*number2)/gcd;
    return lcm;
}