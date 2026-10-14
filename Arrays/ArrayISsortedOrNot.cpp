#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    bool flag=false;
    for(int i=0;i<9;i++){
    	if(arr[i]<arr[i+1]){
    		flag=true;
		}
		else if(arr[i]>arr[i+1]){
			flag=false;
		}
	}
	if(flag==true){
		cout<<"array is sorted\n";
	}
	else{
		cout<<"array is not  sorted\n";
	}
}