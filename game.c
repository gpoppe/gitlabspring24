//contributors

//Dom I.

//Elias Dawarpana

//Patrick Polanco

//Joshua F.


#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>

void coinFlip();
void JanKenPon();
void drawStraws();
void numberGuess();
void blackJack();
int cardPull();
void rollTheDice_Highest();
void rollTheDice_Race();

void FinalArea(int level);
bool trap_d10();

void exploreRoom(int roomNo);
void eyeGame();

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
				break;
			}
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
				int room = 1;
        			int win = 0;
        			char password[5] = "AVOID";
        			char guess[6];
        			int pick = 0;
        			int maxChoices[6] = {6, 3, 5, 3, 4, 2};
        			puts("You open the door. A rat scurries past as the door slams shut and locks behind you. You get this sinking feeling that you want to brush up on your abstract puzzle skills. Otherwise, this was a very, very poor idea.");
        			while(win == 0)
          			{
            				exploreRoom(room);
            				scanf("%d",&pick);
            				while (pick < 1 || pick > maxChoices[room-1])
              				{
                				printf("NOT A VALID CHOICE. PLEASE CHOOSE AGAIN.\n");
                				exploreRoom(room);
                				scanf("%d",&pick);
              				}
            				if (room == 1)
            				{
              					if (pick == 1)
              					{
                					room = 2;
              					}
              					else if (pick == 2)
              					{
                					room = 5;
              					}
              					else if (pick == 3)
              					{
                					room = 4;
              					}
              					else if (pick == 4)
              					{
                					room = 3;
              					}
              					else if (pick == 5)
              					{
                					puts("\nUnder the cover is an even weirder painting. It appears to depict Ouroboros surrounding a minotaur in the center of the image. The painting is unfnished, but it is marked in the bottom left corner with 'M;13'. You think it's best to not touch the painting.\n");
              					}
						else if (pick == 6)
						{
							puts("\nYou've paced these few rooms for a while now and cannot make heads or tails of this puzzle. You bang on the door to try and force it back open, deciding to give up on finding anything of value in this cursed place. After 74 hours and 46 minutes, a rat in a jester's cap slowly waltz past. They look up at you, shake their head, and scurry under the door. THe door re-opens. You leave more hollow than when you entered.\n");
							win = 46;
							break;
						}
            				}
          				else if (room == 2)
              				{
                				if (pick == 1)
                				{
                  					room = 1;
                				}
                				else if (pick == 2)
                				{
                  					room = 3;
                				}
                				else if (pick == 3)
                				{
                  					puts("\nYou look inside the pots and find something odd. The blue ones are filled with poker chips and playing cards. The white ones are filled with various sports balls. You think this might mean something, or it might not. Your inner thoughts don't seem very helpful right now.\n");
                				}
            				}
            				else if (room == 3)
              				{
                				if (pick == 1)
                				{
                  					room = 5;
                				}
                				else if (pick == 2)
                				{
                  					room = 1;
                				}
                				else if (pick == 3)
                				{
                  					room = 2;
                				}
                				else if (pick == 4)
                				{
                  					puts("\nIt reads as follows: 'Stellae sint dux vester'. Also from this distance you notice the statue's staff has tow snakes crossing paths on it. You feel like someone's watching you.\n");
                				}
                				else if (pick == 5)
                				{
                  					puts("\nPulling the chain flips off the light, dipping the room in darkness. You notice a bunch of tiny gemstones scattered across the room start to glow. You think you can hear a faint whispering in the distance. You turn the light back on for your own saftey.\n");
                				}
            				}
            				else if (room == 4)
              				{
                				if (pick == 1)
                				{
                  					room = 2;
                				}
                				else if (pick == 2)
                				{
                  					puts("The scroll reads as follows:\n'Find the point drawn in the lines\nStuck above space, living beside the sea\nIt marks no spots unless you have two\n1105, 23, 5, 86, 22\nA single key is all you need to make it appear.'\n");
                				}
                				else if (pick == 3)
                				{
                  					puts("You try to play the record player. Most of the records are covered in glue, causing them to not play. However, two records seem to work. One is a record of 'Goodnight my Beautiful' by Russ Morgan. The other is a complete record of 'Peer Gynt, Op. 23' by Edvard Grieg. You listen to both. You feel a little better.");
                				}
            				}
            				else if (room == 5)
              				{
                				if (pick == 1)
                				{
                  					room = 4;
                				}
               	 				else if (pick == 2)
                				{
                  					room = 1;
                				}
                				else if (pick == 3)
                				{
                  					room = 6;
                				}
                				else if (pick == 4)
                				{
                  					puts("ENTER THE PASSWORD:");
                  					scanf("%s",guess);
                  					if (guess[0] == password[0] && guess[1] == password[1] && guess[2] == password[2] && guess[3] == password[3] && guess[4] == password[4])
                  					{
                    						win = (rand() % 5) + 1;
                    						puts("CORRECT!");
                  					}
                  					else
                  					{
                    						puts("WRONG WRONG WRONG WRONG WRONG WRONG! SO VERY WRONG!");
							}
                				}
            				}
            				else if (room == 6)
              				{
                				if (pick == 1)
                				{
                  					room = 5;
                				}
                				else if (pick == 2)
                				{
                  					eyeGame();
                				}
              				}
        			}

				if(win != 46 && win > 0)
				{
        				puts("The great vault swing open wide, revealing your prize: ");
        				switch(win)
          				{
            					case 1:
            					{
              					puts("The Jewel of Masquerade!");
              					break;
            					}
            					case 2:
            					{
              					puts("The Golden Eye of Pob!");
              					break;
            					}
            					case 3:
            					{
              					puts("The Casque of the Zodiac!");
              					break;
            					}
            					case 4:
            					{
              					puts("The Last Glazed Maggufins!");
              					break;
            					}
            					case 5:
            					{
              					puts("A big bowl of rigatoni with parmesan cheese!");
              					break;
            					}
          				}
	
        				puts("You go to grab your prize, but at the last second a rat wearing a jesters cap runs out from behind you and grabs the treasure. You give chase. The pesky rodent runs all the way back to the parlor room and you follow after. It scurries under the entrance door, breaking the lock as it does so. It seems like that rat ran off into one of the other 54 rooms with your treasure. You need to pick a new door to try and find it...You Escaped?\n");  
				}
				break;
			}
			case 13:
			{
				printf("Welcome to room 13!\n");
				printf("The room of The Evil Future...\n");
				printf("Dear Player, the goal of this room is to make it back to the present!\n");
				printf("Select a road to follow and make your way back to the present...\nRoad 1: Shadowed Alley\nRoad 2: Desolation Boulevard\nRoad 3: Abyssal Passage\nRoad 4: Echoing Ruins Route\nRoad 5: Darkened Pathway\nPlease type in the number of the Road:");
				int x = 0;
				int w = 0;
				srand(time(NULL));
				int rNum = rand() % 10;
				int levels[] = 
				{
					1, 2, 3, 4, 5, 6, 7, 8, 9, 10
				};
				scanf("%d", &x);
				while (x != 4)
				{
					if (x == 1)
					{
						printf("\nYou walked down the Shadowed Alley and came across a dysfunctional robot that warps you to a jail cell...\nPlease Try again!\n\n");
					}
					else if (x == 2)
					{
						printf("\nYou reached the Desolation Boulevard and see a hologram of a pile of money, as you walk to grab it a robot grabs you and arrests you for illegal time travel...\nPlease try again!\n\n");
					}
					else if (x == 3)
					{
						printf("\nYou reached the Abyssal Passage, you come across an AI powered time machine, it asks you to place your fingerprint in the reader, it warps you back in time to the start area...\nPlease try again!\n\n");
					}
					else if (x == 5)
					{
						printf("\nYou reached the Dark Pathway, an area with no robot, as you make your way through the pathway you see a few aliens building something and they chase you away back to the starting area.\nPlease try again!\n\n");
					}
					printf("\nYou are back to the starting area, Select a road to follow and make your way back to the present...\nRoad 1: Shadowed Alley\nRoad 2: Desolation Boulevard\nRoad 3: Abyssal Passage\nRoad 4Echoing Ruins Route\nRoad 5: Darkened Pathway\nPlease type in the number of the Road:");
					scanf("%d", &x);
				}
				FinalArea(levels[rNum]);
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
                bool survived = trap_d10();
                if(!survived)
                {
                    puts("You Died.");
                    return EXIT_SUCCESS;

                }
                else
                {
                    puts("You escaped the trap unharmed.");
                }

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
				srand(time(NULL));
				int game = 0;
				
				printf("You and your party meet a silent apparition, and through a voice in the room, gestures to play a game.\n");
				printf("Which game do you play to beat the figure? [Type the number of the game you want to play]\n");
				printf("-------------------\n");
				printf("{1} Coin Flip\n");
				printf("{2} Rock Paper Scissors\n");
				printf("{3} Draw straws\n");
				printf("{4} Guess the number\n");
				printf("{5} Black Jack\n");
				printf("{6} Roll the dice\n");
				
				scanf("%d", &game);
				
				while (game < 1 || game > 7) {
					
					if (game < 1 || game > 7){
						printf("Game number out of range. Enter another number.\n");
						scanf("%d", &game);
					}
					
				}

				printf("\n");

				if (game == 1) {
					coinFlip();
				}
				else if (game == 2) {
					JanKenPon();
				}
				else if (game == 3) {
					drawStraws();
				}
				else if (game == 4){
					numberGuess();
				}
				else if (game == 5){
					blackJack();
				}
				else if (game == 6){
					int diceGame = 0;
					printf("Which type of dice game do you wish to play?\n");
					printf("Enter {1} for 'Highest Number'\n");
					printf("Enter a different one for 'Reach the Number'\n");
					scanf("%d", &diceGame);

					if (diceGame == 1) {
						rollTheDice_Highest();
					}
					else {
						rollTheDice_Race();
					}
				}
				printf("\n");
				printf("The appartion begins laughing, and you brace fearing what trick is next. \n");
				printf("The laughing turns out to be a ruse of amusement; a sound of delight. \n");
				printf("It waves, thanking you for taking the time out of your way to play a game with it. \n");
				printf("As you leave, it whines, and begins to follow you out of the room. \n");
				printf("Your party is now plus one! Who knows what other fateful encounters await! \n");
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

void FinalArea(int level)
{
   printf("\nYou have made it through the Echoing Ruins Route, you come across a giant Robot Guard Monster that is guarding a fully functioning time machine, as you go to approach it, the robot awakens and says: INTRUDER!!!\n\nYou are given a holographic weapon menu that will spit out a ray gun weapon...\n");
   printf("The screen spins from a few levels and then reads: 'You have received the: Level %d ray gun!'\n", level);
   printf("As you grab the weapon the giant Robot Guard tries to attack you and you use The level %d ray gun to destroy the robot!\n", level);
   printf("You make your way to the time machine, panting heavily and set the date to the day you were in front of all the rooms...\nYou made it back!\n\nROOM CLEAR!\n\n");
   return;
}




void coinFlip() {
  int call = 0;

  printf("You know how this one goes: call heads{1} or tails{2}: ");
  scanf("%d", &call);
    
  if (call == 1 || call == 2) {
    printf("The coin flips!\n");
    
  }
  else {
    printf("You call an invalid number, so your opponent calls instead!\n");
    call = (rand() % 2) + 1;
    
    if (call == 1){
      printf("Your opponent calls tails!\n");
    }
    else {
      printf("Your opponent calls heads!\n");
    }
  }

    int coin = (rand() % 2) + 1;

  if (coin == 1 && call == 1) {
    printf("It's heads! Right on the dime!\n");
  }
  else if (coin == 1 && call == 2) {
    printf("It's heads. Maybe call better shots for a change.\n");
  }
  else if (coin == 2 && call == 1) {
    printf("It's tails. Can't make cents out of it? Too bad!\n");
  }
  else if (coin == 2 && call == 2) {
    printf("It's tails! You're cool as mint!\n");
  }
  
}
void JanKenPon() {
  int rps1 = 0;
  
  printf("Roshambeau! Call Rock{1} Paper{2} or Scissors{3}: \n");
  scanf("%d", &rps1);

  while (rps1 < 1 || rps1 > 3) {
    printf("You can't call 'Laser Gun.' Pick a valid option. \n");
    scanf("%d", &rps1);
  }

  int rps2 = (rand() % 3) + 1;

  if (rps1 == 1) {
    printf("You throw out Rock, ");

    if (rps2 == 1) {
      printf("but so does your opponent! Maybe make it up with a Fist-Bump? \n");
    }
    if (rps2 == 2) {
      printf("but your opponent throws Paper! It's got you covered! \n");
    }
    if (rps2 == 3) {
      printf("and destroy your opponent's Scissors! What a smashing good time! \n");
    }
  }
  else if (rps1 == 2) {
    printf("You throw out Paper, ");

    if (rps2 == 1) {
      printf("and cover your opponent's rock! Your foe really took that one for granite! \n");
    }
    if (rps2 == 2) {
      printf("but so does your opponent! No one's write, so it's a draw! \n");
    }
    if (rps2 == 3) {
      printf("but it's cut by Scissors! How tear-able! \n");
    }
  }
  else if (rps1 == 3) {
    printf("You throw out Scissors, ");

    if (rps2 == 1) {
      printf("but it's crushed by a Rock! Not a very sharp idea. \n");
    }
    if (rps2 == 2) {
      printf("and you slash your opponent's Paper! Now you're a cut above! \n");
    }
    if (rps2 == 3) {
      printf("but so does your opponent! Lesson learned: don't run with Scissors. \n");
    }
    
  }
  
  if (rps1 == rps2) {
    printf("Try again since it's a tie? \n");
    printf("[Enter {0} to try again] \n");
    printf("[Type any other number to forfit] \n");
    scanf("%d", &rps1);

    if (rps1 == 0) {
      printf("\n");
      JanKenPon();
    }
  }
  
}
void drawStraws() {
  
  int strawSet = 0;
  int youStraw = 0;
  int foeStraw = 0;

  printf("Your traveling companion friend comes out acting as a referee, and takes out 3 straws.\n");
  printf("From left to right there are straws labled 1-3.\n");
  printf("Each straw has a unique length. Pick the longest straw to win.\n");

  printf("Pick a numbered straw from 1-3: ");
  scanf("%d", &youStraw);
  printf("\n");

  while (youStraw < 1 || youStraw > 3) {
    printf("That straw is in Nowhere Land, pick a valid straw: ");
    scanf("%d", &youStraw);
    printf("\n");
  }

  foeStraw = (rand() % 2) + 1;

  while (youStraw == foeStraw) {
    foeStraw = (rand() % 2) + 1;
  }

  printf("|You: %d| |Foe: %d|\n", youStraw, foeStraw);

  youStraw -= 1;
  foeStraw -= 1;

  printf("The lengths of the straws are now revealed: ");

  strawSet = (rand() % 6) + 1;
  
  int straws[] = {0, 0, 0};
  
  if (strawSet == 1) {
    straws[0] = 1;
    straws[1] = 2;
    straws[2] = 3;
  }
  else if (strawSet == 2) {
    straws[0] = 2;
    straws[1] = 1;
    straws[2] = 3;
  }
  else if (strawSet == 3) {
    straws[0] = 2;
    straws[1] = 3;
    straws[2] = 1;
  }
  else if (strawSet == 4) {
    straws[0] = 1;
    straws[1] = 3;
    straws[2] = 2;
  }
  else if (strawSet == 5) {
    straws[0] = 3;
    straws[1] = 1;
    straws[2] = 2;
  }
  else {
    straws[0] = 3;
    straws[1] = 2;
    straws[2] = 1;
  }
  
  printf("[%d] [%d] [%d]", straws[0], straws[1], straws[2]);
  printf("\n");

  int s1 = straws[youStraw];
  int s2 = straws[foeStraw];

  printf("|You: %d| |Foe: %d|\n", s1, s2);
  printf("\n");

  if (s1 > s2) {
    printf("You got the longer straw! What victory drink would work best for it?\n");
  }
  else {
    printf("The last straw, you've gotten. Disappointed, you are?\n");
  }
  
}
void numberGuess() {
  int targetNo = rand() % 10;
  int yourGuess = -1;
  int foeGuess = -1;
  
  printf("Your traveling companion friend comes out acting as a referee and picks a number from 0-9. Closest number wins. \n");
  printf("Write your number down, your opponent will do the same: ");
  scanf("%d", &yourGuess);

  do {
    foeGuess = rand() % 10;
  } while (foeGuess == yourGuess);

  printf("The numbers are then revealed: ");
  printf("|You = %d| |Foe = %d| |Target = %d|\n", yourGuess, foeGuess, targetNo);

  if (abs(yourGuess - targetNo) < abs(foeGuess - targetNo)) {
    printf("Your guess is ");

    if (yourGuess == targetNo) {
      printf("the same as the target! Spot on! \n");
    }
    else {
      printf("closer! Nice forsight! \n");
    }
    
  }
  else if (abs(yourGuess - targetNo) > abs(foeGuess - targetNo)) {
    printf("Your opponent");
    
    if (foeGuess == targetNo) {
      printf(" guessed the number! That's gotta hurt! \n");
    }
    else {
      printf("'s guess is closer. That sucks. \n");
    }
    
  }
  else {
    printf("Both guesses are equally close, the game restarts. \n");
    printf("\n");
    numberGuess();
  }
  
}
void blackJack() {

  int youTotal = 0;
  int foeTotal = 0;
  bool youStop = false;
  bool foeStop = false;
  
  printf("You will first be given two cards dealt in front of you. \n");
  printf("Through a series of Yes or No, the first one to 21 wins. \n");
  printf("But DO NOT go over 21, or it's a bust. \n");
  printf("Aces can be 1 or 11, and cannot appear in the starting hand.\n");
  printf("\n");

  printf("Your first two cards is are: ");

  for (int i = 0; i < 2; i++) {
    youTotal += cardPull(0);
    printf(" ");
  }

  printf("= %d\n", youTotal);
  
  printf("Your foe's first two cards is are: ");

  for (int i = 0; i < 2; i++) {
    foeTotal += cardPull(0);
    printf(" ");
  }

  printf("= %d\n", foeTotal);
  
  int hit = 0;

  while ((youTotal < 21 && foeTotal < 21)) {

    if (youStop == false) {
      printf("\nDraw another card? Type '1' for yes, or another number to stop: ");
      scanf("%d", &hit);
    }
    
    if (hit == 1) {
      printf("You draw a ");
      youTotal += cardPull(1);
      printf(" for a total of %d", youTotal);
      printf("\n");
    }
    else {
      printf("You stop at %d", youTotal);
      printf("\n");
      youStop = true;
    }
    
    if (foeTotal < 17 && foeStop == false) {
      printf("Your foe draws a ");
      foeTotal += cardPull(0);
      printf(" for a total of %d", foeTotal);
      printf("\n");
    }
    else {
      printf("Your foe stops at %d", foeTotal);
      printf("\n");
      foeStop = true;
    }

    if (youStop == true && foeStop == true) {
      break;
    }
    
  }

  printf("\n");

  if (youTotal > 21 && foeTotal > 21) {
    printf("Double bust! Shameful.\n");
  }
  else if (foeTotal > 21) {
    printf("You know who to call, your foe's been busted!\n");
  }
  else if (youTotal > 21) {
    printf("You bust! Your foe triumphs!\n");
  }
  else {
    if (abs(21 - youTotal) < abs(21 - foeTotal)) {
      printf("You win! What a great deal!\n");
    }
    else if (abs(21 - youTotal) > abs(21 - foeTotal)) {
      printf("You lose. You were not well suited for this.\n");
    }
    else {
      printf("It's a draw! A luck of the draw!\n");
    }
  }
  
}
int cardPull(int ace) {
  int cardStack1[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
  char cardStack2[] = {'J', 'K', 'Q', 'A'};
  
  int pull = 0;
  int pullIndex = 0;
  int chance = rand() % 13;

  if (chance < 9) {
    pullIndex = rand() % 9;
    printf("%d", cardStack1[pullIndex]);
    pull = cardStack1[pullIndex];
  }
  else {
    
    if (ace == 0) {
      pullIndex = rand() % 3;
      printf("%c", cardStack2[pullIndex]);
      return 10;
    }
    
    else {
      pullIndex = rand() % 4;

      if (pullIndex == 3) {
        printf("Ace, (Type 1 or 11 for the value) ");
        scanf("%d", &pull);

        if (pull == 1) {
          return 1;
        }
        else if (pull == 11) {
          return 11;
        }
        else {
          printf("(Invalid, defaulting to 1)");
          return 1;
        }
      }
      else {
        printf("%c", cardStack2[pullIndex]);
        return 10;
      }
      
    }
  }
  return pull;
}
void rollTheDice_Highest() {
  int p1 = 0;
  int p2 = 0;

  int diceOneTwelve[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int diceFourEight[] = {4, 5, 6, 7, 8};

  printf("\n");
  printf("This is a roll the dice game, but with a catch: \n");
  printf("You can either pick a 1-12 dice block \n");
  printf("OR you can pick a 4-8 dice block.\n");
  printf("Both players are allowed to pick the same dice block.\n");
  printf("You must roll the highest number to win. \n");
  printf("\n");
  printf("Do you pick the 1-12 dice {1} or the 4-8 dice {2}?\n");
  scanf("%d", &p1);

  p2 = (rand() % 2) + 1;

  if (p1 == 1) {
    printf("You roll the 1-12 dice block.\n");
    p1 = diceOneTwelve[rand() % 12];
    printf("The number is %d\n", p1);
  }
  else if (p1 == 2) {
    printf("You roll the 4-8 dice block.\n");
    p1 = diceFourEight[(rand() % 5)];
    printf("The number is %d\n", p1);
  }

  if (p2 == 1) {
    printf("Your foe rolls the 1-12 dice block.\n");
    do {
      p2 = diceOneTwelve[rand() % 12];
    } while(p1 == p2);
    printf("The number is %d\n", p2);
  }
  else if (p2 == 2) {
    printf("Your foe rolls 4-8 dice block.\n");
    do {
      p2 = diceFourEight[(rand() % 5)];
    } while(p1 == p2);
    printf("The number is %d\n", p2);
  }

  if (p1 > p2) {
    printf("You strike the higher number! You're on a roll! \n");
  }
  else {
    printf("The die is cast, and it gives you the losing stink-eye.\n");
  }
  
}
void rollTheDice_Race(){
  int p1 = 0;
  int p2 = 0;
  int p1Rolls = 0;
  int p2Rolls = 0;
  int p1Tally = 0;
  int p2Tally = 0;
  int targetRoll = (rand() % 20) + 31;

  int diceOneTwelve[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int diceFourEight[] = {4, 5, 6, 7, 8};
  
  printf("\n");
  printf("This is a roll the dice game, but with a catch: \n");
  printf("You can either pick a 1-12 dice block \n");
  printf("OR you can pick a 4-8 dice block.\n");
  printf("Both players are allowed to pick the same dice block.\n");
  printf("You must reach %d with the fewest rolls to win. \n", targetRoll);
  printf("OR if both players go over, the closest total to %d wins. \n", targetRoll);
  printf("\n");
  printf("Do you pick the 1-12 dice {1} or the 4-8 dice {2}?\n");
  scanf("%d", &p1);

  p2 = (rand() % 2) + 1;

  if (p1 == 1) {
    printf("You begin to roll the 1-12 dice block.\n");
    printf("The numbers are: ");
    while (p1Tally < targetRoll) {
      p1 = diceOneTwelve[rand() % 12];
      p1Rolls += 1;
      p1Tally += p1;
      printf(" %d ", p1);
    } 
  }
  else if (p1 == 2) {
    printf("You begin to roll the 4-8 dice block.\n");
    printf("The numbers are: ");
    while (p1Tally < targetRoll) {
      p1 = diceFourEight[(rand() % 5)];
      p1Rolls += 1;
      p1Tally += p1;
      printf(" %d ", p1);
    } 
  }
  
  printf("= %d (%d Rolls)", p1Tally, p1Rolls);
  printf("\n");

  if (p2 == 1) {
    printf("Your foe begins to roll the 1-12 dice block.\n");
    printf("The numbers are: ");
    while (p2Tally < targetRoll) {
      p2 = diceOneTwelve[rand() % 12];
      p2Rolls += 1;
      p2Tally += p2;
      printf(" %d ", p2);
    }  
  }
  else if (p2 == 2) {
    printf("Your foe begins to roll the 4-8 dice block.\n");
    printf("The numbers are:");
    while (p2Tally < targetRoll) {
      p2 = diceFourEight[(rand() % 5)];
      p2Rolls += 1;
      p2Tally += p2;
      printf(" %d ", p2);
    }  
  }

  printf("= %d (%d Rolls)", p2Tally, p2Rolls);
  printf("\n");

  if (p1Rolls < p2Rolls) {
    printf("You rolled less times than your opponent! What a feat!\n");
  }
  else if (p1Rolls > p2Rolls) {
    printf("You have been out-cast by your opponent's dice. What a pity!\n");
  }
  else {
    printf("The amount of rolls are the same, closest tally to the target wins...\n");
    if (abs(p1Tally - targetRoll) > abs(p2Tally - targetRoll)) {
      printf("You lose the tie-breaker!\n");
    }
    else if (abs(p1Tally - targetRoll) < abs(p2Tally - targetRoll)) {
      printf("You win the tie-breaker!\n");
    }
    else {
      printf("Both of you win the tie breaker! With odds like that, there's no need for a redo!\n");
    }
    
  }
  
}

bool trap_d10()
{
    // Rolls the array for a trap
    int roll = rand() % 10 + 1;

    char *traps[] =
            {
                    "A series of hidden blades swing down from the ceiling when you crossed a tripwire.",
                    "A tripwire triggers a barrage of darts shooting from the walls.",
                    "A weighted net drops from above, aiming to entangle and immobilize its victims.",
                    "A pressure plates on the floor activate a volley of arrows shooting from hidden wall compartments.",
                    "A disguised pit trap opens beneath you, with a false bottom concealing a second, deeper pit.",
                    "A mechanical claw trap grabs at you, attempting to pull you into a spiked pit.",
                    "A floor tile that, when stepped on, triggers a scything blade to sweep across the corridor.",
                    "A heavy stone block drops from the ceiling when you stepped on a floor tile.",
                    "An illusory floor hides a portal to a pocket dimension filled with toxic gas.",
                    "A spring-loaded trapdoor flips you into a chute lined with razor-sharp edges.",
                    "A deceptive doorway rigged with a guillotine blade that drops when the door is opened."
            };

    // Prints the rolled trap
    printf("%s \n", traps[roll]);

    // Generates a boolean for weather or not the player fell in a trap
    bool d2 = rand() % 2;
    return d2;
}

void eyeGame()
{
	int cool = (rand() % 5) + 1;
  	if(cool == 4)
  	{
		puts("\nYOU WIN!\nNow, your clue:\nEach room contains a piece of the whole. Use them all for your goal. The first is the second of the numbers on doors. The second is the answer to the blade's question. The third is the fifth of what's missing on ice. The fourth is the fourth of what's missing in the statue's room. Finally, the fifth is your prize for winning this game: 'D'.\nPut all 5 together and that's the password. GOOD LUCK!\n");
  	}
  	else
  	{
		puts("You lose. Try again.");
  	}
}

void exploreRoom(int roomNo)
{
	switch(roomNo)
    	{
      		case 1:
      		{
      			puts("You enter what appears to be a makeshift parlor. There is a grand fireplace at the back of the room, with intricate stone carvings in the mantle of various woodland animals. Above that is a large painting of a rat wearing a jester's cap with a pyrite frame. The walls are adorned with scraps of paper and loose string tying them all together. Off to the side is an easel with an covered painting. Along the faded green walls are four doors, two to your right, and to to your left. The doors are labeled 5, 26, 1, and 13 when read in clockwise order. What do you do?");
        		puts("1) Enter door 5\n2) Enter door 26\n3) Enter door 1\n4) Enter door 13\n5) Uncover the painting\n6) GIVE UP [ENDS GAME EARLY IF PUZZLE CANNOT BE SOLVED]");
        		break;
      		}
      		case 2:
      		{
        		puts("You enter an extremely frigid room. The floor is tiled with 64 large blue and white tiles, which are extremely slippery. In the room is an ice sculture of a king and queen atop their thrones. Their eyes are closed, and it appears the king's right hand was broken off. Elsewhere in the room is several small pots, each matching the color of the tile they are on, with 16 in total. In the back is a server tower, but its clearly not powered. There are two wooden doors, one to your right and one to your left. The leftmost one is marked with the head of a horse and an upside-down horse shoe. The other is marked with a key and a question mark. What do you do?");
      			puts("1) Enter the horse door\n2) Enter the key door\n3) Open the pots");
      			break;
      		}
      		case 3:
      		{
        		puts("You enter a rather large room. Before you is a statue of a man wearing a winged helmet and holding a staff. At the base of the statue is a plaque. At your feet is a circle with a dot in the middle, and an arrow pointing right at the statue. Confusingly, to the right of the statue seems to be a hole dug through the floor, broken flooring and dirt piled into the corner of the room, a shovel sticking out of the pile. On the other side of the statue, there is a table with a globe on it, and a trident leaning against the back wall behind it. Around the entire room is a wallpaper of cats and fish. On the roof is a single lightbulb emitting a soft glow, and a chain danging down from it with a metal ring attached to the end. On either wall of the room is a door. To the right is one with a female symbol painted on it. On the other side is a door with a male symbol scratched into it. What do you do?");
        		puts("1) Go down the hole\n2) Enter the right door\n3) Enter the left door\n4) Read the statue's plaque\n5) Pull on the chain");
        		break;
      		}
      		case 4:
      		{
        		puts("You enter a very dark room. Along the walls are rows of vases, jars, and other pottery. Hanging off the right wall is a TV with a broken screen. In the middle of the room is a triangular table with a record player and several records. There is a running popcorn machine in the back left corner of the room. It has creaky, wooden floors and dark purple walls. Finally, there is a single door across from you. Stabbed into the door is a knife, which is holding a scroll in place. What do you do?");
        		puts("1) Enter the only door\n2) Read the scroll\n3) Play the record player");
        		break;
      		}
      		case 5:
      		{
        		puts("You have found a very important room. Above hums fluorescent lights and the walls have a metalic shine. There is a large computer in the middle of the room, with wires scattered across the floor and hanging off the walls like overgrown vines. Behind the computer is a vault. There is definitely treasure inside. The computer screen currently reads as follows: 'Please enter the password. It is hidden along the path'. There are two doors behind you, without labels of any kind. Also behind you is a button on the wall and a screen with a closed eye. You are very confused. What do you do?");
        		puts("1)Enter the first door \n2) Enter the second door\n3) Look at the button\n4) ENTER THE PASSWORD");
        		break;
      		}
      		case 6:
      		{
        		puts("Looking at the eye and the button reveals a message. 'Test your Luck! 1 in 5 Win! A clue to the password hides within!'\n You REALLY want to press that button now. What do you do?");
        		puts("1)Leave \n2) Push Button");
        		break;
      		}
	}
}














