#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10] = {0}, item, first, last, mid;
	cout<<"Enter 10 numbers in an array: "<<endl;
	for (int i=0; i<10; i++)
		cin>>arr[i];
	cout<<"Displaying the array: "<<endl;
	for (int i=0; i<10; i++)
		cout<<arr[i]<<" ";
	cout<<"\nEnter the element to be search ";
	cin>>item;
	first = 0; 
	last = 9;
	mid = (first+last)/2;
	while(first<=last)
	{	
		if (arr[mid]==item){
			cout<<"Element found!\n  At position "<<mid+1<<endl; 
			break;
		}
		else if (item>arr[mid])
			first = mid + 1;
		
		else
			last = mid-1;
		
		mid = (first+last)/2;
	}
	if (first>last)
		cout<<"The number "<<item<<" is not found in given Array!"<<endl;
	getch();
}