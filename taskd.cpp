#include<iostream>
using namespace std;
int totaldigits(int number);
main ()
{
    int number;
    int answer;
    cout<< "enter number :";
    cin>>number;
    answer=totaldigits(number);
   cout<< "totalnumberofdigitsare :"<< answer;
}
int totaldigits(int number){
 
    int count=0;
while(number>0){
   number= number/10;
 count = count +1;

   }
   return count;

}