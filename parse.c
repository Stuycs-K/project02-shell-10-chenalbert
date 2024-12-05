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

    int semiCount =0;
    char * semiColonArray[100];

    char*token = line;
  //First part that separates using semicolons



    while(semiColonArray[semiCount]!= NULL){

    semiColonArray[semiCount]=  strsep(&token,";");
    semiCount +=1;
  }
   * semiColonArray[semiCount] = '\0';

    for (int i =0; i<semiCount;i++){
      char * space_token= semiColonArray[i];
      while (space_token != NULL){
           space_token = strsep(&space_token, " ");
        arg_ary[spaceCount]= space_token;
        spaceCount +=1;
      }
      int spaceCount = 0;
  }
  //Sets the last argument of arg_ary to NULL
* arg_ary[spaceCount+1] = '\0';
  //printf(" %s",*arg_ary);

  }
