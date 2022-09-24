#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

string firstName[] = {"John", "Peter", "Relangi", "James", "David", "Robert", "Michael",
                      "William", "Mary", "Patricia", "Jennifer", "Linda", "Elizabeth", "Barbara", "Susan", "Jessica",
                      "Sarah", "Karen", "Nancy", "Margaret", "Lisa", "Betty", "Dorothy", "Sandra", "Ashley", "Kimberly", "Donna"};
string lastName[] = {"Smith", "Johnson", "Mavayya", "Williams", "Jones", "Brown", "Davis",
                     "Miller", "Wilson", "Moore", "Taylor", "Anderson", "Thomas", "Jackson", "White", "Harris",
                     "Martin", "Thompson", "Garcia", "Martinez", "Robinson", "Clark", "Rodriguez", "Lewis", "Lee", "Walker", "Hall"};
int location[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111,
                  112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150};
string vegetables[] = {"Rice", "Tomato", "Onion", "Potato", "Cabbage", "Carrot", "Brinjal", "Cauliflower", "Cucumber", "Capsicum", "Radish", "Beetroot", "Drumstick", "Bittergourd", "Ridgegourd", "Snakegourd", "Bottlegourd", "Pumpkin", "Greenchilli", "Ginger", "Garlic", "Coriander", "Spinach", "Drumstick", "Fenugreek"};

FarmerRegister *farmerRegisters[20];
void farmerData(string vegetable)
{
    srand(time(0));
    int t = (rand() % 30) + 1;

    for (int i = 0; i < t; i++)
    {
        srand(time(0));
        int price = (rand() % 50) + 20;
        int x = (rand() % 25);
        int y = (rand() % 25);
        string password = firstName[x] + lastName[y] + to_string(location[i]);
        farmerRegisters[i] = new FarmerRegister(firstName[x], lastName[y], firstName[x] + lastName[y] + "@gmail.com", password, to_string(location[i]), 983546732 + i % 7, vegetables[i]);
        cout << endl;
        cout << "LastName: " << farmerRegisters[i]->getUserFirstName() << endl;
        cout << "Location: " << farmerRegisters[i]->getUserLocation() << endl;
        cout << "Phone Number: " << 983546732 + (2*i+3) % 7 << endl;
        cout << "Email: " << farmerRegisters[i]->getUserEmail() << endl;
        cout << "FirstName: " << farmerRegisters[i]->getUserLastName() << endl;
        cout << "vegetable: " << vegetable << endl;
        cout << "Price: " << price + (i * 10) % 7 << "per Kg" << endl;
    }
}
