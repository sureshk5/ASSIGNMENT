#include<stdio.h>
#include<cstring>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	
	int numWords, i, j;
	cin >> numWords;
	vector<int> index;
	string words[numWords], sortedWords[numWords];
	bool visited[numWords] = {false};
	
	for(i=0; i<numWords; i++) {
		string word;
		cin >> word;
		words[i] = word;
		sort(word.begin(), word.end());
		sortedWords[i] = word;
	}
	
	// Traverse through array elements and 
    // count frequencies 
    for (i = 0; i < numWords; i++) { 
  
        // Skip this element if already processed 
        if (visited[i] == true) 
            continue; 
  
        // Count frequency 
        bool isFirstMatch = true;
        for (j = i + 1; j < numWords; j++) { 
            if (sortedWords[i] == sortedWords[j]) {
                visited[j] = true;
                if (isFirstMatch) {
                	index.push_back(i);
                	isFirstMatch = false;
				}
				index.push_back(j);
            } 
        }
    }
    
    sort(index.begin(), index.end());
    
    // Declaring iterator to a vector 
    vector<int>::iterator ptr;
    
    // Displaying vector elements using begin() and end()
    for (ptr = index.begin(); ptr < index.end(); ptr++) 
        cout << words[*ptr] << endl;
	
	return 0;
}
