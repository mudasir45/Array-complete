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
	
// Creating an algorithem to delete an element at end of the array: 

	n--;
// Displaying the array after delete a number at start
cout<<"\nDisplaying the array after deleting the number from the start: "<<endl;
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
}