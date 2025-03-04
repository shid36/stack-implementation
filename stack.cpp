#include <iostream>
using namespace std;
int main (){
int x;
cout <<"enter the number as your wish=";
cin >> x;
int arr[x];
int choice,value,top=-1;
while(true){
    cout<<"stack operation:"<<endl;
    cout<<"1.push"<< endl;
    cout<< "2.pop"<< endl;
    cout<<"3.display"<<endl;
    cout<<"4.exit..."<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    switch (choice){
        case 1:
        if(top==x-1){
            cout<<"overflow"<<endl;

        }
        else{
            cout<<"push the number=";
            cin>>value;
            arr[++top]=value;
            cout<<"stack the number="<<value<<endl;

        }break;
        case 2:
        if(top==-1){
            cout<<"underflow"<<endl;
        }
        else {
            cout<<"pop="<< arr[top--]<<endl;

        }
        break;
        case 3:
        if (top==-1){
           cout<<"underflow"<<endl;
    }
    else {
        cout<<"displaying the stack=";
        for (int i=top;i>=0;i--){
            cout << arr[i]<<endl;
        }

    }
    break;
    case 4:
    cout<<"exiting..."<<endl;
    return 0;
}
}
}