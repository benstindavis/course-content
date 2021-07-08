#include<iostream>
#include<fstream>

using namespace std;


void writeToFile(char data[],char filename[]){
    ofstream fout;
    fout.open(filename,ios::app);
    fout<<data<<" ";
    fout.close(); 
}
void writeToFile(char data,char filename[]){
    ofstream fout;
    fout.open(filename,ios::app);
    fout<<data<<" ";
    fout.close(); 
}

void writeToFile(int data,char filename[]){
    ofstream fout;
    fout.open(filename,ios::app);
    fout<<data<<" ";
    fout.close(); 
}

void writeToFile(float data,char filename[]){
    ofstream fout;
    fout.open(filename,ios::app);
    fout<<data<<" ";
    fout.close(); 
}



void readIntFromFile(int k,char filename[]){
    ifstream fin;
    fin.open(filename);
    int n;
    for(int i = 0; i <k ;i++){
        fin>>n;
        cout<<n<<" ";
        writeToFile(n,"output.txt");
    }
    cout<<endl;
    writeToFile(" ","output.txt");
}
void readCharFromFile(int k,char filename[]){
    ifstream fin;
    fin.open(filename);
    char c;
    for(int i = 0; i <k ;i++){
        fin>>c;
        cout<<c<<" ";
        writeToFile(c,"output.txt");

    }
    cout<<endl; 
    writeToFile(" ","output.txt");

}
void readStringFromFile(int k,char filename[]){
    ifstream fin;
    fin.open(filename);
    char str[100];
    for(int i = 0; i <k ;i++){
        fin.getline(str,100);
        cout<<str<<" ";
        writeToFile(str,"output.txt");

    }
    cout<<endl;
    writeToFile(" ","output.txt");

}
void readFloatFromFile(int k,char filename[]){
    ifstream fin;
    fin.open(filename);
    float n;
    for(int i = 0; i <k ;i++){
        fin>>n;
        cout<<n<<" ";
        writeToFile(n,"output.txt");

    }
    cout<<endl;
    writeToFile(" ","output.txt");

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