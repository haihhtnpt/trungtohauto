#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
bool isOperator(char c) {
  
		if (c == '+' || c == '-' || c == '*' || c == '/' || c=='.') {
			return true;
		}
		else
			return false;
};

using namespace std;
int main()
{
  list<string> sList;

  sList.push_back("Uno");
  sList.push_back("Dos");
  sList.push_back("Tres");
  sList.push_back("Quatro");
  sList.push_back("Cinco");
  sList.push_back("Seis");
  sList.push_back("Siete");
  sList.push_back("Ocho");
  sList.push_back("Nueve");
  sList.push_back("Diez");
  sList.push_back(to_string(int('/')));
  
  string value="12+12/32.";
  list<string> strings;
		string tmp = "";
		string tmp2="";
	//	cout<<value.length()<<endl;
		for (int i = 0; i < value.length(); i++) {
			if (isOperator(value[i])) {
				strings.push_back(tmp);
				 tmp2 +=value[i];
				strings.push_back(tmp2);
				tmp = "";
				tmp2="";
			}
			else {
				tmp += value[i];
			}
		}

  list<string>::iterator iter;
strings.pop_back();

  
    for (list<string>::iterator iter = strings.begin(); iter != strings.end(); ++iter){
    	cout<<*iter<<" ";
	}

  return 0;

}
