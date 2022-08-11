#include <iostream>
#include<string>
#include <stdio.h>
#include<list>
#include<vector>
using namespace std;

class Expression {
private:
	string value;


public:
	Expression(string str) {
		value = str;
	}
	void getValue(){
		cout<<value;
	}
	bool isOperator(char c) {
		if (c == '+' || c == '-' || c == '*' || c == '/' || c=='.') {
			return true;
		}
		else
			return false;
	};
	bool isOperator(string c) {
		if (c == "+" || c == "-" || c == "*" || c == "/" || c==".") {
			return true;
		}
		else
			return false;
	}
	int toDigit(string str) {
		int result = atoi(str.c_str());
		return result;
	}
	int coutElenment(){
		int n;
		n=value.size();
		
		return n;
	}
	//12+23/3
	list<string> spilit() {
		list<string> strings;
		string tmp = "";
	//	cout<<value.length()<<endl;
		for (int i = 0; i < value.length(); i++) {
			if (isOperator(value[i])) {
				strings.push_back(tmp);
				strings.push_back("" + value[i]);
				tmp = "";
			}
			else {
				tmp  +=value[i];
			}
		}
	    cout<<strings.size()<<endl;
		return strings;

	}
	void push(list<string>  &str) {
		
			for (list<string>::iterator iter = str.begin(); iter != str.end(); ++iter){
    	cout<<*iter<<endl;
	}
		
	}

};

int main(){
    list<string> a;
	Expression str("12+12/32.");
//	str.getValue();
	a=str.spilit();
//	cout<<a.size();
	str.push(a);
	cout<<"so phan tu"<<str.coutElenment();


//F:\ClassH\trungtohauto\trungtohauto
//	cout << "demo";
}
