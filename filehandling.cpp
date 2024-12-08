#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char name[30];
    int age;
    fstream file;
    file.open("aa.txt",ios::out);
    if(!file){
        cout<<"Error in creating file.."<<endl;
        return 1;
    }
   cout<<"\nFile created successfully."<<endl;

   //read values from kb
   cout<<"Enter your name";
   cin.getline(name,30);
  
   cout<<"Enter age";
   cin>>age;
   //write into file
   file<<name<<endl;
file<<age<<endl;
   file.close();
   cout<<"\nFile saved and closed successufull..."<<endl;

    //re open file in input mode and read mode
    //open file
    file.open("aa.txt",ios::in);
    if(!file){
        cout<<"Error in creating file.."<<endl;
        return 0;
    }
    file>>name;
    file>>age;
    file.close();
   cout<<"Name:"<<name<<",Age:"<<age<<endl;
    return 0;
}