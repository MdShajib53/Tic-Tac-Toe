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