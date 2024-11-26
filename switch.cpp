#include<iostream>
using namespace std;
main(){
    int a,b,c;
    cout<<"Enter number-1:";
    cin>>a;
    cout<<"Enter number-2:";
    cin>>b;
    cout<<"Enter number-3:";
    cin>>c;
    (a<b)
        ?((a<c)?cout<<"a is minimum":cout<<"c is minimum")
        :((b<c)?cout<<"b is minimum":cout<<"c is minimum");

    int a,b;
    cout<<"press 1 for english\n";
    cout<<"press 2 for hindi\n";
    cout<<"press 3 for gujarati\n";
    cout<<"Enter your choice:";
    cin>>a;
    switch(a){
        case 1:
            cout<<"Internet Recharge ke liye 1 dabaiye\n";
            cout<<"Top-up Recharge ke liye 2 dabaiye\n";
            cout<<"Special Recharge ke liye 3 dabaiye\n";
            cout<<"Enter your choice:";
            cin>>b;
            switch (b)
            {
                case 1:
                    cout<<"Internet Recharge ke liye 1 dabaiye";
                    break;
                case 2:
                     cout<<"Top-up Recharge ke liye 2 dabaiye";
                     break;      
                case 3:
                     cout<<"Special Recharge ke liye 3 dabaiye";
                     break;
            }
            break;
            case 2:
            cout<<"Internet Recharge ke liye 1 dabaiye\n";
            cout<<"Top-up Recharge ke liye 2 dabaiye\n";
            cout<<"Special Recharge ke liye 3 dabaiye\n";
            cout<<"Enter your choice:";
            cin>>b;
            switch (b)
            {
                case 1:
                    cout<<"Internet Recharge ke liye 1 dabaiye";
                    break;
                case 2:
                     cout<<"Top-up Recharge ke liye 2 dabaiye";
                     break;      
                case 3:
                     cout<<"Special Recharge ke liye 3 dabaiye";
                     break;
            }
            break;
            case 3:
            cout<<"Internet Recharge ke liye 1 dabaiye\n";
            cout<<"Top-up Recharge ke liye 2 dabaiye\n";
            cout<<"Special Recharge ke liye 3 dabaiye\n";
            cout<<"Enter your choice:";
            cin>>b;
            switch (b)
            {
                case 1:
                    cout<<"Internet Recharge ke liye 1 dabaiye";
                    break;
                case 2:
                     cout<<"Top-up Recharge ke liye 2 dabaiye";
                     break;      
                case 3:
                     cout<<"Special Recharge ke liye 3 dabaiye";
                     break;
            }
            break;
        
    }
    
}
