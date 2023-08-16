#include<iostream>
using namespace std;

int space[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int row,col;
char token='x';

void funcOne(){
    string name1, name2;
    cout<<"\nEnter The name of the first Player : ";
    getline(cin, name1);
    cout<<"Enter The name of the second Player : ";
    getline(cin, name2);
    
    cout<<"\n";
    cout<<name1<<" will play first\n";
    cout<<name2<<" will play second\n\n";

    //Structure
    cout<<"       |     |      \n";
    cout<<"   "<<space[0][0]<<"   |  "<<space[0][1]<<"  |  "<<space[0][2]<<endl;
    cout<<"  _____|_____|_____ \n";
    cout<<"       |     |      \n";
    cout<<"   "<<space[1][0]<<"   |  "<<space[1][1]<<"  |  "<<space[1][2]<<endl;
    cout<<"  _____|_____|_____ \n";
    cout<<"       |     |      \n";
    cout<<"   "<<space[2][0]<<"   |  "<<space[2][1]<<"  |  "<<space[2][2]<<endl;
    cout<<"       |     |      \n";
}

void funcTwo(string name1,string name2){
    int digit;
    if(token=='x'){
        cout<<name1<<" please enter ";
        cin>>digit;
    }
    if(token=='0'){
        cout<<name2<<" please enter ";
        cin>>digit;
    }
    if(digit=1){
        row=0,col=0;
    }
    if(digit==2){
        row=0,col=1;
    }
    if(digit==3){
        row=0,col=2;
    }
    if(digit=4){
        row=1,col=0;
    }
    if(digit==5){
        row=1,col=1;
    }
    if(digit==6){
        row=1,col=2;
    }
    if(digit=7){
        row=2,col=0;
    }
    if(digit==8){
        row=2,col=1;
    }
    if(digit==9){
        row=2,col=2;
    }
    else{
        cout<<"Invalid !!!"<<endl;
    }
    //When 2nd player played
    if(token=='x' && space[row][col]!='x' && space[row][col]!='0'){
        space[row][col]='x';
        token='0';
    }
    //When 2nd player played
    else if(token=='0' && space[row][col]!='x' && space[row][col]!='0'){
        space[row][col]='0';
        token='x';
    }
}