#include<iostream>
using namespace std;
int main()
{
	int a=5,b=6;
	int *p=&a;
	int *q=&b;
	cout<<*p<<endl<<*q<<endl<<p<<endl<<q;
}
