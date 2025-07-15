
# C++

## Data Types

### std::vector

A vector is a dynamic size array of arbitrary (templated) type.

#### definition

Definition:\
```std::vector<int> v;```\
for int type vector.

#### initialization

Using initializer list:\
```vector<type> v = {val1, val2, val3...};```


To add elements, std::vector has a .push_back() function:
```
int main() {
    vector<int> v;

    // Pushing Value one by one
    v.push_back(11);
    v.push_back(23);
    v.push_back(45);
    v.push_back(89);

    for (auto i : v)
        cout << i << " ";
    return 0;
}
```

## Nuances

### comparing floats

#### problem

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

