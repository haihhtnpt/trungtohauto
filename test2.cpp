#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
int main ()
{ int z=3;/*
  string str ("Test string");
  for (int i=0; i<str.length(); ++i)
  {
    cout << str[i];
    
  }
  cout<<typeid(str[2]).name()<<endl;
  cout<<typeid(z).name()<<endl;
  */
  string c;
  string a="hai";
  char b='+';
  c=a+b;
  string str;
  cout<<str.append(1,'G')<<endl;
  return 0;
}
