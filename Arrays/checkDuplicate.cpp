#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,1,10};
    bool flag=false;
   for(int i=0;i<9;i++){
   	   
   	   for (int j=i+1;j<9;j++){
   	   	    
   	   	    if (arr[i]==arr[j]){
   	   	    	flag=true;
				  }	  
		  }
   }
   if (flag==true){
   
   cout<<"duplicate found\n";
}
else{

   cout<<"duplicate not found\n";
}
}