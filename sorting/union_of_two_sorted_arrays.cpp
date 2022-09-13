#include <iostream>
using namespace std;

int main() {
	int a[]={1,2,2,2,3,4};
	int b[]={10,20,20,20,30,50,70};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	
	int a1=0;
	int b1=0;
	
	for(int i=0;i<(m+n);i++){
        if((a[a1]==a[a1-1] && a1>0)){
          a1=a1+1;
          continue;  
        }
        
        if((b[b1]==b[b1-1] && b1>0)){
            b1=b1+1;
            continue;
        }

	    if(a1==m && b1==n){
	        break;
	    }
	    if((a[a1] < b[b1] && a1<m) || b1==n){
	        cout<<a[a1]<<endl;
	        a1=a1+1;
	    }
	    else if((a[a1]>b[b1] && b1<n) || a1==m){
	        cout<<b[b1]<<endl;
	        b1=b1+1;
	    }
	    else if(a[a1]==b[b1]){
	        cout<<a[a1]<<endl;
	        a1=a1+1;
	        b1=b1+1;
	    }
	

	
	}
	
	
	
	return 0;
}
