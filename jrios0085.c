//contributors
//Jonathan rios
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <math.h>

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

	int choice = 0;
				char playerName[9];
				srand(time(NULL));
				    
				printf("Please enter your player name: ");
				scanf("%s", playerName);
				
				printf("welcome traveler, you are in the Swamp side of the kingdom"
					while(getchar() != '\n');

				printf("it is met with very ferocious monsters, wild animals and worse of all, crocodiles")	
				while(getchar() != '\n');
				
				printf("\nTraveler %s, in order to progress the story  you must use the ENTER key during gameplay.\n", playerName);
				
				doorChoiceRoom8();
while(choice != 7)
{
puts("\nyou are in the swampy side of the kingdom")
puts("nonetheless you bare your wits since you are the one true traveler")
puts("that side of kingdom is wide but smelly and is filled with corpses but")
puts("it is also filled with monsters, portals to other rooms and loot")
puts("you have 7 choices think wisely on what you want to do")
puts("|1: go straight,|2: stay put, because why not|3: go left,|4: go back to the path you were in before, |5: go right,| 6: exit the game in case you are tired of this adventure| 7: 
secret route  )
scanf("%d",&choice);

switch(choice)
{
case 1:
{
puts("\nyou went forward\n");
while (getchar() != '\n');

printf("you walk forward to the swamp");
while (getchar() != '\n');

printf("While you were walking forward to the swamp your eyes locked onto something");
while ((getchar() != '\n'););

printf(" what your eyes locked to was nothing but a corpse of a dead beaurcrat");
while (getchar() != '\n');

printf("you think to yourself: man what a terrible night to be in a dungeon with a dead beaurcrat")
while (getchar() != '\n');

printf("but after some thought you see a shiny item near the beaurcrat's hand")
while (getchar() != '\n');

printf("what luck you found a shiny coin");
while (getchar() != '\n');

printf("now you must flip a coin to see if there is a status affect from getting the shiny coin from that corpse")
while (getchar() != '\n');

	//this statement is mostly to make sure the code doesn't get any errors when compiling
void ajlSpace()
{
    while (getchar() != '\n')
        ;
}

void coinFlip() {
  int call = 0;

  printf("You know the rules and so do I : call heads{1} or tails{2}: ");
  scanf("%d", &call);
    
  if (call == 1 || call == 2) {
    printf("The coin flips!\n");
    
  }
  else 
  {
    printf("You call an invalid number, the game will call instead since you were being a bit cheeky!\n");
    call = (rand() % 2) + 1;
    
    if (call == 1){
      printf("Luck was not on your side Fellow Traveler!\n");
    }
    else
     {
      printf("You got yourself a rare relic\n");
    }
  }

    int coin = (rand() % 2) + 1;

  if (coin == 1 && call == 1) {
    printf("\nIt's heads, what luck, you found something valuable\n");
  }
  else if (coin == 1 && call == 2) {
    printf("\nIt's heads.,what you got from the beaurcrat is the coin of Bulk Bogan.\n");
  }
  else if (coin == 2 && call == 1) {
    printf("\nIt's tails. well can't win them all, Too bad!\n");
  }
  else if (coin == 2 && call == 2) {
    printf("\nIt's tails, well you were cursed from touching the coin of the beaurcrat\n");
  }
  
  printf("you did not pass the flip test"); 
while (getchar() != '\n');

printf("you were cursed by touching the coin, what curse you may ask? well its a curse that turns anyone who fails the coin flip test into a corpse"); 
while (getchar() != '\n');
printf("you died, end of story, try again next time Traveler"); 
while (getchar() != '\n');
 break;

}
 case 2:
{

 	puts("\nYou decided to stay put and wait for someone to come for you\n");
while (getchar() != '\n');

printf("you were so bored of waiting that you fell asleep"); 
while (getchar() != '\n');
//this statement is mostly to make sure the code doesn't get any errors when compiling
void ajlSpace()
{
    while (getchar() != '\n')
        ;
}

void coinFlip() {
  int call = 0;

  printf("You know the rules and so Do I : call heads{1} or tails{2}: ");
  scanf("%d", &call);
    
  if (call == 1 || call == 2) {
    printf("The coin from above flips!\n");
    
  }
  else 
  {
    printf("You call an invalid number, the game will call instead since you were being a bit cheeky!\n");
    call = (rand() % 2) + 1;
    
    if (call == 1){
      printf("Luck was not on your side Fellow Traveler!\n");
    }
    else
     {
      printf("You wake up\n");
    }
  }

    int coin = (rand() % 2) + 1;

  if (coin == 1 && call == 1) {
    printf("\nIt's heads, what luck, you woke up just in time!\n");
  }
  else if (coin == 1 && call == 2) {
    printf("\nIt's heads.,you wake up just in time to slay a monster\n");
  }
  else if (coin == 2 && call == 1) {
    printf("\nIt's tails. well can't win them all, Too bad!\n");
  }
  else if (coin == 2 && call == 2) {
    printf("\nIt's tails!, a monster sneaks in your camp and strikes you in your sleep!\n");
  }

  
  printf(" you failed the flip test");
while (getchar() != '\n');

printf(" you died in your sleep as some monsters killed you while you were sleeping");
while (getchar() != '\n');

 printf(" what a terrible time to fall asleep, try again traveler");
while (getchar() != '\n');

break;
}
case 3:
{

puts("\nyou went left of the swamp\n"); 
while (getchar() != '\n');

printf("there is a monster in your way"); 
while (getchar() != '\n');

printf("yyou hide in the bushes before it can see you"); 
while (getchar() != '\n');

printf("while in the bushes you peek on the monster that you were
	afraid of and decided to write down what you saw in yourself
	notebook"); 
while (getchar() != '\n');

printf("the monster was a giant behemoth and when he walks
	almost knocking down mountains with just his stomps alone"); 
while (getchar() != '\n');

printf("the monster is also very vile as it sees a crocodile
	just walking in their little feet
	the monster runs at the crocodile and snaps it in two"); 
while (getchar() != '\n');

printf("you panicked but you didn't let your nerves take control of you"); 
while (getchar() != '\n');

printf("once the coast was clear you went furthur deep into the swamp dungeon"); 
while (getchar() != '\n');

printf("after some time going forward and hiding from the nearby monsters 
	as well as from the local animals that have not yet noticed your presence"); 
while (getchar() != '\n');

printf("you went to hiding in a cave and what luck, there is a floating door just standing near some rocks"); 
while (getchar() != '\n');

printf("you see what looks to be a portal to the next room"); 
while (getchar() != '\n');



printf("you take the exit and you esxaped to the next room"); 
while (getchar() != '\n');

printf("Now you go on to the next room of this journey and hope to reach the end Fellow Traveler"); 
while (getchar() != '\n');
break;

}
case 4:
{

puts("\n you walk back to the castle\n"); 
while (getchar() != '\n');

printf("from there you meet up with a knight who just so happened
	to be traveling to the same swamp you were at"); 
while (getchar() != '\n');

printf("soon you went to the swamp with companion in tow");
while (getchar() != '\n');

printf("eventally you both went all the way to the end
	of the swamp and were able to reach the next city");

while (getchar() != '\n');

printf("from there you and the knight parted ways but before you both said your goodbyes, the knight gave you a proposition"); 
while (getchar() != '\n');

printf("the knight says that they will flip a coin and if its heads he will continue the quest with you but if its tails he will give you a potion that will be useful in your journey
to beating the game"); 
while (getchar() != '\n');

//this statement is mostly to make sure the code doesn't get any errors when compiling
void ajlSpace()
{
    while (getchar() != '\n')
        ;
}

void coinFlip() {
  int call = 0;

  printf("You know the rules and so Do I : call heads{1} or tails{2}: ");
  scanf("%d", &call);
    
  if (call == 1 || call == 2) {
    printf("The coin from above flips!\n");
    
  }
  else 
  {
    printf("You call an invalid number, the game will call instead since you were being a bit cheeky!\n");
    call = (rand() % 2) + 1;
    
    if (call == 1){
      printf("Luck was not on your side Fellow Traveler!\n");
    }
    else
     {
      printf("You got a companion\n");
    }
  }

    int coin = (rand() % 2) + 1;

  if (coin == 1 && call == 1) {
    printf("\nIt's heads, what luck!\n");
  }
  else if (coin == 1 && call == 2) {
    printf("\nIt's heads., the knight agrees to his bizarre proposition and continues the journey as your companion\n");
  }
  else if (coin == 2 && call == 1) {
    printf("\nIt's tails. well can't win them all, Too bad\n");
  }
  else if (coin == 2 && call == 2) {
    printf("\nIt's tails!, the knight gives you the potion of the cowboy reaper, a potion so cool that it will surly come in handy some time !\n");
  }
  
printf("eventally you both said your goodbyes and you continued your journey");

while (getchar() != '\n');

break;
}
case 5: 
{
	puts("\nyou went right side of the swamp, how very daring\n");
	
while (getchar() != '\n');

printf(" after some time going right you encounter a dog in the swamp");
while (getchar() != '\n');

printf(" you decided to take it with you in your journey to keep you company");
while (getchar() != '\n');

printf("unknown to you however is that the dog was a mutated monster");
while (getchar() != '\n');

printf("in the end it was too late, the dog lashed at your neck, snapping it like nothing");

while (getchar() != '\n');

 printf("you lay there in the swamp motionless as you have flashes of what could have been");

while (getchar() != '\n');

printf("you see visions of your family and after a while you were just another dead Traveler");

while (getchar() != '\n');


printf(" your journey is over ");

while (getchar() != '\n');

printf("Never judge a book by its cover Traveler, sometimes it will end your life, like right now."); 
while (getchar() != '\n');

printf("try again next time traveler"); 
while (getchar() != '\n');

break;

}
case 6:
{

puts("\nyou quit the game, you had enough of these shenanigans\n");
while (getchar() != '\n');

printf("you decided to touch grass, see you when you are ready again Traveler"); 
while (getchar() != '\n');

break;

}
case 7:
{

puts("\nerror room teleport\n");

printf("you reached the error room, how did you reach it?
	nonetheless this is a celebrating"); 

printf("you see a portal that can take you to every room you have visited prior"); 	
while (getchar() != '\n');

printf("you decide that you want to take it"); 
while (getchar() != '\n');


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
			{	

			
				puts("invalid choice");
			}
		}
	}
	puts("Game Over");
	return EXIT_SUCCESS;

} 