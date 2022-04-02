
#include <iostream>
using namespace std;

int main(){
	cout<<"InsersionSort : "<<endl;
	cout<<"Enter number of elements : "<<endl;
	int n;
	cin>>n;
	
	cout<<"Enter The Elements : "<<endl;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=1;i<n;i++){
		int current=arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}
	cout<<"The Sorted Elements are : "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
}
