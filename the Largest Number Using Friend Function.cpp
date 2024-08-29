#include<iostream>
using namespace std;

class Largest {
    int a, b, m;
public:
    void setData(int x, int y, int z) {
        a = x;
        b = y;
        m = z;
    }
    
    friend void find_Max(Largest l);
};

void find_Max(Largest l) {
    int max = (l.a > l.b && l.a > l.m) ? l.a : (l.b > l.m) ? l.b : l.m;
    cout << "Maximum no is " << max << endl;
}

int main() {
    Largest l;
    int a, b, c;
    cout << "Enter the first no: ";
    cin >> a;
    cout << "Enter the second no: ";
    cin >> b;
    cout << "Enter the third no: ";
    cin >> c;
    
    l.setData(a, b, c);
    find_Max(l);
    
    return 0;
}

