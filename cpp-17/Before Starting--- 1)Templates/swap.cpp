#include <iostream>
#include <string>

template <typename T> T swap(T& a, T& b);

int main()
{

    int x = 20;
    int y = 12;
    swap(x,y);
    std::cout << "x : " << x << " y: " << y << std::endl;

    return 0;
}

template <typename T> T swap(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;    

}