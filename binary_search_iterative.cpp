#include <iostream>
#include <algorithm>

using namespace std;

int binary_search(int arr[],int n, int num)
{
	int l = 0,m,r=n-1;


	
	while(l<=r)
	{
		m =((l+r)/2);
		if(arr[m]==num)
		{
			return m;
		}
		else if(num<arr[m])
		{
			r = m-1;
		}
		else 
		{
			l = m+1;
		}
	}

return -1;
}

int main()
{	
	int n,num;
	cout<<"Enter the number of elements in  array: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the array:"<<endl;
	for(int i=0;i<n;i++)						// O(n)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to find:"<<endl;
	cin>>num;
	sort(arr,arr+n);						   // O(nlogn)

	cout<<"Number is at index: "<<binary_search(arr,n,num)<<endl;

	return 0;
}