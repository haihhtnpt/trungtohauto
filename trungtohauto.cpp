// problem1Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include <stdio.h>
#include<list>
#include<vector>
using namespace std;

class Node {
private:
	Node* next;
	string str;
	int data;
public:
	Node() {
		str = "";
		next = NULL;
		data = 0;
	}
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
	Node(string str) {
		this->str = str;
		this->next = NULL;
	}
	int getData() {
		return data;
	}
	string getStr() {
		return str;
	}
	Node* getNext() {
		return next;
	}
	void setData() {
		this->data = data;
	}
	void setStr() {
		this->str = str;
	}
	void setNext(Node* tmp) {
		this->next = tmp;
	}
};

typedef class Node* node;

class Stack {
private:
	Node* pHead;
	Node* pTail;
public:
	Stack() {
		pHead = NULL;
		pTail = NULL;
	}
	
	void pushStr(string str) {
		node tmp = new Node(str);
		if (pHead == NULL) {
			pHead = pTail = tmp;
			return;
		}
		else {
			pTail->setNext(tmp);
			pTail = tmp;
		}
	}
	void pushData(int data) {
		node tmp = new Node(data);
		if (pHead == NULL) {
			pHead = pTail = tmp;
			return;
		}
		else {
			pTail->setNext(tmp);
			pTail = tmp;
		}
	}
	void Pop() {

		Node* tmp = pHead;
		if (pHead == NULL) {
			return;
		}
		else {
			node before = NULL;
			node after = pHead;
			while (after->getNext() != NULL) {
				before = after;
				after = after->getNext();
			}
			if (before == NULL) {
				pHead = NULL;
			}
			else {
				before->setNext(NULL);
				pTail = before;
			}
		}
	}
	void getAll() {
		for (node p = pHead; p != NULL; p = p->getNext()) {
			cout << p->getData() << " ";
		}
	}
};
class Expression {
private:
	string value;


public:
	Expression(string str) {
		value = str;
	}
	bool isOperator(char c) {
		if (c == '+' || c == '-' || c == '*' || c == '/' || c == '.')  {
			return true;
		}
		else
			return false;
	};
	bool isOperator(string c) {
		if (c == "+" || c == "-" || c == "*" || c == "/" || c == ".") {
			return true;
		}
		else
			return false;
	}
	int toDigit(string str) {
		int result = atoi(str.c_str());
		return result;
	}
	//12+23/3
	list<string> spilit() {
		list<string> strings;
		string tmp = "";
		string tmp2 = "";
		//	cout<<value.length()<<endl;
		for (int i = 0; i < value.length(); i++) {
			if (isOperator(value[i])) {
				strings.push_back(tmp);
				tmp2 += value[i];
				strings.push_back(tmp2);
				tmp = "";
				tmp2 = "";
			}
			else {
				tmp += value[i];
			}
		}
		return strings;
	};
	void push(list<string>& str) {

		for (list<string>::iterator iter = str.begin(); iter != str.end(); ++iter) {
			cout << *iter << " ";
		}

	}
	int precedence(string str) {
		if (str == "+" || str == "-")
			return 1;
		if (str == "*" || str == "/")
			return 2;
		return 0;
	}

	int calculateforOp(int a, int b, string str) {
		if (str == "+") return a + b;
		else if (str == "-") return a - b;
		else if (str == "*") return a * b;
		else return a / b;
	}

	int pushtoStack() {
		int i;
		Stack str;
		Stack value;

		

	}


	





};





int main()
{
	Stack s;
	/*
	s.Push(1);
	s.Push(2);
	s.Push(5);
	s.Push(-4);
	s.Push("a");
	s.Pop();
	s.Push(1);
	s.getAll();
	*/
	s.pushStr("a");
	s.pushStr("b");
	s.pushData(1);
	s.getAll();
	list<string> a;
	Expression str("12+12/32.");
	//	str.getValue();
	a = str.spilit();
	a.pop_back();
	
	//	cout<<a.size();
	str.push(a);
	//cout << calculate(6, 3, "/");

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
