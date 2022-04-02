
#include <iostream>
using namespace std;

void swap(int* a, int* b)
{

	int t= *a;
	*a=*b;
	*b=t;
	
}

int partition(int arr[],int low , int high)
{
	
	int pivot=arr[high];
	int i=(low-1);
	
	for(int k=low;k<high;k++)
	{
		
		if(arr[k]<=pivot)
		{
			i++;
			swap(&arr[i],&arr[k]);
			
		}
		
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
	
}

void quickSort(int arr[],int low,int high)
{
	
	if(low<high)
	{
		
		int pivot=partition(arr,low,high);
		
		quickSort(arr,low,pivot-1);
		
		quickSort(arr,pivot+1,high);
		
		
		
	}
	
}

void displayArray(int arr[],int size)
{
	
	int i;
	for(i=0;i<size;i++)

		cout<<arr[i]<<"\t ";	
	}
	
	
	



int main()
{
	cout<<"Enter the number of elements : \n";
	int kt;
	cin>>kt;
	
	int arr[kt];
	cout<<"Enter The Elements : \t"<<endl;
	for(int x=0;x<kt;x++)
	{
		cin>>arr[x];
	}
	
	

	
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<"Input array"<<endl;
	displayArray(arr,n);
    cout<<endl;
    quickSort(arr,0,n-1);
    cout<<"Array sorted with quick sort"<<endl;
    displayArray (arr,n);
	
	return 0;
	
	
 
	
	
	
}
