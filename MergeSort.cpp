using namespace std;
#include<iostream>
void merge(int a[],int b[],int mid,int c[],int nn)
 {
 	int i,j,k;
	i = 0; j = 0; k =0;

	while(i<mid && j< nn) {
		if(b[i]  < c[j]) a[k++] = b[i++];
		else a[k++] = c[j++];
	}
	while(i < mid) a[k++] = b[i++];
	while(j < nn) a[k++] = c[j++];
 }
 
 void MergeSort(int a[],int n)
 {
 	int i;
 	int b[10],c[10];
 	if(n<2)
 	return;
 	
 	int mid=n/2;
 	for(i = 0;i<mid;i++) b[i] = a[i]; 
	for(i = mid;i<n;i++) c[i-mid] = a[i];
	MergeSort(b,mid);
	MergeSort(c,n-mid);
	merge(a,b,mid,c,n-mid);
 }
 
 int main()
 {
 	int A[] = {6,2,3,1,9,10,15,13,12,17};
 	MergeSort(A,10);
 	for(int i=0;i<10;i++)
 	cout<<" "<<A[i];
 	
 }
