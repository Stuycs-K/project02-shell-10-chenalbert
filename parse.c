#include <unistd.h>
#include <stdio.h>
#include <string.h>




void parse_args( char * line, char ** arg_ary ){
//Goes through line and separates the line into bits based on semicolons, spaces and places them into arg_ary for use in execvp
//Should seperate first based on semicolons

      //Assumptions
  //line's a string
  //Arg_ary is long enough to store the tokens of the provided line
  //Last index of arg_ary has to be NULL

  int count =0;
  char * semiColonArray[100];


//First part that separates using semicolons
  while(line){

  semiColonArray[count]=  strsep(&line,";");
  count +=1;
}

  //Doesn't chop it up though
  count = 0;
  while (semiColonArray){
    arg_ary[count] = strsep(&semiColonArray[count]," ");
    count +=1;
  }
//Sets the last argument of arg_ary to NULL
arg_ary[count+1] = NULL;


}
