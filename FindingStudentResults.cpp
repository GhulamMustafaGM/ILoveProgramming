// Finding student results

#include <iostream>
#include <stdio.h>

int main()
{
    int userInput = 0, maxNumber = 0,  minNumber = 100, sumTotal = 0;
    float average = 0;
    
    
    for(int i = 0; i < 15; i++) //get the numbers from the user
    {
        std::cout << "Enter a number: ";
        std:: cin>>userInput;

        std::cout << userInput << "\n";
        
        if(userInput > maxNumber)
        {//the biggest number entered so far is the max number
            maxNumber = userInput;
        }
        if(userInput < minNumber)
        {//the lowest number entered so far is the min number
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
    }
    std::cout << "Maximum number = " << maxNumber << "\n";
    std::cout << "Minimum number = " << minNumber << "\n";
    average = sumTotal / 15;
    std::cout << "Average = " << average << "\n";
    
    return 0;
}