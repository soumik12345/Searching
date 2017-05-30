//Program to implement exponential search along with recursive version of binary search
#include<iostream>
using namespace std;

int binarySearch(int a[],int l,int r,int x)//recursive verion of binary search
{
    	if(r>=l)
    	{
        	int m=l+(r-l)/2;
        	if(a[m]==x)
            	return m;
        	if(a[m]>x)
            	return binarySearch(a,l,m-1,x);
        	return binarySearch(a,m+1,r,x);
    	}
    	return -1;
}

int expSearch(int a[],int left,int right,int x)
{
	if(right<=left)//base case
		return -1;
	int i=1;
	while(i<=right-left)//i is less than the length of the array
	{
		if(x>a[i])
			i*=2;
		else
			break;
	}
	return binarySearch(a,i/2,i,x);
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
	if(expSearch(a,0,n,x)==-1)
		cout<<"Number is not found."<<endl;
	else
		cout<<"The number is found at position "<<expSearch(a,0,n,x)+1<<endl;
	return 0;
}
