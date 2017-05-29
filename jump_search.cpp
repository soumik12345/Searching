//Implementation of linear search
#include<bits/stdc++.h>
using namespace std;

int jumpSearch(int a[],int n,int x)
{
	int left=0;
	int right=sqrt(n);
	while(x>=a[right] && right<n)//x is to the right of the block
	{
		//not the correct block
		//hence the left and right must be shifted by sqrt(n)
		left=right;//Alternately we can write left+=sqrt(n)
		right+=sqrt(n);//right is shifted
		if(right>n-1)
			right=n;
	}
	//the correct block is found
	for(int i=left;i<right;i++)//linear search inside the correct block
		if(a[i]==x)
			return i;
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
	if(jumpSearch(a,n,x)==-1)
		cout<<"Number is not found."<<endl;
	else
		cout<<"The number is found at position "<<jumpSearch(a,n,x)<<endl;
	return 0;
}
