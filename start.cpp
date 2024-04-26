#include<iostream>
using namespace std;

template<class T>
class Add
{
private:
    T a;
    T b;
    T ans;

public:
    void get(T x, T y)
    {
        a = x;
        b = y;
    }

    void cal()
    {
        ans = a + b;
    }

    void display()
    {
        cout << "addition: " << ans << endl;
    }
};

int main()
{
    Add<int> a;
    a.get(1,2);
    a.cal();
    a.display();
    return 0;
}