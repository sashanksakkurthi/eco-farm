#include <iostream>

using namespace std;

class UserRegister
{
private:
    string userid;
    string firstName;
    string lastName;
    string email;
    string password;
    string location;
    long phoneNo;

public:
    UserRegister(string firstName,
                 string lastName, string email,
                 string password, string location,
                 long phoneNo)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->password = password;
        this->location = location;
    }
    string getUserId()
    {
        return this->userid;
    }
    string getUserFirstName()
    {
        return this->firstName;
    }
    string getUserLastName()
    {
        return this->lastName;
    }
    string getUserEmail()
    {
        return this->email;
    }
    string getUserPassword()
    {
        return this->password;
    }
    string getUserLocation()
    {
        return this->location;
    }
    
};