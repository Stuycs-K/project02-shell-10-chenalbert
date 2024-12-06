#include <unistd.h>
#include <stdio.h>
#include <string.h>




void parse_args( char * line, char ** arg_ary ){   //Goes through line (a string) and separates the line into bits based on semicolons, spaces and places them into arg_ary for use in execvp

        //Assumptions
    //line's a string
    //Arg_ary is long enough to store the tokens of the provided line
    //Last index of arg_ary has to be NULL

    int semiCount =0;
    char * semiColonArray[255];

    char*token = line;
  //First part that separates using semicolons



    while((semiColonArray[semiCount] =  strsep(&token,";"))!= NULL){

    semiCount +=1;
  }
    semiColonArray[semiCount] = NULL;

  int spaceCount = 0;
  //Should only go up to 255 then
  for (int i = 0; i < semiCount; i++) {
    char *space_token = semiColonArray[i];
    printf(" %s spaceCount: %d semiCount:%d \n",space_token,spaceCount,semiCount);

  //  if (space_token != NULL){
  //    space_token = strsep(&space_token,"");
//      arg_ary[spaceCount] = space_token;
//      spaceCount+=1;
//    }

    //Test
    while (space_token != NULL) {
        printf("%s Space Count: %d \n",space_token,spaceCount);
        space_token = strsep(&space_token, " ");
        if (space_token != NULL) {
            printf("peeeeeeeeeeee \n");
            arg_ary[spaceCount] = space_token;
            spaceCount += 1;
        }
  }


  //Sets the last argument of arg_ary to NULL
 arg_ary[spaceCount] = NULL;


}



  }
