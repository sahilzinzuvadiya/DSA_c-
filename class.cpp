#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    string surname;
    string fathername;
    int age;
    int gr_id;

    void setdata(){
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your surname:";
        cin>>surname;
        cout<<"Enter your fathername:";
        cin>>fathername;
        cout<<"Enter your age:";
        cin>>age;
        cout<<"Enter your gr_id:";
        cin>>gr_id;
    }
    void getdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Surname:"<<surname<<endl;
        cout<<"Fathername:"<<fathername<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"GR_ID:"<<gr_id<<endl;
    }
};

main(){
    Student s1[8];
    for(int i=0;i<8;i++){
        s1->setdata();
        s1->getdata();
    }
    
}