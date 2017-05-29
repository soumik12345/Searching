//Implementation of linear search
#include<bits/stdc++.h>
using namespace std;

void linearSearch(int a[],int n,int x)
{
	int flag=0,i;
	for(i=0;i<n;i++)
		if(a[i]==x)
		{
			flag=1;
			break;
		}
	if(flag)
		cout<<"The number is found at position "<<i+1<<endl;
	else
		cout<<"The number is not found."<<endl;
}

int main()
{
	int n,x;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int a[n];
	cout<<"Enter the array: ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the number to be searched: ";
	cin>>x;
	linearSearch(a,n,x);
	return 0;
}
