// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Array to store how many times a button 
// has to be pressed for typing 
// a particular character 
const int arr[] = { 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 
					2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4 }; 

// Function to return the count of 
// buttons pressed to type the given string 
int countKeyPressed(string str, int len) 
{ 
	int count = 0; 

	// Count the key presses 
	for (int i = 0; i < len; i++) {
		if (str[i] == '\0') {
			break;
		}
		if (str[i] == ' ') {
			count++;
		}
		count = count + arr[str[i] - 'a']; 
	}
	// Return the required count 
	return count; 
} 

// Driver code 
int main()
{
	char str[40];
	gets(str);
	cout << countKeyPressed(str, 40);
	return 0; 
}
