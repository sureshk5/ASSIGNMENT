//
//  main.cpp
//  count no of words
//
//  Created by Nasir Khan  on 26/09/19.
//  Copyright © 2019 Nasir Khan . All rights reserved.
//

#include <iostream>
#include <string>


using namespace std;



int main() {
    string str,input;
    int i,count;
    count = 0;
    
    
    cout << "please enter text"  << endl;
    
    getline(cin, str,';');
   
    
    for(i = 0 ;i < str.length();i++)
        
    {
        
       // cout << str[i] << endl;
        if(str[i] == ' ' && str[i-1] != ' ')
        {
            count++;
            
        }
        if(str[i] == '\n')
        {
            count++;

        }
        
    }
    
    cout << count+1 << endl;
    
    return 0;
    
}



