
FarmerRegister *NewFarmerDetails()
{
    string firstName, lastName, email, password, location;
    long phoneNo;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your email: ";
    cin >> email;
    cout << "Enter your password: ";
    cin >> password;
    cout << "Enter your location: ";
    cin >> location;
    cout << "Enter your phone number: ";
    cin >> phoneNo;
    FarmerRegister *farmer = new FarmerRegister(firstName, lastName, email, password, location, phoneNo);
    return farmer;
}

FarmerLogin *FarmerLoginDetails()
{
    string email, password;
    cout << "Enter your email: ";
    cin >> email;
    cout << "Enter your password: ";
    cin >> password;
    FarmerLogin *farmer = new FarmerLogin(email, password);
    return farmer;
}

UserLogin *UserLoginDetails()
{
    string email, password;
    cout << "Enter your email: ";
    cin >> email;
    cout << "Enter your password: ";
    cin >> password;
    UserLogin *user = new UserLogin(email, password);
    return user;
}

UserRegister *NewUserDetails()
{
    string firstName, lastName, email, password, location;
    long phoneNo;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your email: ";
    cin >> email;
    cout << "Enter your password: ";
    cin >> password;
    cout << "Enter your location: ";
    cin >> location;
    cout << "Enter your phone number: ";
    cin >> phoneNo;
    UserRegister *user = new UserRegister(firstName, lastName, email, password, location, phoneNo);
    return user;
}