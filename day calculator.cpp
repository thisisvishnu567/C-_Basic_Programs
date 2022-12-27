#include<iostream>
using namespace std;
int main()
{
	int d,m,y;
	int day;
	int array[12] = {0,3,2,5,0,3,5,1,4,6,2,4};
	cin>>d>>m>>y;
	if(m<3)
	{
		y=y-1;
	}
	day = (y=y%4 + y%100 - array[m-1] + d)%7;
	switch(day)
	{
		case0: cout<<: "Sunday"; break;
		case1: cout<<: "Monday"; break;
		case2: cout<<: "Tuesday"; break;
		case3: cout<<: "Wednesday"; break;
		case4: cout<<: "Thursday"; break;
		case5: cout<<: "Friday"; break;
		case6; cout<<: "Saturday"; break;
	}
}
