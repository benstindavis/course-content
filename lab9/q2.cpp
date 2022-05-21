#include <iostream>
#include<string.h>
using namespace std;

struct course
{
    int courseId;
    char courseName[100];
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
            requiredCourseID = c[i].courseId;
            int studentCount = 0 ;

    for(int i = 0 ;i<mSize;i++){
        if(requiredCourseID == m[i].courseId){
            studentCount++;
        }
    }return studentCount;
            break;
        }
    }
    return 0;

    
}

int main()
{
    int t;cin>>t;
    while(t--)
    {int cSize, mSize;
    

    course *c;
    marks *m;

    cin >> cSize;c = new course[cSize];
    

    for (int i = 0; i < cSize; i++)
    {
        cin >> c[i].courseId >> c[i].courseName;
    }
    cin>> mSize;m = new marks[mSize];
    for (int i = 0; i < mSize; i++)
    {
        cin >> m[i].studentId >> m[i].courseId >> m[i].mark;
    }

    char givenCourse[100];
    cin >> givenCourse;

    cout << findStudentCount(c, m, cSize, mSize, givenCourse)<<endl;

    delete [] c;
    delete [] m;}
    return 0;
}