// assgn_st.cpp -- assign structure
#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double  price;
};
int main()
{
    using namespace std;
    inflatable bouquet =
            {
            "sunflowers",
            0.2,
            12.49
            };
    inflatable choice;
    cout << "bouquet: " << bouquet.name << "for $";
    cout << bouquet.price << endl;

    choice = bouquet; // assign one structure to another
    cout  << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;
}
