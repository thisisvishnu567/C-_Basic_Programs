#include<iostream>
using namespace std;
int main()
{
	int c,x,y;
	float area;
	cout<<"Enter 1 or 2";
	cin>>c;
	if(c==1)
	{
	    cout<<"Enter the redius : ";
		cin>>x;
	    area = (3.142857)*(x*x);
    	cout<<"The area of the circle is : "<<area;
	}
	else if(c==2)
	{   
	    cout<<"Enter the lenght and breadth : ";
		cin>>x>>y;
	    cout<<"The area of the rectangle is : "<<x*y;
	}
	else 
		cout<<"Invalid choice";
		
	return 0;
}
