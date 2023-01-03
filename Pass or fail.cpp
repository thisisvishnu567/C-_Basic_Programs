#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	if(x>400)
	cout<<"Distinction";
	else if(x>=350)
	cout<<"First Class";
	else if(x>=300 && x<350)
	cout<<"Pass";
	else if(x<300)
	cout<<"Fail";
	else
	cout<<"Invalid Input";
}
