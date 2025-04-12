#include <iostream>
#include <iomanip>
#include <cstdlib>
#define H 10
#define W 10

void clearScreen(){
#ifdef _WIN32
    system("cls");//for windows
#else
    system("clear");//mac or linux
#endif
}


void setGold(char enemy[H][W]){
    srand(time(NULL));
    for(int y=0;y<H;y++)
        for(int x =0;x<W;x++){
            enemy[y][x] = (rand()%2);
            }
}


void printTable(int score, int moves, char player[H][W]){
        clearScreen();
        std::cout<<"-------------------------------\n";
        for(int y=0;y<H;y++){
            std::cout<<std::setw(3);
            for(int x=0;x<W;x++){
                std::cout<<player[y][x]<<"  ";
            }
            std::cout<<"\n\n";
        }
        std::cout<<"--------------------------------\n";
        std::cout<<"Score : "<<score<<"    | Moves Left : "<<moves;
        std::cout<<"\n--------------------------------\n";
}


int main(){

//initailizing all required arrays and valiables
    int score=0,moves=10;
    char enemy[H][W];//table to check
    setGold(enemy);//adding gold
    char player[H][W];//table to print
    int x,y;



//filling the array with dots 
    for(y=0;y<H;y++){
        for(int x=0;x<W;x++){
            player[y][x]='.';
        }
    }

//starting game

    std::cout<<"============|GOLD RUSH|============\n";
    std::cout<<"There is a table of 10 colums and 5 rows numberd as\n";
    std::cout<<"0  1  2  3  4  5  6  7  8  9\n\n1\n\n2\n\n3\n\n4\n";
    std::cout<<"To open a box enter the column and row number separated by space\n";
    std::cout<<"You have 10 moves to find your gold\nThat's it go and collect your GOlD!!!";
    std::cout<<"\nPress ENTER to continue...\n";
    std::cin.get();



    while(true){
        printTable(score,moves,player);//calling the table to print
                                       
        //will execute when moves finishes
        if(moves == 0){
           //printing compliment according to score
           
            std::cout<<"You found "<<score/10<< " golds...\n";
            if(score >= 80)
                std::cout<<"Superd...\n";
            else if(score >= 60 )
                std::cout<<"Not bad\n";
            else if(score >= 30)
                std::cout<<"Need practice... Noob...\n";
            else
                std::cout<<"Better Luck Next time...\n";
            break;
            //ending the loop
        }

        std::cout<<"Enter Coordinates : ";
        std::cin>>x>>y;
	if(x < 0 || x >= W || y < 0 || y >= H) {
    std::cout << "Invalid coordinates!\n";
    continue;
}


        //cheking if the enterd coordinates have one in checking table

        if(enemy[y][x] == 1){
            player[y][x]='+';
            score += 10;
            moves--;
        }
        else
        {
            player[y][x]='-';
            moves--;

        }
    }
}

