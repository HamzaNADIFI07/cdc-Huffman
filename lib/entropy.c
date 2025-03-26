#include <stdio.h>
#include "entropy.h"
#include <math.h>


void count_occurrences(FILE *file, int counts[]){
    int c;
    for(int i = 0;i<256;i++){
        counts[i] = 0;
    }
    if (file == NULL){
        printf("Erreur lors de l'ouverture du fichier");
    }
    else{
        while((c = fgetc(file)) != EOF){
                counts[c]++;       
        }
    }
}

struct file_stat entropy(int counts[]){
    struct file_stat fi;
    float size = 0;
    int i;
    float somme = 0;
    for (i = 0; i < 256; i++) {
        size += counts[i];
        if (counts[i] != 0) {
            somme += counts[i]*log2(counts[i]);
        }
    }
    fi.size = size;
    fi.entropy = log2(size) - (somme/size);
    return fi;
}

