#include <iostream>
#include<string.h>
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

int findStudentCount(course c[], marks m[], int cSize, int mSize, char requiredCourse[])
{   
    int requiredCourseID;
    for(int i = 0; i<cSize;i++){
        if(strcmp(requiredCourse,c[i].courseName)==0){
            requiredCourseID = i;
            break;
        }
    }
    int studentCount = 0 ;

    for(int i = 0 ;i<mSize;i++){
        if(requiredCourseID == m[i].courseId){
            studentCount++;
        }
    }

    return studentCount;
}

int main()
{
    int cSize, mSize;
    cin >> cSize >> mSize;

    course *c;
    marks *m;

    c = new course[cSize];
    m = new marks[mSize];

    for (int i = 0; i < cSize; i++)
    {
        cin >> c[i].courseId >> c[i].courseName;
    }

    for (int i = 0; i < mSize; i++)
    {
        cin >> m[i].studentId >> m[i].courseId >> m[i].mark;
    }

    char givenCourse[10];
    cin >> givenCourse;

    cout << findStudentCount(c, m, cSize, mSize, givenCourse);
    return 0;
}