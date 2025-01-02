#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    string surname;
    string fathername;
    int age;
    int gr_id;

    public:
    Student(string a,string b,string c,int d,int e){
        name=a;
        surname=b;
        fathername=c;
        age=d;
        gr_id=e;
    }
    void getdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Surname:"<<surname<<endl;
        cout<<"Fathername:"<<fathername<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"GR_ID:"<<gr_id<<endl;
    }
    Student(Student &obj){
        name=obj.name;
        surname=obj.surname;
        fathername=obj.fathername;
        this->fathername="alpesh";
        age=obj.age;
        gr_id=obj.gr_id;
    }
};

int main(){
        Student s2("John", "Doe", "Smith", 20, 123);
        s2.getdata();
        cout<<endl;

        Student s3(s2);
        s3.getdata();
        

    return 0;

}