*How to run*
sh build.sh (will build the project)
./bin/unscramble (run the project)


*Description:*
In a nutshell,Unscramble is a simple C program game running on Linux shell for unscrambling or solving scrambled words 
by rearranging all possible word combinations to reveal the real answer.
In our project, description as well as hint is given, which will be scrambled and player have to 
unscramble it in order to get to the possible outcome.
For each scrambled puzzle, player will be given atmost 15 seconds to guess the word,
if he exceedes the given time,then it will be counted in unanswered question and if he wants to 
continue, the player will be redirected to the next question.
the player can select whether he wants to continue or not by selecting yes or no option,if he 
selects yes then he will be redirected to the next question or else if the time exceeds for 
that player then the game will be automatically finish for him.
If After quitting the game total score will be calculated which tells player how many guess are 
made correct and in coreect

*Concepts used in the unscramble are:*
	1:- MakeFile
	    -A tool to simplify or organize code for compilation,it can be used to create multiple targets 
	    to create object, binary file as well as to remove them.
	    
	2:- Static Library
	    -A file containing collection of object files(*.o) that are linked during linking phase of 
	    compilation and are not relevant during runtime.
	    
	3:- Header File
	    -A file that has (.h) extension which contains C function declaration and macro definitions 
	    to be shared among several source files.
	    
	4:- Signal
	    -A software generated interrupt (as they interrupt the flow of program) that is sent to a process by the OS.
	    
	5:- Build script
	    -build.sh file is build script that contain logic that carries out build steps.
	
*Future Enhancement:-*
	1:- By using terminal commands in order to accomplish task using GUI and interact with the shell.
	2:- Since it's limited to certain words, we can advance it by reading from the Authentic Dictionary.
	3:- It's limited to single player, we can add client-server and server can entertain multiple players at a time.
	4:- We can also include different functionalites too such as adding other games like scrabble as well 
	    as scheduling occasional competition.
	  
	  
*Group Members*
	1. Ayush Garg (202112119)
	2. Miraj Mahant (202112036)
	3. Varsha Bhootra (202112049)
	4. Raj Punjabi (202112059) 
