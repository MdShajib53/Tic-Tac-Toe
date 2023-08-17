#include<iostream>
#include<string>
#include"color.h"
#include"funcOne.h"
#include"funcTwo.h"
#include"funcThree.h"
using namespace std;

char space[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
string name1, name2;
int row,col;
char token='x';
bool tie=false;


int main(){
    cout<<"\nEnter The name of the 1st Player : ";
    Yellow();
    getline(cin,name1);
    Reset();
    cout<<"Enter The name of the 2nd Player : ";
    Purple();
    getline(cin,name2);
    Reset();
    
    cout<<endl;
    Blue();
    cout<<"  "<<name1;
    cout<<" will play first...\n\n";
    Reset();

    while(!funcThree()){
        funcOne();
        funcTwo();
        funcThree();
    }
    if(token=='x' && tie==false){
        funcOne();
        Purple();
        cout<<name2;
        Green();
        cout<<" Wins!!"<<endl;
        Reset();
    }
    else if(token=='0' && tie==false){
        funcOne();
        Yellow();
        cout<<name1;
        Green();
        cout<<" Wins!!"<<endl;
        Reset();
    }
    else{
        funcOne();
        Blue();
        cout<<"It's a draw!"<<endl;
        Reset();
    }

    return 0;
}