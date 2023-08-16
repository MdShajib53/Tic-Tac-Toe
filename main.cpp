#include<iostream>
using namespace std;

int space[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int row,col;

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