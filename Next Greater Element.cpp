#include<iostream>
using namespace std;
int main()
{
	int a[]={4,5,2,25};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
				if(a[j]>a[i])
				{
					cout<<a[i]<<"-->"<<a[j]<<endl;
					break;
				}
		}
	}
}
