#include<iostream>
using namespace std;
int main(){
	int arr[7];
	int temp;
	cout<<"Enter the 7 number to an array: "<<endl;
	for (int i=0; i<7; i++)
		cin>>arr[i];
	
	cout<<"Displaying the array in an actuall order: "<<endl;
	for (int i=0; i<7; i++)
		cout<<arr[i]<<" ";
	
	for (int i=0; i<7; i++)
	{
		for (int j=0; j<6-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	
			}
		}
	}
	cout<<"\nDisplaying the array after sorting: "<<endl;
	for (int i=0; i<7; i++)
	cout<<arr[i]<<" ";
	return 0;
}