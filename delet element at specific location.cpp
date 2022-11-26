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
	cout<<"Displaying the array in actual form: "<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
// Creating an algorithem to delete an element at specific loc of the array: 
	int loc;
	cout<<"\nEnter the location where you want to delete the number: ";
	cin>>loc;
	for(int i=loc-1; i<n-1; i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
// Displaying the array after delete a number at start
cout<<"\nDisplaying the array after deleting the number at specific loc: "<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}