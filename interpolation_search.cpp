//Program to implement binary search
#include<iostream>
using namespace std;

int interpolationSearch(int a[],int n,int x)
{
	int start=0,end=n-1;
	while(start<=end && x>=a[start] && x<=a[end])
	{
		int pos= start+(((double)(end-start)/(a[end]-a[start]))*(x-a[start]));
		if(a[pos]==x)
  			return pos;
 		if(x>a[pos])
  			start=pos+1;
 		else
  			end=pos-1;
  	}
  	return -1;
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
	if(interpolationSearch(a,n,x)==-1)
		cout<<"Number is not found."<<endl;
	else
		cout<<"The number is found at position "<<interpolationSearch(a,n,x)+1<<endl;
	return 0;
}
