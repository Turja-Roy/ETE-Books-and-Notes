#include <bits/stdc++.h>
#define pb push_back
using namespace std;

class Student {
private:
    int n;
    vector<double> credits, grades;
    double cgpa;

public:
    Student() {
        cgpa = 0;
    }

    void take_inputs () {
        cout << "Enter the number of courses: "; cin >> n;

        credits.resize(n);
        grades.resize(n);

        cout << "\n\nEnter the credits and courses for each course:" << endl;
        for(int i=0 ; i<n ; i++) {
            cout << "Credits and Grade for course " << i+1 << ": ";
            cin >> credits[i] >> grades[i];
        }
    }
    void calculate_CGPA() {
        double total_credits=0, total_grade=0;

        for(int i=0 ; i<n ; i++)
            total_credits += credits[i], total_grade += credits[i] * grades[i];

        cgpa = total_grade / total_credits;
    }
    double get_cgpa() {
        return cgpa;
    }
};

int main ()
{
    Student st;

    st.take_inputs();
    st.calculate_CGPA();

    printf("\nFinal CGPA: %.2lf\n", st.get_cgpa());

    return 0;
}
