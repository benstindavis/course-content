#include<iostream>
#include<fstream>

using namespace std;


void readIntFromFile(int k,char filename[]){
    ifstream fin;
    fin.open(filename);
    int n;
    for(int i = 0; i <k ;i++){
        fin>>n;
        cout<<n<<" ";
    }
    cout<<endl;
}
void readCharFromFile(int k,char filename[]){
    ifstream fin;
    fin.open(filename);
    char c;
    for(int i = 0; i <k ;i++){
        fin>>c;
        cout<<c<<" ";
    }
    cout<<endl; 
}
void readStringFromFile(int k,char filename[]){
    ifstream fin;
    fin.open(filename);
    char str[100];
    for(int i = 0; i <k ;i++){
        fin.getline(str,100);
        cout<<str<<" ";
    }
    cout<<endl;    
}
void readFloatFromFile(int k,char filename[]){
    ifstream fin;
    fin.open(filename);
    float n;
    for(int i = 0; i <k ;i++){
        fin>>n;
        cout<<n<<" ";
    }
    cout<<endl;
}



int main(){
    int k;
    cin>>k;
    readIntFromFile(k,"inputInt.txt");
    readCharFromFile(k,"inputChar.txt");
    readStringFromFile(k,"inputString.txt");
    readFloatFromFile(k,"inputFloat.txt");

    return 0;
}