/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int age;
    int height;
    int kahua;
    int kahua2;
    
    
    
    
    cout << "Enter your age: ";
    cin >> age;
    
    if( age < 26 ) {
        cout << "Enter your height: ";
        cin >> height;
        
        if( height  < 100) {
        cout << "Your character = Chopper";
        }
        
        else if( height  < 180) {
            cout << "Your character = Usopp";
            
        }
        else if( height  > 179) {
            cout << "Enter your bounty: ";
            cin >> kahua;
          
            if( kahua  > 1100000000) {
            cout << "Your character = Zoro";
            
            
            
        }
        else {
            cout << "Your character = Sanji";
            
        }
        
            
        }
        
            
        
    }  else if( age > 60 ){
        
             cout << "Your character = Brook";
             
             
             
    }
    else {
        cout << "Enter your bounty: ";
            cin >> kahua2;
            if( kahua2  > 500000000) {
            cout << "Your character = Jinbe"; 
            }
        
    else {
        
        cout << "Your character = Franky"; 
    }
        
    }
    
    
    
        
        
       
        
    
    
        
    
    
    

    return 0;
}




/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
