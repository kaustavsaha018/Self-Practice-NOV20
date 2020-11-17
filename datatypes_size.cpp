#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main(){
    string datatype_name;
    int datatype_size;
    cout<<"\n--------------------------------------------------\n\n";
    ofstream fout;
    fout.open("datasize.dat");

    datatype_name="char";
    datatype_size=sizeof(char);
    fout<<datatype_name<<setw(20)<<datatype_size<<endl;

    datatype_name="unsigned char";
    datatype_size=sizeof(unsigned char);
    fout<<datatype_name<<setw(11)<<datatype_size<<endl;

    datatype_name="short int";
    datatype_size=sizeof(short int);
    fout<<datatype_name<<setw(15)<<datatype_size<<endl;

    datatype_name="unsigned short int";
    datatype_size=sizeof(unsigned short int);
    fout<<datatype_name<<setw(6)<<datatype_size<<endl;

    datatype_name="int";
    datatype_size=sizeof(int);
    fout<<datatype_name<<setw(21)<<datatype_size<<endl;

    datatype_name="unsigned int";
    datatype_size=sizeof(unsigned int);
    fout<<datatype_name<<setw(12)<<datatype_size<<endl;

    datatype_name="long int";
    datatype_size=sizeof(long int);
    fout<<datatype_name<<setw(16)<<datatype_size<<endl;
    
    datatype_name="unsigned long int";
    datatype_size=sizeof(unsigned long int);
    fout<<datatype_name<<setw(7)<<datatype_size<<endl;

    datatype_name="float";
    datatype_size=sizeof(float);
    fout<<datatype_name<<setw(19)<<datatype_size<<endl;

    datatype_name="double";
    datatype_size=sizeof(double);
    fout<<datatype_name<<setw(18)<<datatype_size<<endl;

    datatype_name="long double";
    datatype_size=sizeof(long double);
    fout<<datatype_name<<setw(13)<<datatype_size<<endl;
    
    fout.close();

    ifstream fin;
    fin.open("datasize.dat");
    
    while(fin){
        getline(fin,datatype_name);
        cout<<datatype_name<<endl;
    }
    fin.close();
    cout<<"--------------------------------------------------\n";  
    return 0;
}
