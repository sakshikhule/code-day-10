#include<iostream>
using namespace std;
main()
{
  int a , n,fact=1;
  cout<<"enter any no. = ";
  cin>>n;
  for(a=1;a<=n;a++)
  {
     fact=fact*a;
  }
  cout<<"factorial is = "<<fact;
}
