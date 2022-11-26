#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10] = {0}, element, c;
	c = -1;
	cout<<"Enter 10 numbers in an array: "<<endl;
	for (int i=0; i<10; i++)
		cin>>arr[i];
	cout<<"Displaying the array: "<<endl;
	for (int i=0; i<10; i++)
		cout<<arr[i]<<" ";
	cout<<"\nEnter the element that you want to find in an array: ";
	cin>>element;
	for (int i=0; i<10; i++)
		{
			if(arr[i]==element)
			{
				cout<<"Element found!\n\tIndex no: "<<i<<endl;
				c = arr[i];
				break;
			}
			
		}
		if(c==-1)
			cout<<"Element not found!"<<endl;
	getch();
}