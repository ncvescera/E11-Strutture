#include <stdio.h>
#include <stdlib.h>

struct s_data{
    int giorno;
    int mese;
    int anno;
};
typedef struct s_data data;

void printData(data input);

int main(int argc, char** argv) {
    data in = {8,4,98};
    
    printData(in);
    
    return (EXIT_SUCCESS);
}

void printData(data input){
    char * mesi[] = {"gennaio","febbraio","marzo","aprile","maggio","giugno","luglio","agosto","settembre","ottobre","novembre","dicembre"};
  
    printf("%d  %s  %d\n", input.giorno, mesi[input.mese-1], (input.anno < 1000 && input.anno > 16) ? (input.anno+1900) : (input.anno+2000));
    
    return;
}