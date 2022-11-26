#include<iostream>
using namespace std;
int main(){
	int n, t=-1;
	int arr[10];
	cout<<"Enter 10 numbers in an array: "<<endl;
	for (int i=0; i<10; i++){
		cin>>arr[i];
	}
	cout<<"Enter the number that's you want to find in an array: ";
	cin>>n;
	for (int i=0; i<10; i++){
		if(arr[i]==n){
			t=i;
			cout<<"Number found!"<<endl<<"Index no: "<<i<<endl;
		}
	
	}
		if (t==-1){
		cout<<"Number not found: "<<endl;
	}
	
	
	return 0;
}