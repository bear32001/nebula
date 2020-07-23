#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void display(int *arr, int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
}

void BubbleSort(int *arr, int n)
{
	int flag;
	for(int i = 0; i<n-1; i++)
	{
		flag = 0;
		for(int j = 0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr +j+1, arr + j);
				flag = 1;
			}
		}
		if(flag == 0) break;
	}
}

int main()
{
	int arr1[] = {1,10,5,2,7,12,13};
	int s1 = sizeof(arr1)/sizeof(arr1[0]);
	
	BubbleSort(arr1,s1);
	display(arr1,s1);
}
