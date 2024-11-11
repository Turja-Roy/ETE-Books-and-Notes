#include <iostream>
using namespace std;

void print (int var) {
    cout << "Integer number: " << var << endl;
}
void print (float var) {
    cout << "Float number: " << var << endl;
}
void print (int var1, int var2) {
    cout << "Integer number: " << var1;
    cout << " and another Integer number: " << var2 << endl;
}
void print (int var1, float var2) {
    cout << "Integer number: " << var1;
    cout << " and float number: " << var2 << endl;
}
void print (float var1, float var2) {
    cout << "Float number: " << var1;
    cout << " and another Float number: " << var2 << endl;
}

int main ()
{
    float a=1.5, b=2.5;
    int c=5;

    print(c, b);

    return 0;
}
