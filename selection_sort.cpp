#include <iostream>

using namespace std;

int main (){
	int A[] = { 30, 40, 20, 50, 10 };
	int n = 5;
		

	for (int i=0; i<n-1;i++)
	{
		int min= A[i], index=i;
		for (int j=1+1; j<n; j++)
		{
			if (A[j]<min)
			{
				min=A[j];
				index=j;
			}
		}
		A[index] = A[i];
		A[i]= min;
	}
	
	for (int i=0 ;i<n ; i++){
	cout<<A[i]<<" ";}
	cout<<endl;
	return 0;
}
