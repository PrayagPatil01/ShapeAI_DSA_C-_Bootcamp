#include <iostream>
using namespace std;
int main()
{
  int var1,var2,swap;
  cout<<"Enter value for first integer: ";
  cin>>var1;
   cout<<"Enter value for second integer: ";
  cin>>var2;
  cout<<"\n Values Before Swapping: \n"<<endl;
  cout<<"First Interger ="<<var1<<endl;
  cout<<"Second Integer ="<<var2<<endl;
  swap=var1;
  var1=var2;
  var2=swap;
  cout<<"\nValues After Swapping: \n"<<endl;
  cout<<"First Integer ="<<var1<<endl;
  cout<<"Second Integer ="<<var2<<endl;
  return 0;
}