#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,9,0,3,0,6,7,8,9,0,1};
    int n=11;
    bool flag=false;
     
    for (int i=0;i<n+1;i++){
	
    	if(arr[i]==0){
    	   	for(int j=i;j<n;j++){
    	   		arr[j]=arr[j+1];
			   }
			   
			   
		   }
		   
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
			
	} 
	
	
	
