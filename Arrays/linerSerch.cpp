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
    //liner search
    int a;
    cout<<"enter element you want to serch in the array\n";
    cin>>a;
    int count=-1;
    bool flag=false;
    for (int i=0;i<n;i++){
    	count++;
    	if (arr[i]==a){
    		
    		flag=true;
    		break;
		}
	
	}
		if (flag==true){
			cout<<"value fount at index:"<<count<<endl;
		}else{
			cout<<"value not found\n";
		}
}