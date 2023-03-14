#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >>n;
	int a[n];
	for(int i=0;i<n;i++){
		*(a+i)=rand()%(100-1+1)+1;
	}
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
	
	for(int i=0; i<n; i++)
    {
        if(*(a+i)%2!=0)
        {
            for(int j=i; j<(n-1); j++)
                *(a+j) = *(a+j+1);
            i--;
            n--;
        }
    }
    cout<<endl;
   
    for(int i=0;i<n;i++){
    	cout<<*(a+i)<<" ";
	}
	return 0;
}
