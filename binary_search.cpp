//Program to implement binary search
#include<iostream>
using namespace std;

void binSearch(int a[],int l,int h,int x)
{
	int flag=0;
	while(l<=h)
	{
		int m=(l+h)/2;//middle index
		if(x>a[m])
			l=m+1;
		else if(x<a[m])
			h=m-1;
		else
		{
			cout<<"The number is found at position "<<m+1<<endl;
			return;
		}
		m=(l+h)/2;
	}
	cout<<"The number is not found."<<endl;
}

int main()
{
	int n,x;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n];
	cout<<"Enter the array in sorted manner: ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the number to be searched: ";
	cin>>x;
	binSearch(a,0,n-1,x);
	return 0;
}
