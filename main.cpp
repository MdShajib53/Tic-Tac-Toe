#include<iostream>
#include<string>
#include"color.h"
using namespace std;

char space[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
string name1, name2;
int row,col;
char token='x';
bool tie=false;
int a,b,c,d,e,f,g,h,i;
int flag = 0;


void funcOne(){
    //Structure
    cout<<"                 |     |      \n";
    cout<<"             ";
    if(space[0][0]=='x'){
        Yellow();
        cout<<space[0][0];
        Reset();
    }else if(space[0][0]=='0'){
        Purple();
        cout<<space[0][0];
        Reset();
    }else cout<<space[0][0];
    cout<<"   |  ";
    if(space[0][1]=='x'){
        Yellow();
        cout<<space[0][1];
        Reset();
    }else if(space[0][1]=='0'){
        Purple();
        cout<<space[0][1];
        Reset();
    }else cout<<space[0][1];
    cout<<"  |  ";
    if(space[0][2]=='x'){
        Yellow();
        cout<<space[0][2];
         Reset();
    }else if(space[0][2]=='0'){
            Purple();
            cout<<space[0][2];
            Reset();
    }else cout<<space[0][2];
    cout<<endl;
    cout<<"            _____|_____|_____ \n";
    cout<<"                 |     |      \n";

    cout<<"             ";
    if(space[1][0]=='x'){
        Yellow();
        cout<<space[1][0];
        Reset();
    }else if(space[1][0]=='0'){
        Purple();
        cout<<space[1][0];
        Reset();
    }else cout<<space[1][0];
    cout<<"   |  ";
    if(space[1][1]=='x'){
        Yellow();
        cout<<space[1][1];
        Reset();
    }else if(space[1][1]=='0'){
        Purple();
        cout<<space[1][1];
        Reset();
    }else cout<<space[1][1];
    cout<<"  |  ";
    if(space[1][2]=='x'){
        Yellow();
        cout<<space[1][2];
        Reset();
    }else if(space[1][2]=='0'){
        Purple();
        cout<<space[1][2];
        Reset();
    }else cout<<space[1][2];
    cout<<endl;
    cout<<"            _____|_____|_____ \n";
    cout<<"                 |     |      \n";

    cout<<"             ";
    if(space[2][0]=='x'){
        Yellow();
        cout<<space[2][0];
        Reset();
    }else if(space[2][0]=='0'){
        Purple();
        cout<<space[2][0];
        Reset();
    }else cout<<space[2][0];
    cout<<"   |  ";
    if(space[2][1]=='x'){
        Yellow();
        cout<<space[2][1];
        Reset();
    }else if(space[2][1]=='0'){
        Purple();
        cout<<space[2][1];
        Reset();
    }else cout<<space[2][1];
    cout<<"  |  ";
    if(space[2][2]=='x'){
        Yellow();
        cout<<space[2][2];
        Reset();
    }else if(space[2][2]=='0'){
        Purple();
        cout<<space[2][2];
        Reset();
    }else cout<<space[2][2];
    cout<<endl;
    cout<<"                 |     |      \n";

}

void funcTwo(){
    int digit;
    if(token=='x'){
        Yellow();
        cout<<"\n"<<name1<<", please enter : ";
        cin>>digit;
        cout<<endl;
        Reset();
    }
    if(token=='0'){
        Purple();
        cout<<"\n"<<name2<<", please enter : ";
        cin>>digit;
        cout<<endl;
        Reset();
    }

    if(digit==1){
        row=0,col=0;
    }
    else if(digit==2){
        row=0,col=1;
    }
    else if(digit==3){
        row=0,col=2;
    }
    else if(digit==4){
        row=1,col=0;
    }
    else if(digit==5){
        row=1,col=1;
    }
    else if(digit==6){
        row=1,col=2;
    }
    else if(digit==7){
        row=2,col=0;
    }
    else if(digit==8){
        row=2,col=1;
    }
    else if(digit==9){
        row=2,col=2;
    }
    else{
        Red();
        cout<<"Invalid !!!"<<endl;
        cout<<"Please enter 1 to 9 any digit."<<endl;
        Reset();
        return;
    }
    //When 1st player played
    if(token=='x' && space[row][col]!='x' && space[row][col]!='0'){
        space[row][col]='x';
        token='0';
    }
    //When 2nd player played
    else if(token=='0' && space[row][col]!='x' && space[row][col]!='0'){
        space[row][col]='0';
        token='x';
    }
    else{
        Red();
        cout<<digit<<" is already used. So, Enter another digit!"<<endl<<endl;
        Reset();
        return;
    }
}

bool funcThree(){
    for(int i=0;i<3;i++){
        if( (space[i][0]==space[i][1] && space[i][1]== space[i][2]) || (space[0][i]==space[1][i] && space[1][i]==space[2][i]) ){
            flag=1;
            return true;
        }
    }

    if( (space[0][0]==space[1][1] && space[1][1]==space[2][2]) || (space[0][2]==space[1][1] && space[1][1]==space[2][0]) ){
        flag=1;
        return true;
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(space[i][j]!='x' && space[i][j]!='0') return false;
        }
    }
    tie = true;
    return true;
}

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
        cout<<"\nFunc3"<<endl;
        funcThree();
    }
    if(token=='x' && tie==false){
        funcOne();
        Purple();
        cout<<name2<<" Wins!!"<<endl;
        Reset();
    }
    else if(token=='0' && tie==false){
        funcOne();
        Yellow();
        cout<<name1<<" Wins!!"<<endl;
        Reset();
    }
    else{
        funcOne();
        Cyan();
        cout<<"It's a draw!"<<endl;
        Reset();
    }

    return 0;
}