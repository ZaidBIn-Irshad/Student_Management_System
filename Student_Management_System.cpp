#include <iostream>
using namespace std;

string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int Total = 0;

/*Function start From Here */
void Enter(){
    int choice;
    cout<<"\n*****************************************"<<endl;
    cout<<"How many students do you want to enter: ";
    cin>>choice;
    cout<<"*****************************************"<<endl;
    if(Total == 0){
    Total += choice;
    for(int i=0; i<choice; i++){
        cout<<"\nEnter data of students: "<<(i+1)<<endl;
        cout<<"Enter name: ";
        cin>>arr1[i];
        cout<<"Enter Rollno: ";
        cin>>arr2[i];
        cout<<"Enter course: ";
        cin>>arr3[i];
        cout<<"Enter class: ";
        cin>>arr4[i];
        cout<<"Enter contact: ";
        cin>>arr5[i];
        }
    }
    else{
        for(int i=Total; i<(Total+choice); i++){
        cout<<"\nEnter data of students: "<<(i+1)<<endl;
        cout<<"__________________________"<<endl;
        cout<<"Enter name: ";
        cin>>arr1[i];
        cout<<"Enter Rollno: ";
        cin>>arr2[i];
        cout<<"Enter course: ";
        cin>>arr3[i];
        cout<<"Enter class: ";
        cin>>arr4[i];
        cout<<"Enter contact: ";
        cin>>arr5[i];
        cout<<"__________________________"<<endl;
        }
    Total += choice;
    }
}

void Show(){
    if(Total <= 0){
        cout<<"\n***********************************************"<<endl;
        cout<<"Their is no Data please Enter 1 to Add Data...!"<<endl;
        cout<<"***********************************************"<<endl;
    }
    for(int i=0; i<Total; i++){
        cout<<"\n**********************"<<endl;
        cout<<"Data of student: "<<i+1<<endl;
        cout<<"Name: "<<arr1[i]<<endl;
        cout<<"Rollno: "<<arr2[i]<<endl;
        cout<<"Course: "<<arr3[i]<<endl;
        cout<<"Class: "<<arr4[i]<<endl;
        cout<<"Contact: "<<arr5[i]<<endl;
        cout<<"**********************"<<endl;
    }
    
}

void Search(){
    if(Total <= 0){
        cout<<"\n***********************************************"<<endl;
        cout<<"Their is no Data please Enter 1 to Add Data...!"<<endl;
        cout<<"***********************************************"<<endl;
    }
    string Rollno;
    cout<<"\n\n**************************************************"<<endl;
    cout<<"Enter Rollno of student which you want to search: ";
    cin>>Rollno;
    cout<<"**************************************************"<<endl;
    for(int i=0; i<Total; i++){
        if(Rollno == arr2[i]){
        cout<<"\n*******************"<<endl;
        cout<<"Data of student: "<<i+1<<endl;
        cout<<"Name: "<<arr1[i]<<endl;
        cout<<"Rollno: "<<arr2[i]<<endl;
        cout<<"Course: "<<arr3[i]<<endl;
        cout<<"Class: "<<arr4[i]<<endl;
        cout<<"Contact: "<<arr5[i]<<endl;
        cout<<"*******************"<<endl;
        }
    }
}

void update(){
    if(Total <= 0){
        cout<<"\n***********************************************"<<endl;
        cout<<"Their is no Data please Enter 1 to Add Data...!"<<endl;
        cout<<"***********************************************"<<endl;
    }
    string Rollno;
    cout<<"\n\n*******************************************************"<<endl;
    cout<<"Enter Rollno of student which you want to Update Data: ";
    cin>>Rollno;
    cout<<"*******************************************************"<<endl;
    for(int i=0; i<Total; i++){
        if(Rollno == arr2[i]){
        cout<<"Previous Data: "<<endl<<endl;
        cout<<"*******************"<<endl;
        cout<<"Data of student: "<<i+1<<endl;
        cout<<"Name: "<<arr1[i]<<endl;
        cout<<"Rollno: "<<arr2[i]<<endl;
        cout<<"Course: "<<arr3[i]<<endl;
        cout<<"Class: "<<arr4[i]<<endl;
        cout<<"Contact: "<<arr5[i]<<endl;
        cout<<"Enter New Data "<<endl;
        cout<<"\n*******************"<<endl;
        cout<<"Enter name: ";
        cin>>arr1[i];
        cout<<"Enter Rollno: ";
        cin>>arr2[i];
        cout<<"Enter course: ";
        cin>>arr3[i];
        cout<<"Enter class: ";
        cin>>arr4[i];
        cout<<"Enter contact: ";
        cin>>arr5[i];
        }
    }
}

void Delete(){
    if(Total <= 0){
        cout<<"\n***********************************************"<<endl;
        cout<<"Their is no Data please Enter 1 to Add Data...!"<<endl;
        cout<<"***********************************************"<<endl;
    }
    int a;
    cout<<"\n************************************"<<endl;
    cout<<"Press 1 to Delete the Entire Record"<<endl;
    cout<<"Press 2 to Delete the Specific Record"<<endl;
    cin>>a;
    cout<<"\n************************************"<<endl;
    if(a==1){
        Total=0;
        cout<<"\n*******************************"<<endl;
        cout<<"All Recored is Deleted........!"<<endl;
        cout<<"\n*******************************"<<endl;
    }
    else{
        string Rollno;
        cout<<"\n**************************************"<<endl;
        cout<<"Enter the Rollno you want to delete: ";
        cin>>Rollno;
        cout<<"**************************************"<<endl;
        bool found = false;
        for(int i=0; i<Total; i++){
            if(Rollno == arr2[i]){
                found = true;
                for(int j=i; j<Total-1; j++){
                    arr1[j]=arr1[j+1];
                    arr2[j]=arr2[j+1];
                    arr3[j]=arr3[j+1];
                    arr4[j]=arr4[j+1];
                    arr5[j]=arr5[j+1];
                }
                Total--;
                cout<<"\nRecord is Deleted......!!!"<<endl;
            }
        }
        if(!found){
            cout<<"Please Enter valid Rollno "<<endl;
        }
    }
}

/*Main Function */
int main() {
    int value;
    while(true)
    {
    cout<<"\nPress 1 to Enter data"<<endl;
    cout<<"Press 2 to Show data"<<endl;
    cout<<"Press 3 to Search data"<<endl;
    cout<<"Press 4 to update data"<<endl;
    cout<<"Press 5 to Delete data"<<endl;
    cout<<"Press 6 to exit....!"<<endl;
    cin>>value;
    switch(value){
        case 1:
            Enter();
            break;
        case 2:
            Show();
            break;
        case 3:
            Search();
            break;
        case 4:
            update();
            break;
        case 5:
            Delete();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<<"Invalid Input"<<endl;
            break;
        }
    }
    return 0;
}   