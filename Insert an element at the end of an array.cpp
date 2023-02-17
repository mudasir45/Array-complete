#include<iostream>
#include<conio.h>
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
	cout<<"Displaying the array in actual form: "<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
// Creating an algorithem to isert an element to the array
	int element;
	cout<<"\nEnter the number to be insert at end: ";
	cin>>element;
	arr[n] = element;
	n++;
// Displaying the array after inserting at specific location
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}
