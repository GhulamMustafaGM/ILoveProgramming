#include <iostream>  
using namespace std;  

int main () {  
       int number;  
       cout<<"Enter a number to check grade:";    
       cin>>number;

            if (number <0 || number >100)    
            {    
                cout<<"wrong number";    
            }    
            else if(number >= 0 && number < 50){    
                cout<<"Fail";    
            }    
            else if (number >= 50 && number < 60)    
            {    
                cout<<"D Grade";    
            }    
            else if (number >= 60 && number < 70)    
            {    
                cout<<"C Grade";    
            }    
            else if (number >= 70 && number < 80)    
            {    
                cout<<"B Grade";    
            }    
            else if (number >= 80 && number < 90)    
            {    
                cout<<"A Grade";    
            }    
            else if (number >= 90 && number <= 100)    
            {    
                cout<<"A+ Grade";  
            }    
    }    