#include <iostream>

//  Member Functions Defined Inside a struct
struct Point
{

    int x;
    int y;
    std::string s;

    void display(){
        std::cout <<x<<" "<<y<<" "<<" "<<s<<std::endl;
    };
    int sum()
    {
        return x+y;
    }
};


Point set_point(int x, int y,std::string id)
{
    return {x,y,id};
};

int main()
{
    Point p = {12,22,"asdasd"};
    p.display();
    std::cout << "sum : " << p.sum() << std::endl;

    Point p2 = set_point(10,12,"asdasss");
    p2.display();
    return 0;
}


