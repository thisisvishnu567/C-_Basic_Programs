#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int temp = n;
	int sum =0;
	while(n>0)
	{
		cout<<n%10<<endl;
		rev = rev*10 + n%10;
		sum = sum = n% 10;
		n = n/10;
	}
	cout<<sum;
}
