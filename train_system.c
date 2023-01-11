#include <stdio.h>
#include "library/utils.c"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

// 1 = Central
// 2 = Gurando
// 3 = Nagareru
// 4 = Shikabuto
// 5 = Hondaka
// 6 = Neo Osaka

int main(void) {
    int Current_Station, Button_1, Button_2, Next_Station, User_Directions;

    Current_Station = 1;

    InstructionsMenu();

    printf("\n");
    printf("\n");
    printf("------------ The Not so Bullet Speed Bullet Train -----------\n");
    printf("--------------------- Andrew Tanuwijaya ---------------------\n");
    printf("\n");
    printf("\n");

    // Start code so train keeps running.

    start:
        // Clear the terminal.
        system("cls");

        // Print the Station Map.
        StationPrinter(Current_Station);

        printf("Enter your button presses: ");
        scanf("%d %d", &Button_1, &Button_2);

        if (Current_Station == 1){
            Next_Station = EkiCentral(Button_1, Button_2);
            Current_Station = Next_Station;
        }

        else if (Current_Station == 2){
            Next_Station = EkiGurando(Button_1, Button_2);
            Current_Station = Next_Station;
        }

        else if (Current_Station == 3){
            Next_Station = EkiNagareru(Button_1, Button_2);
            Current_Station = Next_Station;
        }

        else if (Current_Station == 4){
            Next_Station = EkiShikabuto(Button_1, Button_2);
            Current_Station = Next_Station;
        }

        else if (Current_Station == 5){
            Next_Station = EkiHondaka(Button_1, Button_2);
            Current_Station = Next_Station;
        }

        else if (Current_Station == 6){
            Next_Station = EkiNeoOsaka(Button_1, Button_2);
            Current_Station = Next_Station;
        }

        goto start;

    return 0;

    }

// Functions For Each Station
int EkiCentral(int Button_1, int Button_2){
    int Next_Station;

    if (Button_1 == 0 && Button_2 == 0 || Button_1 == 1 && Button_2 == 1){
        Next_Station = 1;
    }
    else if (Button_1 == 0 && Button_2 == 1){
        Next_Station = 3;
    }
    else if (Button_1 == 1 && Button_2 == 0){
        Next_Station = 2;
    }
    else {
        exit(0);
    }

    return Next_Station;
}

int EkiGurando(int Button_1, int Button_2){
    int Next_Station;

    if (Button_1 == 0 && Button_2 == 0 || Button_1 == 1 && Button_2 == 1){
        Next_Station = 2;
    }
    else if (Button_1 == 0 && Button_2 == 1){
        Next_Station = 6;
    }
    else if (Button_1 == 1 && Button_2 == 0){
        Next_Station = 4;
    }
    else {
        Next_Station = 2;
    }

    return Next_Station;
}

int EkiNagareru(Button_1, Button_2){
    int Next_Station;

    if (Button_1 == 0 && Button_2 == 0 || Button_1 == 1 && Button_2 == 1){
        Next_Station = 3;
    }
    else if (Button_1 == 0 && Button_2 == 1){
        Next_Station = 5;
    }
    else if (Button_1 == 1 && Button_2 == 0){
        Next_Station = 6;
    }
    else {
        exit(0);
    }

    return Next_Station;
}

int EkiShikabuto(Button_1, Button_2){
    int Next_Station;

    if (Button_1 == 0 && Button_2 == 0 || Button_1 == 1 && Button_2 == 1){
        Next_Station = 4;
    }
    else if (Button_1 == 0 && Button_2 == 1){
        Next_Station = 2;
    }
    else if (Button_1 == 1 && Button_2 == 0){
        Next_Station = 6;
    }
    else {
        exit(0);
    }

    return Next_Station;
}

int EkiHondaka(Button_1, Button_2){
    int Next_Station;

    if (Button_1 == 0 && Button_2 == 0 || Button_1 == 1 && Button_2 == 1){
        Next_Station = 5;
    }
    else if (Button_1 == 0 && Button_2 == 1){
        Next_Station = 3;
    }
    else if (Button_1 == 1 && Button_2 == 0){
        Next_Station = 6;
    }
    else {
        exit(0);
    }

    return Next_Station;
}

int EkiNeoOsaka(Button_1, Button_2){
    int Next_Station;

    if (Button_1 == 0 && Button_2 == 0 || Button_1 == 1 && Button_2 == 1){
        Next_Station = 1;
    }
    else if (Button_1 == 0 && Button_2 == 1){
        Next_Station = 2;
    }
    else if (Button_1 == 1 && Button_2 == 0){
        Next_Station = 3;
    }
    else{
        exit(0);
    }

    return Next_Station;
}


