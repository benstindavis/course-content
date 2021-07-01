/*input
4 "yolo"
*/
#include <iostream>


using namespace std;

struct student{
    int roll;
    int height;
};


int findIndexOfMaxHeight(student s[],int n){
    int curMaxIndex = 0;
    for(int i = 0;i<n;i++){
        if(s[curMaxIndex].height<=s[i].height){
            curMaxIndex = i;
        }
    }
    return curMaxIndex;
}


int main(){
    int n;
    student *s;

    cin>>n;
    s = new student[n];

    for(int i = 0 ; i <n ; i++){
        cin>>s[i].roll>>s[i].height;
    }

    cout<<s[findIndexOfMaxHeight(s,n)].height;

    delete [] s;
    return 0;

}