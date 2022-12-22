#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Guest
{
public:

    int id;
    string name;
    int age;
    string city;
    int PhoneNumber;

    int getId()
    {
        return id;
    }
    string get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }
    int get_city()
    {
        return city;
    }
    get_phone_number()
    {
        return PhoneNumber;
    }

    Guest(int id, string name, int age, string city, int PhoneNumber)
    {
        this->id = id;
        this->name = name;
        this->age = age;
        this->city = city;
        this->PhoneNumber = PhoneNumber;
    }
    void print()
    {
        cout << "id:\t" << id << endl;
        cout << "name:\t" << name << endl;
        cout << "age:\t" << age << endl;
        cout << "city:\t" << city << endl;
        cout << "PhoneNumber:\t" << PhoneNumber << endl;
    }


};
enum gender {
    MALE = 3,
    FEMALE = 0
};

class Party
{
private:
    string day;
    string reason;
    int countofguests;
public:
    vector <Guest> guestVector;
    vector <Party> partyVector;
    void addguest(Guest Guests)
    {
        guestVector.push_back(Guests);
    }
    void addparty(Party Party)
    {
        partyVector.push_back(Party);
    }
};

int main()
{
    Party IoT;
    Guest first(1, "Denys", 17, "Lviv", 834752757);
    first.print();
    cout << "-------------------" << endl;
    Guest second(2, "Ihor", 17, "Luky", 873745670);
    second.print();
    cout << "-------------------" << endl;
    Guest third(3, "Nazar", 22, "Luky", 825364850);
    third.print();
    IoT.addguest(first);
    IoT.addguest(second);
    IoT.addguest(third);
    cout << "-------------------" << endl;

    int age, AvrAge;
    AvrAge = (17 + 17 + 22) / 3;

    cout << "avrAge is: " << AvrAge << endl;

    enum gender a, b;
    a = MALE;
    b = FEMALE;
    cout << "MALE = " << a << endl;
    cout << "FEMALE = " << b << endl;




}
