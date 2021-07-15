// strings.cpp -- storing strings in an array

#include <iostream>
#include <cstring>  // for the strlen() function

int main()
{
    using namespace std;
    const int Size =15;
    char name1[Size];           // empty array
    char name2[Size] = "C++owboy";       // initialized array
    // note: some implementations many require the static keyword
    // to initialized the array name2

    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << "letter and is stored. \n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';            // set to null my character
    cout << "Here are the first 3 character of my name:";
    cout << name2 << endl;
    return 0;
}
