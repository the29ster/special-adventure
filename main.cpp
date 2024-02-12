#include <iostream>
#include <cmath>

int main()
{
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << x << "+" << y << "=" << x + y << std::endl;
    std::cout << x << "-" << y << "=" << x - y << std::endl;
    std::cout << x << "*" << y << "=" << x * y << std::endl;

    if(y == 0)
    {
      std::cout << "Dividing by zero is not a number." << std::endl;
    }
    else
    {
      std::cout << x << "/" << y << "=" << x / y << " with remainder of " << x % y << std::endl;
    }

    std::cout << "Square root of " << x << " is " << sqrt(x) << std::endl;
    std::cout << "Square root of " << y << " is " << sqrt(y) << std::endl;
    std::cout << x << "^" << y << "=" << pow(x, y) << std::endl;

    return 0;
}
