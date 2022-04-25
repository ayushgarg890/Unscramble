#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <signal.h>
#include <unistd.h>
#include "../include/unscramble.h"

#define NOQ 25
char desc[25][100] ={"No longer practiced or accepted",
"To convince",
"Unimportant",
"To act together in secret, plot, intrigue",
"Outgoing person",
"To hold back",
"To work together",
"Sharing another's feeling",
"Two impossible alternatives",
"fear of closed spaces",
"The killing of oneself",
"Art related to ornate, good handwriting",
"the study of everything in the universe beyond Earth's atmosphere",
"Study of living things",
"The doctor who treats heart problems",
"One who is all powerful",
"One who is capable of using both hands",
"love for one's country",
"The quality or state of being a father",
"Government by the people",
"Government by one person (royal)",
"A written message from far off place",
"A glass container in which fish and other water animals can be kept",
"That which falls to someone or something",
"A self-moving vehicle"};

char words[25][20]={"obsolete",
"persuade",
"trivial",
"conspire",
"extrovert",
"restrain",
"collaborate",
"empathy",
"dilemma",
"claustrophobia",
"suicide",
"calligraphy",
"astronomy",
"biology",
"cardiologist",
"omnipotent",
"ambidextrous",
"patriotism",
"paternity",
"democracy",
"monarchy",
"telegraph",
"aquarium",
"accident",
"automobile"};

void handler(int signo)
{
	printf("\nit took too long to input\n");
	return;
}

int main()
{
  
  srand(time(NULL));
  int playing=0,questions=0,correct_ans=0,wrong_ans=0,not_answered=0;
  printf("***************************UNSCRAMBLE***********************************\n\n");
  do{
  questions++;
  int randword=rand()%25;
  char *original = words[randword];
  char scrambled[100];
  char answer[100];
  
  
  strcpy(scrambled, words[randword]);
  scramble(scrambled);
  alarm(15);
  struct sigaction sa;
  sa.sa_handler = handler;
  sigemptyset(&sa.sa_mask);
  sa.sa_flags = 0;
  sigaction(SIGALRM, &sa, NULL);

  printf("Description : %s\n",desc[randword]);	
  printf("Unscramble the word: %s\n\n", scrambled);
  printf("Answer: ");
  if(scanf("%s", answer)==1)
  {  
    if (strcmp(answer,original) == 0)
    {
      printf("\nYou got it!\n\n");
      correct_ans++;
    }
    else{
    	printf("\nWrong Ans...\n\n");
    	wrong_ans++;
    }
  }
  else
  {
  	printf("Not answered......\n");
  	not_answered++;
  }
  alarm(5);
  printf("Do you want to play(Y/N): ");
  if(scanf("%s", answer)==1){
  	if(strcmp(answer,"N")==0 || strcmp(answer,"n")==0)
  		playing=1;
  }
  else
  	break;
  	
  printf("\n\n");
  }while(playing==0 && questions<NOQ && not_answered<3); 
  
  printf("\nQuestion Played : %d\n",questions);
  printf("Correct Answered : %d\n",correct_ans);
  printf("Incorrect Answered : %d\n",wrong_ans);
  printf("Not Answered : %d\n",not_answered);
  
  return 0;
}



