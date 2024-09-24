#include <iostream>



#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

Chef chef;
    ItalianChef italianChef;

int main()
{
    int y;
    chef.makeSpecialDish();

    italianChef.makeSpecialDish();
    cout << "input a number: " << endl;
    cin >> y;
    cout << "your number was: "<< y << endl;

}


