#include <iostream>
using namespace std;

void display(int m[5])
{
    cout << "Displaying marks: " << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}

int main() {
    int marks[5] = {88, 76, 90, 61, 69};

    display(marks);
    return 0;
}
