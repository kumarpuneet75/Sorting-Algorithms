using namespace std;
#include<iostream>
void InsertionSort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int value=a[i];
		int hole=i;
		while(hole>0 && a[hole-1]>value)
		{
			a[hole]=a[hole-1];
			hole=hole-1;
		}
		a[hole]=value;
	}
}
int main()
{
	int a[]={8,3,4,1,9,5,6};
	InsertionSort(a,7);
	for(int i=0;i<7;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
