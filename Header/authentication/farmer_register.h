#include <iostream>

using namespace std;

class FarmerRegister
{
private:
    string email;
    string password;
    long phoneNo;

public:
    string firstName;
    string lastName;
    string location;
    string vegetable;
    FarmerRegister(string firstName,
                   string lastName, string email,
                   string password, string location,
                   long phoneNo, string vegetable)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->email = email;
        this->password = password;
        this->location = location;
        this->vegetable = vegetable;
    }
    FarmerRegister(string firstName,
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
    string getUserVegetable()
    {
        return this->vegetable;
    }
    long getUserPhoneNo()
    {
        return this->phoneNo;
    }
};