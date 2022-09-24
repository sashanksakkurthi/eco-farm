#include <iostream>
using namespace std;

class UserLogin
{
private:
    string email;
    string password;

public:
    UserLogin(string email, string password)
    {
        this->email = email;
        this->password = password;
    }
    string getUserEmail()
    {
        return this->email;
    }
    string getUserPassword()
    {
        return this->password;
    }
};