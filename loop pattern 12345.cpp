#include<iostream>
using namespace std;
int main()
{
	int i,j,x,n=1;
	cin>>x;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<n<<" ";
			n=n+1;
		}
	cout<<endl;
	}

}
