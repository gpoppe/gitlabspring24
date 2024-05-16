#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>

// Function prototypes
void clearBuffer();
void ajlSpace();
void coinFlip();

int main(int argc, char *argv[])
{
    int choice = 0;
    char name[30] = "bob";

    srand(time(NULL));
    
    printf("Please enter your name: ");
    scanf("%s",name);

    printf("Hello %s welcome to the RPG Game!\n",name);

    while(choice != 99)
    {
        puts("You find yourself in a dark room and you are not sure how you got here.");
        puts("As you look around you see the room has 55 doors, each labeled with a number.");
        puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");
        puts("What door do you choose?");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            {
                puts("room1");
                break;
            }
            case 2:
            {
                puts("room2");
                break;
            }
            case 3:
            {
                puts("room3");
                break;
            }
            case 4:
            {
                puts("room4");
                break;
            }
            case 5:
            {
                puts("room5");
                break;
            }
            case 6:
            {
                puts("room6");
                break;
            }
            case 7:
            {
                puts("room7");
                break;
            }

            case 8:
             {
                puts("room8");
                int sub_choice = 0;
                char playerName[30];

                printf("Please enter your player name: ");
                scanf("%29s", playerName);

                printf("Welcome traveler, you are in the Swamp side of the kingdom.\n");
                puts("It is met with very ferocious monsters, wild animals, and worse of all, crocodiles.\n");

                printf("\nTraveler %s, in order to progress the story you must use the ENTER key during gameplay.\n", playerName);

                while(sub_choice != 7) {
                    puts("\nYou are in the swampy side of the kingdom\n");
                    puts(" [1]: go straight, [2]: stay put, [3]: go left, [4]: go back, [5]: go right, [6]: exit the game, [7]: secret ");
                    scanf("%d", &sub_choice);

                    switch(sub_choice) {
                        case 1: 
                            {
                            puts("\nYou went forward\n");
                            printf("You walk forward to the swamp.\n");
                            printf("While you were walking, you see a corpse of a dead bureaucrat.\n");
                            printf("You think: What a terrible night to be in a dungeon with a dead bureaucrat.\n");
                            printf("But you see a shiny object near the bureaucrat's hand.\n");
                            printf("You must flip a coin to see if what you saw was a relic or just a shiny coin.\n");

                            coinFlip();

                            printf("You did not pass the flip test.\n");
                            printf("You just had some fog in your eyes, it was just a regular shiny coin.\n");
                            break;
                        }
                        case 2:
                         {
                            puts("\nYou decided to stay put and wait for someone to come for you\n");
                            printf("You were so bored of waiting that you fell asleep.\n");
                            printf("You died in your sleep as monsters killed you.\n");
                            printf("What a terrible time to fall asleep. Try again, Traveler.\n");
                            break;
                        }
                        case 3: 
                            {
                            puts("\nYou went left of the swamp\n");
                            printf("There is a monster in your way. You hide in the bushes.\n");
                            printf("The monster was a giant behemoth. After it left, you went deeper into the swamp.\n");
                            printf("You found a cave with a floating door and exited to the next room.\n");
                            break;
                        }
                        case 4:
                         {
                            puts("\nYou walk back to the castle\n");
                            printf("You met a knight who accompanied you back to the swamp.\n");
                            printf("You both reached the next city and parted ways after a coin flip.\n");
                            coinFlip();
                            printf("Eventually you both said your goodbyes and you continued your journey.\n");
                            break;
                        }
                        case 5:
                         {
                            puts("\nYou went right side of the swamp\n");
                            printf("You encounter a dog, which turns out to be a mutated monster.\n");
                            printf("It attacks and kills you. Your journey is over.\n");
                            printf("Never judge a book by its cover, Traveler. Try again next time.\n");
                            break;
                        }
                        case 6: 
                            {
                            puts("\nYou quit the game\n");
                            printf("You decided to touch grass. See you when you are ready again, Traveler.\n");
                            break;
                        }
                        case 7: 
                            {
                            puts("\nError room teleport\n");
                            printf("You reached the error room, a place to teleport to any room you've visited before.\n");
                            printf("You decide to take the portal.\n");
                            break;
                        }
                        default: 
                            {
                            puts("Invalid choice.");
                            break;
                        }
                    }
                }
                break;
            }
            // Additional rooms 9 to 55
           case 9:
            {
                puts("room9");
                break;
            }
            case 10:
            {
                puts("room10");
                break;
            }
            case 11:
            {
                puts("room11");
                break;
            }
            case 12:
            {
                puts("room12");
                break;
            }
            case 13:
            {
                puts("room13");
                break;
            }
            case 14:
            {
                puts("room14");
                break;
            }
            case 15:
            {
                puts("room15");
                break;
            }
            case 16:
            {
                puts("room16");
                break;
            }
            case 17:
            {
                puts("room17");
                break;
            }
            case 18:
            {
                puts("room18");
                break;
            }
            case 19:
            {
                puts("room19");
                break;
            }
            case 20:
            {
                puts("room20");
                break;
            }
            case 21:
            {
                puts("room21");
                break;
            }
            case 22:
            {
                puts("room22");
                break;
            }
            case 23:
            {
                puts("room23");
                break;
            }
            case 24:
            {
                puts("room24");
                break;
            }
            case 25:
            {
                puts("room25");
                break;
            }
            case 26:
            {
                puts("room26");
                break;
            }
            case 27:
            {
                puts("room27");
                break;
            }
            case 28:
            {
                puts("room28");
                break;
            }

            case 29:
            {
                puts("room29");
                break;
            }
            case 30:
            {
                puts("room30");
                break;
            }
            case 31:
            {
                puts("room31");
                break;
            }
            case 32:
            {
                puts("room32");
                break;
            }

            case 33:
            {
                puts("room33");
                break;
            }
            case 34:
            {
                puts("room35");
                break;
            }

            case 36:
            {
                puts("room36");
                break;
            }

            case 37:
            {
                puts("room37");
                break;
            }

            case 38:
            {
                puts("room38");
                break;
            }
            case 39:
            {
                puts("room39");
                break;
            }
            case 40:
            {
                puts("room40");
                break;
            }
            case 41:
            {
                puts("room41");
                break;
            }
            case 42:
            {
                puts("room42");
                break;
            }
            case 43:
            {
                puts("room43");
                break;
            }
            case 44:
            {
                puts("room44");
                break;
            }
            case 45:
            {
                puts("room45");
                break;
            }
            case 46:
            {
                puts("room46");
                break;
            }
            case 47:
            {
                puts("room47");
                break;
            }
            case 48:
            {
                puts("room48");
                break;
            }
            case 49:
            {
                puts("room49");
                break;
            }
            case 50:
            {
                puts("room50");
                break;
            }
            case 51:
            {
                puts("room51");
                break;
            }
            case 52:
            {
                puts("room52");
                break;
            }
            case 53:
            {
                puts("room53");
                break;
            }
            case 54:
            {
                puts("room54");
                break;
            }
            case 55:
            {
                puts("room55");
                break;
            }
            case 99:
            {
                puts("You have escaped");
                break;
            }
            default:
            {
                puts("invalid choice");
            }
        }
    }
    puts("Game Over");
    return EXIT_SUCCESS;
}



void clearBuffer() 
{
    while (getchar() != '\n');
}

void ajlSpace() {
    while (getchar() != '\n');
}

void coinFlip() 
{
    int call;
    printf("You know the rules and so do I: call heads {1} or tails {2}: ");
    scanf("%d", &call);
    clearBuffer();

    if (call != 1 && call != 2) 
    {
        printf("Invalid input. The game will call instead.\n");
        call = (rand() % 2) + 1;
    }

    int coin = (rand() % 2) + 1;

    if (coin == call)
     {
        printf("You guessed correctly! You get a shiny relic.\n");
    }
     else 
    {
        printf("You guessed wrong! you get a coin.\n");
    }
}