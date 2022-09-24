#include <iostream>
#include "Header/authentication/farmer_login.h"
#include "Header/authentication/farmer_register.h"
#include "Header/authentication/user_login.h"
#include "Header/authentication/user_register.h"
#include "data/farmerdata.h"
#include "Header/inputs.h"

using namespace std;

void paymentGateway()
{
    cout << "Payment Interface" << endl;
    string name, cardNumber;
    int cvv, otp, amount;
    cout << "Enter your card number: ";
    cin >> cardNumber;
    cout << "A minimum amount of Rs. 15 is required to proceed with the payment" << endl;
    cout << "Enter your CVV: ";
    cin >> cvv;
    cout << "Enter the amount you want to pay: ";
    cin >> amount;
    cout << "Enter your OTP: ";
    cin >> otp;
    if (amount >= 15)
    {
        cout << "Payment Successful , the balance amount will be moderated at the time of delivery" << endl;
    }

    else if (amount >= 1 && amount < 15)
    {
        cout << "Payment Successful but you still need to pay " << 15 - amount << " to connect with farmers " << endl;
    }
    else
    {
        cout << "Payment Failed" << endl;
    }
};

void graphic_print()
{

    int i = 0;
    int n = 50000;

    cout << "Searching for farmers based on your requirements...\n\n";
    cout << " ";
    while (i < n)
    {
        cout << ">>>"
             << "\b\b\b ";
        cout << "\b";
        // cout<<"-"<<"\b ";
        i++;
    }

    cout << "Fetching Details of the farmer from our data Base \n";
    i = 0;
    while (i < n)
    {
        cout << ">>>"
             << "\b\b\b ";
        cout << "\b";
        // cout<<"-"<<"\b ";
        i++;
    }
    cout << "Search Successful\n\n";
    cout << "Farmer's Details\n\nFarmer Name \t Farmer's Id\t\n\n\n\n\n";
}

int main()
{
    FarmerRegister *farmerRegister[100];
    FarmerLogin *farmerLogin;
    UserRegister *userRegister[100];
    UserLogin *userLogin;
    int i, j;
    bool loop = true;
    while (loop == true)
    {
        cout << "1. I am farmer" << endl;
        cout << "2. I am user" << endl;
        char choice;
        cin >> choice;
        switch (choice)
        {
        case '1':
            cout << "1. Farmer Register(New Farmer)" << endl;
            cout << "2. Farmer Login(Existing)" << endl;
            cout << "3. Exit" << endl;
            char choice1;
            cout << "Enter your choice : " << endl;
            cin >> choice1;
            switch (choice1)
            {
            case '1':
                farmerRegister[i] = NewFarmerDetails();
                cout << "Thank you, We have sent your details to our service center.\nYou can start selling your products within a week.\n\nFor queries contact at ecofarmxxxxservice@gmail.com\n";
                i++;
                break;
            case '2':
                farmerLogin = FarmerLoginDetails();
                for (int k = 0; k < i; k++)
                {
                    if (farmerLogin->getFarmerEmail() == farmerRegister[k]->getUserEmail() && farmerLogin->getFarmerPassword() == farmerRegister[k]->getUserPassword())
                    {
                        cout << "Login Successful" << endl;
                        break;
                    }
                }
                break;
            case '3':

                break;
            }
            break;
        case '2':
            cout << "1. User Register" << endl;
            cout << "2. User Login" << endl;
            cout << "3. Buy Products" << endl;
            char choice2;
            cout << "Enter your choice: " << endl;
            cin >> choice2;
            switch (choice2)
            {
            case '1':
                userRegister[j] = NewUserDetails();
                j++;
            case '2':
                userLogin = UserLoginDetails();
                for (int k = 0; k < j; k++)
                {
                    if (userLogin->getUserEmail() == userRegister[k]->getUserEmail() && userLogin->getUserPassword() == userRegister[k]->getUserPassword())
                    {
                        cout << "Login Successful" << endl;
                        break;
                    }
                }
            case '3':
                int j = 0;
                for (auto i : vegetables)
                {
                    cout << j << "." << i << endl;
                    j++;
                }
                cout << "Enter the product you want to buy: " << endl;
                int choice3;
                cin >> choice3;
                string veg = vegetables[choice3];
                cout << "You will be redirected to payment gateway " << endl;
                int n = 60000;
                int i = 0;
                while (i < n)
                {
                    cout << ">>>"
                         << "\b\b\b ";
                    cout << "\b";
                    // cout<<"-"<<"\b ";
                    i++;
                }
                paymentGateway();
                i = 0;
                graphic_print();
                farmerData(veg);
                loop = false;
            }
        }
    };
}
