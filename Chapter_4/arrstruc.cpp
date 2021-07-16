// arrstruc.cpp -- an array of structures
#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guests[2] =                                           // initializing an array of structs
            {
                    {"Bambi",0.5, 21.98},       // first structure in array
                    {"Godzilla", 2000, 565.99}  // next structure in array
            };
    cout << "The guest " << guests[0].name << " and " << guests[1].name
         << "\nhave a combined volume of "
         << guests[0].volume + guests[1].volume << " cubic feet.\n";
    return 0;
}
