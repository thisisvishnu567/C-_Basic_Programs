/*/#include<iostream>
using namespace std;
int main()
{
	static double i;
	i=20;
	cout<<sizeof(i);
	return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
	int i,j,x;
	cin>>x;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

