#include<iostream>
using namespace std;
main(){
    int a;
    cout<<"your mark is 90\n";
    cout<<"your mark is 80\n";
    cout<<"your mark is 70\n";
    cout<<"your mark is 60\n";
    cout<<"your mark is 50\n";
    cout<<"Enter your choice:";
    cin>>a;
    switch(a){
        case 1:
            cout<<"your grade is A.\nExcellent work!";
            break;
        case 2:
            cout<<"your grade is B.\nwell done";
            break;
        case 3:
            cout<<"your grade is C.\ngood job";
            break;
        case 4:
            cout<<"your grade is D.\nyou passed";
            break;
        case 5:
            cout<<"your grade is F.\nsorry,you failed";
            break;
    }
}