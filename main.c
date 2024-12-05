#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include "parse.h"




int main(){

//Used to parse command line argument
  char argBuffer[255];
  char * cmdargv[255];

//Make a 2d array

  //Get from stdin and parse args
  char execvpArray;
  fgets(argBuffer,255,stdin);
  parse_args(argBuffer,cmdargv);

//Forks as many times as needed

int count = 0;
while (cmdargv){
  pid_t childA = fork();
  if (childA == 0){
    execvp(argBuffer,cmdargv);
}
  count +=1;

}
int status;
wait(&status);

}


//gets input???????
char* getinput(char maybeOutput[]){
  char inputBuffer[255];
  fgets(inputBuffer,255,stdin);
//  while(){


  //}

}
