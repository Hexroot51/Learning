/* Name: Evolution
 * License: GNU General Public License
 * Written By: Siddharth Roy
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int randc(void){                     /* return random printable character */
    return (rand()%(126+1-33)+33);
}
void printgen(int gen,char str[50]){ /* Print geeration and string */
    printf("[%d]:%s\n",gen,str);
}
int main(void){
    srand(time(0));
    char str[50];
    char randstr[50];
    unsigned int loop;
    int gen=1;
    printf("Enter String:");
    scanf("%s30",str);
    for(loop=0;loop<=(strlen(str)-1);loop++){  /* Create Random string */
        randstr[loop]=randc();
    }
    printgen(gen,randstr);
    while(strcmp(randstr,str)){  /* Compare random string in user string character by character */
        for(loop=0;loop<=(strlen(str)-1);loop++){
            if(randstr[loop]!=str[loop]){
                randstr[loop]=randc(); 
            }
        }
        gen++;
        printgen(gen,randstr);
    }
    return 0;
}
