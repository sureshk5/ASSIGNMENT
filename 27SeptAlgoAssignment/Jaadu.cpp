// C++ program to check whether a given 
// matrix is magic matrix or not 
#include <bits/stdc++.h> 
using namespace std; 

// driver program to 
// test above function 
int main()
{
	int R, C, i, j;
	cin >> R >> C;
	int mat[R][C];
	for(i=0; i<R; i++) {
		for(j=0;j<C; j++)
			cin >> mat[i][j];
	}
	
	bool isMagic = true;
	int N = R;
	// calculate the sum of 
	// the prime diagonal 
	int sum = 0,sum2=0; 
	for (int i = 0; i < N; i++) 
		sum = sum + mat[i][i]; 
	// the secondary diagonal 
	for (int i = 0; i < N; i++) 
		sum2 = sum2 + mat[i][N-1-i]; 

	if(sum!=sum2) 
		isMagic = false; 

	// For sums of Rows 
	for (int i = 0; i < N; i++) { 
		
		int rowSum = 0;	 
		for (int j = 0; j < N; j++) 
			rowSum += mat[i][j]; 
		
		// check if every row sum is 
		// equal to prime diagonal sum 
		if (rowSum != sum) 
			isMagic = false; 
	} 

	// For sums of Columns 
	for (int i = 0; i < N; i++) { 
		
		int colSum = 0;	 
		for (int j = 0; j < N; j++) 
			colSum += mat[j][i]; 

		// check if every column sum is 
		// equal to prime diagonal sum 
		if (sum != colSum) 
		isMagic = false;
	}
	
	if (isMagic)
		cout << "ITS A MAGIC";
	else
		cout << "NO MAGIC";
	
	return 0;
}
