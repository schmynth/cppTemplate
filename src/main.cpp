#include <iostream>



#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

Chef chef;
    ItalianChef italianChef;





enum PotPins
{
    filter_attack_pin = 0,
    filter_decay_pin = 1,
};


int main()
{
    int y;
    chef.makeSpecialDish();
    italianChef.makePasta();
    italianChef.makeSpecialDish();
    cout << "input a number: " << endl;
    cin >> y;
    cout << "your number was: "<< y << endl;
    cout << "Filter Attack Pin is pin no.: " << filter_attack_pin << endl;
    cout << "Do i have to make every time?" << endl;
}


