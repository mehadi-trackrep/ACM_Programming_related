   /// input

/*    WHOCARESTHOUGH
      AABBCC
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char word[1000];
    int i,j,k,len,ck,count;
    int check[1000];

    while(gets(word)){ /// ekhane word = space  + letter + other signs ,
                        /// but print only letter

        len = strlen(word);

        for(j = 0;j < len;j++)
            check[j] = 0;

        for(j = 0;j < len;j++){

            ck = 0;
            count = 1;
            if( word[j] < 65 || word[j] > 122 || (word[j] > 90 && word[j] < 97) )
                continue;              /// means that, word[j] jokhon space or other sign
                                    ///   tokhon nicher line gula kaj korbe na , because of "continue".

            for(k = j+1;k < len;k++){

                if(word[j] == word[k]){
                    if(check[j] == 1)
                        break;
                    else{
                        count++;
                        check[k] = 1;
                        ck = 1;
                    }
                }
            }

            if(check[j] != 1)
                printf("%c -> %d\n",word[j],count);

        }

    }

    return 0;
}

