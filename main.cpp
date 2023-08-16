#include<iostream>
using namespace std;

int main(){
    int space[3][3] = {{00,01,02},{10,11,12},{20,21,22}};
    
    string name1, name2;
    cout<<"\nEnter The name of the first Player : ";
    getline(cin, name1);
    cout<<"Enter The name of the second Player : ";
    getline(cin, name2);
    
    cout<<"\n";
    cout<<name1<<" will play first\n";
    cout<<name2<<" will play second\n\n";

    return 0;
}