int StationPrinter(Current_Station){

    // Title
    printf("------------ The Not so Bullet Speed Bullet Train -----------\n");
    printf("--------------------- Andrew Tanuwijaya ---------------------\n");
    printf("\n");
    printf("\n");

    // Print the Maps
    if (Current_Station == 1){
        printf("              You are currently at Central-eki               \n");
        printf("-------------------------------------------------------------\n");
        printf("|                                                           |\n");
        printf("|                     ==  Central ==                        |\n");
        printf("|                   ===     [O]    ===                      |\n");
        printf("|                 ===       ===      ===                    |\n");
        printf("|               ===         ===        ===                  |\n");
        printf("|   == Gurando ==           ===          == Nagareru ==     |\n");
        printf("|   ==   [ ]                ===                [ ]   ==     |\n");
        printf("|   ==    ==                ===                ==    ==     |\n");
        printf("|   ==    ============      ===        ==========    ==     |\n");
        printf("|   ==              ===     ===       ===            ==     |\n");
        printf("| Shikabuto          ===    ===     ===          Hondaka    |\n");
        printf("|    [ ]              ===   ===    ===             [ ]      |\n");
        printf("|   ==                 ===  ===  ===                 ==     |\n");
        printf("|   ====================  Neo Osaka ===================     |\n");
        printf("|                           [ ]                             |\n");
        printf("|                                                           |\n");
        printf("-------------------------------------------------------------\n");
        printf("\n");
        return 0;}
    else if (Current_Station == 2){
        printf("              You are currently at Gurando-eki               \n");
        printf("-------------------------------------------------------------\n");
        printf("|                                                           |\n");
        printf("|                     ==  Central ==                        |\n");
        printf("|                   ===     [ ]    ===                      |\n");
        printf("|                 ===       ===      ===                    |\n");
        printf("|               ===         ===        ===                  |\n");
        printf("|   == Gurando ==           ===          == Nagareru ==     |\n");
        printf("|   ==   [O]                ===                [ ]   ==     |\n");
        printf("|   ==    ==                ===                ==    ==     |\n");
        printf("|   ==    ============      ===        ==========    ==     |\n");
        printf("|   ==              ===     ===       ===            ==     |\n");
        printf("| Shikabuto          ===    ===     ===          Hondaka    |\n");
        printf("|    [ ]              ===   ===    ===             [ ]      |\n");
        printf("|   ==                 ===  ===  ===                 ==     |\n");
        printf("|   ====================  Neo Osaka ===================     |\n");
        printf("|                           [ ]                             |\n");
        printf("|                                                           |\n");
        printf("-------------------------------------------------------------\n");
        printf("\n");
        return 0;}
    else if (Current_Station == 3){
        printf("               You are currently at Nagareru-eki             \n");
        printf("-------------------------------------------------------------\n");
        printf("|                                                           |\n");
        printf("|                     ==  Central ==                        |\n");
        printf("|                   ===     [ ]    ===                      |\n");
        printf("|                 ===       ===      ===                    |\n");
        printf("|               ===         ===        ===                  |\n");
        printf("|   == Gurando ==           ===          == Nagareru ==     |\n");
        printf("|   ==   [ ]                ===                [O]   ==     |\n");
        printf("|   ==    ==                ===                ==    ==     |\n");
        printf("|   ==    ============      ===        ==========    ==     |\n");
        printf("|   ==              ===     ===       ===            ==     |\n");
        printf("| Shikabuto          ===    ===     ===          Hondaka    |\n");
        printf("|    [ ]              ===   ===    ===             [ ]      |\n");
        printf("|   ==                 ===  ===  ===                 ==     |\n");
        printf("|   ====================  Neo Osaka ===================     |\n");
        printf("|                           [ ]                             |\n");
        printf("|                                                           |\n");
        printf("-------------------------------------------------------------\n");
        printf("\n");
        return 0;}
    else if (Current_Station == 4){
        printf("               You are currently at Shikabuto-eki            \n");
        printf("-------------------------------------------------------------\n");
        printf("|                                                           |\n");
        printf("|                     ==  Central ==                        |\n");
        printf("|                   ===     [ ]    ===                      |\n");
        printf("|                 ===       ===      ===                    |\n");
        printf("|               ===         ===        ===                  |\n");
        printf("|   == Gurando ==           ===          == Nagareru ==     |\n");
        printf("|   ==   [ ]                ===                [ ]   ==     |\n");
        printf("|   ==    ==                ===                ==    ==     |\n");
        printf("|   ==    ============      ===        ==========    ==     |\n");
        printf("|   ==              ===     ===       ===            ==     |\n");
        printf("| Shikabuto          ===    ===     ===          Hondaka    |\n");
        printf("|    [O]              ===   ===    ===             [ ]      |\n");
        printf("|   ==                 ===  ===  ===                 ==     |\n");
        printf("|   ====================  Neo Osaka ===================     |\n");
        printf("|                           [ ]                             |\n");
        printf("|                                                           |\n");
        printf("-------------------------------------------------------------\n");
        printf("\n");
        return 0;}
    else if (Current_Station == 5){
        printf("              You are currently at Hondaka-eki               \n");
        printf("-------------------------------------------------------------\n");
        printf("|                                                           |\n");
        printf("|                     ==  Central ==                        |\n");
        printf("|                   ===     [ ]    ===                      |\n");
        printf("|                 ===       ===      ===                    |\n");
        printf("|               ===         ===        ===                  |\n");
        printf("|   == Gurando ==           ===          == Nagareru ==     |\n");
        printf("|   ==   [ ]                ===                [ ]   ==     |\n");
        printf("|   ==    ==                ===                ==    ==     |\n");
        printf("|   ==    ============      ===        ==========    ==     |\n");
        printf("|   ==              ===     ===       ===            ==     |\n");
        printf("| Shikabuto          ===    ===     ===          Hondaka    |\n");
        printf("|    [ ]              ===   ===    ===             [O]      |\n");
        printf("|   ==                 ===  ===  ===                 ==     |\n");
        printf("|   ====================  Neo Osaka ===================     |\n");
        printf("|                           [ ]                             |\n");
        printf("|                                                           |\n");
        printf("-------------------------------------------------------------\n");
        printf("\n");
        return 0;}
    else if (Current_Station == 6){
        printf("              You are currently at Neo Osaka-eki             \n");
        printf("-------------------------------------------------------------\n");
        printf("|                                                           |\n");
        printf("|                     ==  Central ==                        |\n");
        printf("|                   ===     [ ]    ===                      |\n");
        printf("|                 ===       ===      ===                    |\n");
        printf("|               ===         ===        ===                  |\n");
        printf("|   == Gurando ==           ===          == Nagareru ==     |\n");
        printf("|   ==   [ ]                ===                [ ]   ==     |\n");
        printf("|   ==    ==                ===                ==    ==     |\n");
        printf("|   ==    ============      ===        ==========    ==     |\n");
        printf("|   ==              ===     ===       ===            ==     |\n");
        printf("| Shikabuto          ===    ===     ===          Hondaka    |\n");
        printf("|    [ ]              ===   ===    ===             [ ]      |\n");
        printf("|   ==                 ===  ===  ===                 ==     |\n");
        printf("|   ====================  Neo Osaka ===================     |\n");
        printf("|                           [O]                             |\n");
        printf("|                                                           |\n");
        printf("-------------------------------------------------------------\n");
        printf("\n");
        return 0;}
    else{
        printf("            You are in the void. How did we get here?          ");
        printf("-------------------------------------------------------------\n");
        printf("|   where are we...?                                        |\n");
        printf("|                     ==  C  t  l ==                        |\n");
        printf("|                   ===     [ ]    ===                      |\n");
        printf("|                 ===       ===      ===                    |\n");
        printf("|               ===         ===        ===                  |\n");
        printf("|   ==         ==           ===          == N     ru ==     |\n");
        printf("|   ==   [ ]                ===                [ ]   ==     |\n");
        printf("|   ==    ==                ===                ==    ==     |\n");
        printf("|   ==    ============      ===        ==========    ==     |\n");
        printf("|   ==              ===     ===       ===            ==     |\n");
        printf("| Shi     o          ===    ===     ===                 a   |\n");
        printf("|    [ ]              ===   ===    ===             [ ]      |\n");
        printf("|   ==                 ===  ===  ===                 ==     |\n");
        printf("|   ====================  N o       ===================     |\n");
        printf("|                           [ ]                             |\n");
        printf("|   the void?                   i don't... know this place. |\n");
        printf("-------------------------------------------------------------\n");
        printf("\n");
        return 0;
        exit(0);}
}

void InstructionsMenu(){

    system("cls");

    printf("To control the train, you have to use two buttons.\n");
    printf("To press a button, press '1' when prompted.\n");
    printf("To not press a button, press '0' when prompted.\n");
    printf("\n");
    printf("\n");
    // To exit the screen
    printf("Press Enter to continue...");
    getchar();
    system("cls");

}

