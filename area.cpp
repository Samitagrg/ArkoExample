#include <iostream>
using namespace std;

class Area{
private:
    float length;
    float breadth;

public:
    void get_Area(float l, float b) {
        length = l;
        breadth = b;
    }
    float calculate_Area(float l, float b) {
        return l*b;
    }
};

int main()
{
    float l,b;
    Area myArea;
    cout << "Enter length and breadth:" << endl;
    cin >> l >> b;
    myArea.get_Area(l,b);
    cout << "Area is " << myArea.calculate_Area(l,b) << endl;

    return 0;
}