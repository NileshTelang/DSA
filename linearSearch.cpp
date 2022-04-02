#include <iostream>
using namespace std;


int linearSearch(int arr[],int n, int key){
	cout<<"The result of linearSearch is : \n";
	for(int i=0;i<n;i++){
		if(key==arr[i]){
			return i;
		}
	}
	return -1;
}



int main(){
	cout<<"Linear Search \n";
	int n;
	cin>>n;
	cout<<"Enter The Elements : \n";
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the num you wanna search : \n";
	
	int key;
	cin>>key;
	
	cout<<linearSearch(arr,n,key)<<endl;
	
	return 0;
}
