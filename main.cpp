#include<iostream>
using namespace std;

int main(){
    int space[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    string name1, name2;
    cout<<"\nEnter The name of the first Player : ";
    getline(cin, name1);
    cout<<"Enter The name of the second Player : ";
    getline(cin, name2);
    
    cout<<"\n";
    cout<<name1<<" will play first\n";
    cout<<name2<<" will play second\n\n";

    //Structure
    cout<<"       |     |     \n";
    cout<<"  _____|_____|____ \n";
    cout<<"       |     |     \n";
    cout<<"  _____|_____|____ \n";
    cout<<"       |     |     \n";
    cout<<"       |     |     \n";
    

    return 0;
}