// STUDENT MANAGEMENT PROJECT ::
#include<iostream>
using namespace std;
// array for name ,roll no, course ,class,contact
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
// sum of data 
int total=0;
void enter(){
int choice;
cout<<"How any students do you want to enter : "<<endl;
cin>>choice;
// for knowing the total entry
if(total==0){
for(int i=1;i<=choice;i++){
    cout<<"enter data of student "<<i<<endl;
    cout<<"Enter name : ";
    cin>>arr1[i];
    cout<<"Enter roll no. : ";
    cin>>arr2[i];
    cout<<"Enter House : ";
    cin>>arr3[i];
    cout<<"Enter class : ";
    cin>>arr4[i];
    cout<<"Enter contact : ";
    cin>>arr5[i];
}
}
else{
    for(int i=total+1;i<=total+choice;i++){
    cout<<"enter data of student "<<i<<endl;
    cout<<"Enter name : ";
    cin>>arr1[i];
    cout<<"Enter roll no. : ";
    cin>>arr2[i];
    cout<<"Enter House : ";
    cin>>arr3[i];
    cout<<"Enter class : ";
    cin>>arr4[i];
    cout<<"Enter contact : ";
    cin>>arr5[i];
    cout<<endl;
}
}
total+=choice;
}
void show(){
 for(int i=1;i<=total;i++){
    cout<<"Data of student "<<i<<endl;
    cout<<"Name : "<<arr1[i]<<endl;
    cout<<"Roll no. : "<<arr2[i]<<endl;
    cout<<"House : "<<arr3[i]<<endl;
    cout<<"Class : "<<arr4[i]<<endl;
    cout<<"Contact : "<<arr5[i]<<endl;
 }
}
void search(){
string rollno;
cout<<"Enter roll no. of student which you want to search : "<<endl;
cin>>rollno;
for(int i=1;i<=total;i++){
    if(arr2[i]==rollno){
    cout<<"Data of student "<<i<<endl;
    cout<<"Name : "<<arr1[i]<<endl;
    cout<<"Roll no. : "<<arr2[i]<<endl;
    cout<<"House : "<<arr3[i]<<endl;
    cout<<"Class : "<<arr4[i]<<endl;
    cout<<"Contact : "<<arr5[i]<<endl;
 
    }
}
}
void update(){
string rollno;
cout<<"Enter roll no. of student whose data you want to change : "<<endl;
cin>>rollno;
for(int i=1;i<=total;i++){
    if(arr2[i]==rollno){
    cout<<"Previous Data "<<endl;
    cout<<"Data of student "<<i<<endl;
    cout<<"Name : "<<arr1[i]<<endl;
    cout<<"Roll no. : "<<arr2[i]<<endl;
    cout<<"House : "<<arr3[i]<<endl;
    cout<<"Class : "<<arr4[i]<<endl;
    cout<<"Contact : "<<arr5[i]<<endl;
    cout<<"Enter new data "<<endl;
    cout<<"Enter name : ";
    cin>>arr1[i];
    cout<<"Enter roll no. : ";
    cin>>arr2[i];
    cout<<"Enter House : ";
    cin>>arr3[i];
    cout<<"Enter class : ";
    cin>>arr4[i];
    cout<<"Enter contact : ";
    cin>>arr5[i];
    cout<<endl;
}
    
}
}
void delete_data(){
    int a;
cout<<"Press 1 to delete full record "<<endl;
cout<<"Press 2 to delete specific data "<<endl;
cin>>a;
if(a==1){
    total=0;
    cout<<"All record is deleted "<<endl;
}
else{
string rollno;
cout<<"Enter roll no. which you want to delete "<<endl;
cin>>rollno;
for(int i=1;i<=total;i++){
    if(arr2[i]==rollno){
       for(int j=i;j<total;j++){
        arr1[j]=arr1[j+1];
        arr2[j]=arr2[j+1];
        arr3[j]=arr3[j+1];
        arr4[j]=arr4[j+1];
        arr5[j]=arr5[j+1];
       }
       total--;
       cout<<"Your record is deleted"<<endl;
    }
    
}
}
}


int main(){
int value;
while(true){

cout<<"Press 1 to enter data"<<endl;
cout<<"Press 2 to show data "<<endl;
cout<<"Press 3 to search data "<<endl;
cout<<"Press 4 to update data "<<endl;
cout<<"Press 5 to delete data "<<endl;
cout<<"Press 6 to exit "<<endl;
cin>>value;
switch(value){
    case 1:
    enter();
    break;
    case 2:
    show();
    break;
    case 3:
    search();
    break;
    case 4:
    update();
    break;
    case 5:
    delete_data();
    break;
    case 6:
    exit(0);
    break;
    default:
    cout<<"Invalid input"<<endl;
    break;
}
}


    return 0;
}