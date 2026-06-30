#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter no of elements you want in array\n";
	cin>>n;
	int arr[n];
	cout<<"enter the elements\n";
	for(int i=0;i<n;i++){
      cin>>arr[i];
	}
	int max=arr[0];
	for (int i=1;i<n;i++){
		if (arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"the largest element in the array is :"<<max<<endl;
	int max2=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max2 && arr[i]<max){
			max2=arr[i];
		}
		
	}
	cout<<"the 2nd largest element is :"<<max2<<endl;
}