
# C++

## comparing floats

### problem

The following code:
```
#include <bits/stdc++.h>
using namespace std;

void compareFloatNum(double a, double b)
{
    if (a == b) {
        cout << "The numbers are equal"
             << endl;
    }
    else {
        cout << "The numbers are not equal"
             << endl;
    }
}

// Driver code
int main()
{
    double a = (0.3 * 3) + 0.1;
    double b = 1;
    compareFloatNum(a, b);
}
```
outputs:\
`The numbers are not equal`

### solution

The reason is rounding errors and precision. To correctly compare two floats:

```
#include <bits/stdc++.h>
using namespace std;

void compareFloatNum(double a, double b)
{

    // Correct method to compare
    // floating-point numbers
    if (abs(a - b) < 1e-9) {
        cout << "The numbers are equal "
             << endl;
    }
    else {
        cout << "The numbers are not equal "
             << endl;
    }
}

// Driver code
int main()
{
    double a = (0.3 * 3) + 0.1;
    double b = 1;
    compareFloatNum(a, b);
}
```

