#include<iostream>

using namespace std;


struct student
{
    int studentId;
    char studentName[20];
    int marks;

};

void sortStudent(student* s, int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++)
            if (s[j].marks > s[j + 1].marks) {
                student temp;
                temp = s[j + 1];
                s[j + 1] = s[j];
                s[j] = temp;
            }    
    }
}



int main() {
    int n;
    cin >> n;
    student* s;

    s = new student[n];

    for (int i = 0;i < n;i++)
    {
        cin >> s[i].studentId >> s[i].studentName >> s[i].marks;
    }

    sortStudent(s, n);
    return 0;
}