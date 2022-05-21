#include<iostream>
#include<fstream>

using namespace std;


struct student{
    int rollno;
    char name[20];
    float height;
};


student* readFile(int k){
    ifstream fin;
    fin.open("studentInput.txt");
    student *s;
    s = new student[100];
    for(int i = 0; i < k ; i++){
        fin>>s[i].rollno;
        
        fin>>s[i].name;
      
        fin>>s[i].height;
     

    }
    return s;
}


void printStudents(student *s,int n){
    cout<<endl<<"*****************************************************"<<endl;
    for(int i = 0; i<n ;i++){
        cout<<s[i].rollno<<" "<<s[i].name<<" "<<s[i].height<<endl;
    }
}

int maxHeight(student *s,int n){
    int indexOfMax = 0;    
    for(int i = 0; i < n ;i++){
        if(s[i].height>=s[indexOfMax].height){
            indexOfMax = i;
        }
    }
    return indexOfMax;
}


int main(){
    int k;
    cin>>k;
    student *s;    
    s = readFile(k);    
    printStudents(s,k);
    int i = maxHeight(s,k);
    cout<<endl<<"*****************************************************"<<endl;
    cout<<s[i].rollno<<" "<<s[i].name<<" "<<s[i].height<<endl;
    
    return 0;
}
