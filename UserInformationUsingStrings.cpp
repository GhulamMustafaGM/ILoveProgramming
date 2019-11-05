// Users information 
#include<iostream>
#include<string>

using namespace std;

int main()
{
        string name1, address1, phoneNumber1;
        string name2, address2, phoneNumber2;

        //get user1 information
        cout<<"User1\n";
        getline(std::cin, name1);
        cout<<"User1 address?\n";
        getline(std::cin, address1);
        cout<<"User1 phone number?\n";
        getline(std::cin, phoneNumber1);

        //get user2 information
        cout<<"User2 name?\n";
        getline(std::cin, name2);
        cout<<"User2 address?\n";
        getline(std::cin, address2);
        cout<<"User2  phone number?\n";
        getline(std::cin, phoneNumber2);

        //print information
        cout<<"\n\n"<<name1<<"\n";
        cout<<address1<<"\n";
        cout<<phoneNumber1<<"\n";

        cout<<"\n\n"<<name2<<"\n";
        cout<<address2<<"\n";
        cout<<phoneNumber2<<"\n";    

    return 0;
}