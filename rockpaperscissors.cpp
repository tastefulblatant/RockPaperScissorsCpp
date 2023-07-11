#include <iostream>
#include <ctime>


char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);


int main()
{    
    
    char player;
    char computer;

    player = getuserchoice();
    std::cout << "Your choice: ";
    showchoice(player);

    computer = getcomputerchoice();
    std::cout << "Computer's choice: ";
    showchoice(computer);


    choosewinner(player, computer);

    return 0;
}


char getuserchoice(){

    char player;
    do{
        std::cout << "************************\n";
        std::cout << "Rock-Paper-Scissors Game\n";
        std::cout << "************************\n";
        std::cout << "'r' = Rock\n'p' = Paper\n's' = Scissors\n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;
}
char getcomputerchoice(){

        srand(time(0));

    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';

    }
    return 0;
}
void showchoice(char choice){
    switch(choice){
        case 'r': 
           std::cout << "Rock\n";
           break;
        case 'p':   
            std::cout << "Paper\n";
            break;
        case 's': 
            std::cout << "Scissors\n";
            break;
    }
}
void choosewinner(char player, char computer){

    switch(player){
        case 'r':   if(computer == 'r'){
            std::cout << "It's a tie!\n";
        }
                    else if (computer == 's'){
                        std::cout << "Player win!\n";
                    }
                    else if (computer == 'p'){
                        std::cout << "Computer win!\n";
                    }
                    break;

        case 'p':   if(computer == 'p'){
            std::cout << "It's a tie!\n";
        }
                    else if (computer == 'p'){
                        std::cout << "Player win!\n";
                    }
                    else if (computer == 's'){
                        std::cout << "Computer win!\n";
                    }
                    break;
            
        case 's':   if(computer == 's'){
            std::cout << "It's a tie!\n";
        }
                    else if (computer == 'p'){
                        std::cout << "Player win!\n";
                    }
                    else if (computer == 'r'){
                        std::cout << "Computer win!\n";
                    }
                    break;
    }

}   
