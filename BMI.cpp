#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float w,h,BMI;
	cin>>w>>h;
	BMI = w/(h*h);
	if(BMI<18.5)
	{
		cout<<"BMI : "<<fixed<<setprecision(2)<<BMI<<endl<<"Underweight";
	}
	else if(BMI>=18.5 && BMI<=24.9)
	{
		cout<<"BMI : "<<fixed<<setprecision(2)<<BMI<<endl<<"Normal weight";
	}
	else if(BMI>=25 && BMI<=29.9)
	{
		cout<<"BMI : "<<fixed<<setprecision(2)<<BMI<<endl<<"Overweight";
	}
	else
	cout<<"Obese";
}
