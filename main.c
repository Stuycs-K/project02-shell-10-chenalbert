#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <sys/wait.h>
#include "parse.h"
#include <sys/stat.h>

//gets input
void getinput(char* s){
  int i =0;
  char inputBuffer[255];
  fgets(inputBuffer,255,stdin);
  while(inputBuffer[i]!= '\0'){
    s[i]=inputBuffer[i];
    i +=1;
  }

//printf statement to test if this runs
  //printf("%s",s);


}






void cd(const char*path){ //Works as a cd function, where to put this in the main function? Assume that this function will be called somehwere in main
  if(chdir(path)!=0){
    printf("%s does not exist \n",path);
  }



}

int main(){ //Only fork if not exit or cd

//Used to parse command line argument
  char argBuffer[255];
  char * cmdargv[255];

//Make a 2d array

  //Get from stdin and parse args
  getinput(argBuffer);
  printf("catasdfsf %s ",argBuffer);
  //Seg fault when running the parse args
  parse_args(argBuffer,cmdargv);
//Forks as many times as needed

int count = 0;
while (cmdargv){
  pid_t childA = fork();
  if (childA == 0){
    //testing printf
    printf("s");
    execvp(argBuffer,cmdargv);
}
  count +=1;

}
int status;
wait(&status);
getinput(argBuffer);

}
