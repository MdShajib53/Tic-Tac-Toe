#include<iostream>
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
