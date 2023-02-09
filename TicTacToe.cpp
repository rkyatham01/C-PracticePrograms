#include <iostream>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main(){
    //creating Tic Tac Toe board
    char spaces[9] ={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X'; //marker for player
    char computer = 'O'; //marker for computer
    bool running = true;

    drawBoard(spaces);

    while(running){ //will set to false when exit
        playerMove(spaces, player);
        drawBoard(spaces);
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }else if(checkTie(spaces)){ //no more spaces
            running = false;
            break;
        }
        computerMove(spaces, computer);
        drawBoard(spaces); //to show the updates
        if(checkWinner(spaces, player, computer)){
            running = false;
            break;
        }else if(checkTie(spaces)){ //no more spaces
            running = false;
            break;
        }
    }

    std::cout << '\n' << "Thanks for playing!";
    return 0;
}

void drawBoard(char *spaces){ //creating grid ui on console
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|______" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|______" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}

void playerMove(char *spaces, char player){
    int number;
    do{
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(!number > 0 || !number < 8); //goes until valid input given
}

void computerMove(char *spaces, char computer){
    int number;
    srand(time(0));

    while(true){
        number = rand() % 9; //b/c its exclusive its 0 indexed already
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer){
    //checking if player won or not
    //For Row wins
    if(spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2]){
        spaces[0] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5]){
        spaces[3] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8]){
        spaces[6] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    //For Col wins
    else if(spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6]){
        spaces[0] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7]){
        spaces[1] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8]){
        spaces[2] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    //for Diagonal wins
    else if(spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8]){
        spaces[0] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }
    else if(spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6]){
        spaces[2] == player ? std::cout << "YOU WIN!" : std::cout << "YOU LOSE!";
    }else{
        return false; //nobody won yet
    }
    return true;
}
bool checkTie(char *spaces){
    
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "IT'S A TIE\n";
    return true;
}