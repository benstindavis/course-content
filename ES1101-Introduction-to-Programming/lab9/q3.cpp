#include <iostream>
#include <string.h>
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

struct students
{
    int studentId;
    char studentName[100];
};



void findStudentName(course c[], marks m[], students s[], int cSize, int mSize, int sSize, char requiredCourse[])
{
    int requiredCourseId;
    for (int i = 0; i < cSize; i++)
    {
        if (strcmp(requiredCourse, c[i].courseName) == 0)
        {
            requiredCourseId = c[i].courseId;
            int requiredStudentId = -1;
            int maxMark = 0;
            for (int i = 0; i < mSize; i++)
            {
                if (m[i].courseId == requiredCourseId)
                {
                    if (maxMark <= m[i].mark)
                    {
                        requiredStudentId = m[i].studentId;
                        maxMark = m[i].mark;
                        
                        
                    }
                }
            }
            
            char requiredStudentName[100];
            for (int i = 0; i < sSize; i++)
            {
                if (requiredStudentId == s[i].studentId)
                {
                    strcpy(requiredStudentName,s[i].studentName);
                    break;
                }
            }

            cout<<requiredStudentName<<endl;
            break;
        }
    }

    

}

int main()
{   
    int t;cin>>t;
    while(t--){
        int cSize, mSize, sSize;
    

    course *c;
    marks *m;
    students *s;

    cin >> cSize ;c = new course[cSize];
    
    

    for (int i = 0; i < cSize; i++)
    {
        cin >> c[i].courseId >> c[i].courseName;
    }
    
        
        
    cin>> sSize;s = new students[sSize];

    for (int i = 0; i < sSize; i++)
    {
        cin >> s[i].studentId >> s[i].studentName;
    }
        
        
        
        
    cin>> mSize ;m = new marks[mSize];

    for (int i = 0; i < mSize; i++)
    {
        cin >> m[i].studentId >> m[i].courseId >> m[i].mark;
    }
        
        
        

    char givenCourse[100];
    cin >> givenCourse;

    findStudentName(c, m, s, cSize, mSize, sSize, givenCourse);

    delete[] c;
    delete[] m;
    delete[] s;

        
    }
    
    return 0;
}