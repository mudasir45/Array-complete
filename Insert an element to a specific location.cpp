#include<iostream>
using namespace std;
int main()
{
	int size, n;
	n=0;
	cout<<"Enter the size of an array: ";
	cin>>size;
	int arr[100];
	cout<<"Enter "<<size<<" numbers in an array: "<<endl;
	
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
		n++;
		}	
	cout<<"Displaying the array in actual order: "<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
// Creating an algorithem to isert an element to the array
	int loc, element;
	
	cout<<"\nEnter the location where you want to insert: ";
	cin>>loc;
	cout<<"Enter the element that you want to insert: ";
	cin>>element;
	for(int i=n; i>loc-1; i--)
	{
		arr[i]=arr[i-1];
	}
	
	arr[loc-1] = element;
	n++;
// Displaying the array after inserting at specific location
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}