//Program to implement binary search
#include<iostream>
using namespace std;

int ternarySearch(int a[],int left, int right,int x)
{
	if(left<right)
	{
		int bp1=left+(right-left)/3;//breakpoint 1
		int bp2=bp1+(right-left)/3;//breakpoint 2
		if(bp1==x)
			return bp1;
		if(bp2==x)
			return bp2;
		if(x<a[bp1])
			return ternarySearch(a,left,bp1,x);
		if(x>a[bp2])
			return ternarySearch(a,bp2+1,right,x);
		return ternarySearch(a,bp1,bp2,x);
	}
	else
		return 1;
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
	if(ternarySearch(a,0,n,x)==-1)
		cout<<"Number is not found."<<endl;
	else
		cout<<"The number is found at position "<<ternarySearch(a,0,n,x)<<endl;
	return 0;
}
