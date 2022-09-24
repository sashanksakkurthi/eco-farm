#include <iostream>

using namespace std;

class FarmerLogin
{
private:
    string email;
    string password;

public:
    FarmerLogin(string email, string password)
    {
        this->email = email;
        this->password = password;
    }
    string getFarmerEmail()
    {
        return this->email;
    }
    string getFarmerPassword()
    {
        return this->password;
    }
};