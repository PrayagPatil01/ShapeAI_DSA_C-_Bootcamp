#include <iostream>
using namespace std;
int main()
{
  int number,count=0;
  cout<<"Enter number to check whether it is Prime or Not: ";
  cin>>number;

  for(int a=1;a<=number;a++)
  if(number%a==0)
  count++;

  if(count==2)
  cout<<"It's a prime number \n";
  else
  cout<<"It's not a prime number \n ";

  return 0;
}