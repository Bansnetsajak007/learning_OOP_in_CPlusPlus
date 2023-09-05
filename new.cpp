// DMA USING NEW OPERATOR
#include <iostream>
using namespace std;
class practice
{
public:
    void pract()
    {
        int *p = new int;
        float *fp = new float[10];
        *p = 40;
        cout << "VALUE: " << *p << endl;
        cout << "enter data: " << endl;
        for (int i = 0; i < 10; i++)
        {
            cin >> *(fp + 1);
        }
        delete p;
        delete[] fp;
    }
};

int main()
{
    practice obj;
    obj.pract();
    return 0;
}