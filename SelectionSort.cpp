using namespace std;
#include<iostream>
void SelectionSort(int a[],int n)
{
	int minIndex;
	for(int i=0;i<n;i++)
	{
		minIndex=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[minIndex]>a[j])
			{
				minIndex=j;
			}
		}
		int temp=a[minIndex];
		a[minIndex]=a[i];
		a[i]=temp;
	}
}
int main()
{
	int a[]={2,9,7,8,4,3,6};
	SelectionSort(a,7);
	for(int i=0;i<7;i++)
		cout<<a[i]<<" ";
	return 0;
}
