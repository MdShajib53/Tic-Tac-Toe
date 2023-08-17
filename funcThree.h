bool funcThree(){
    for(int i=0;i<3;i++){
        if( (space[i][0]==space[i][1] && space[i][1]== space[i][2]) || (space[0][i]==space[1][i] && space[1][i]==space[2][i]) ){
            return true;
        }
    }

    if( (space[0][0]==space[1][1] && space[1][1]==space[2][2]) || (space[0][2]==space[1][1] && space[1][1]==space[2][0]) ){
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