#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main()
{
	cout<<"Enter number of array:";
	int n; cin >> n;
	int *a= new int[n];
	cout<<"Enter "<< n <<" number: "<< endl;
	for (int i = 0; i < n; i++) {
        cout << rand() <<endl;
    }
	//cout<<"Enter "<< n <<" number: "<< endl;
	//for(int i=0; i<n ;i++){
	//	cin >> a[i];
	//}
	cout<<"Display number:"<<endl;
	for(int i = 0; i < n; i++){
		cout << a[i]<<" ";
	}
	return 0;
}
