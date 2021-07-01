#include <iostream>
#include <string.h>
using namespace std;

struct course
{
    int courseId;
    char courseName[10];
};

struct marks
{
    int studentId;
    int courseId;
    int mark;
};

struct students
{
    int studentId;
    char studentName[20];
};


int findStudentName(course c[],marks m[],students s[], int cSize, int mSize, int sSize, char requiredCourse[]){
    int requiredCourseId;
    for(int i = 0; i <cSize;i++){
        if(strcmp(requiredCourse,c[i].courseName)==0){
            requiredCourseId = 
        }
    }
}

int main()
{
    int cSize, mSize, sSize;
    cin >> cSize >> mSize >> sSize;

    course *c;
    marks *m;
    students *s;

    c = new course[cSize];
    m = new marks[mSize];
    s = new students[sSize];

    for (int i = 0; i < cSize; i++)
    {
        cin >> c[i].courseId >> c[i].courseName;
    }

    for (int i = 0; i < mSize; i++)
    {
        cin >> m[i].studentId >> m[i].courseId >> m[i].mark;
    }

        for (int i = 0; i < cSize; i++)
    {
        cin >> c[i].courseId >> c[i].courseName;
    }

    for (int i = 0; i < sSize; i++)
    {
        cin >> s[i].studentId >> s[i].studentName;
    }

    char givenCourse[10];
    cin >> givenCourse;

    cout<< findStudentName(c,m,s,cSize,mSize,sSize,givenCourse)<<endl;

    delete [] c;
    delete [] m;
    delete [] s;

    return 0;


}