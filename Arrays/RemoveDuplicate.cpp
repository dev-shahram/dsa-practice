#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,1,10};
    int n=11;
    bool flag=false;
   for(int i=0;i<n;i++){
   	   
   	   for (int j=i+1;j<n;j++){
   	   	    
   	   	    if (arr[i]==arr[j]){
   	   	    	flag=true;
   	   	    	for(int z=j;z<n-1;z++){
					  
   	   	    	arr[z]=arr[z+1];
   	   	        
				  }	
				  n--;  
                  j--; // decrement j to check the new element at index j after shifting
			}
		  }
   }
   if (flag==true){
   
   cout<<"duplicate found and array is sorted now \n";
}
else{

   cout<<"duplicate not found\n";
}
for (int i=0;i<n;i++){
	cout<<arr[i]<<endl;
}
}