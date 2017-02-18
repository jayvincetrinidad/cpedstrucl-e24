#include <iostream>

using namespace std;

int main (){
	int A[ ] = { 40, 30, 20, 50, 10 };
	int n = 6;
	int j;
	for (int i=1; i<n; i++)
	{
		int tmp=A[i];
		for (j=i-1; j>=0 && tmp<A[j]; j--)
		{
			A[j+1] = A[j];
		}
		A[j+1] = tmp;
	}
	for (int i=1 ;i<n ; i++){
	cout<<A[i]<<" ";}
	cout<<endl;
	return 0;	
	
}
