// Jullene Rae S. Arsenal
// CMSC 21 Lec - Pointers & Multidimensional Arrays (Assignment)


#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>

int i;
int letter1[26] = {0}, letter2[26] = {0};
char c;

void scan_word(int occurrences[26]){ // function that counts how many times each letter occur in the word & update the occurrences array 																
    while ((c = getchar()) != '\n'){
        if (isalpha(c)){
            occurrences[toupper(c) - 'A']++;
        }
    }
}

bool is_anagram(int occurrences1[26], int occurrences2[26]){ // function that compares the two arrays are identical 
    for (i = 0; i < 26; i++){								
        if (occurrences1[i] != occurrences2[i]){
            return false;
        }
    }

    return true;
}

int main(void){
    
    printf("Enter first word: ");
    scan_word(letter1);
    
    printf("Enter second word: ");
    scan_word(letter2);

    if (is_anagram(letter1, letter2)) { // if-else statement to check if the two words are anagrams or not
        printf("The words are anagrams.\n");
        return 0;
    }
    
    else {
        printf("The words are not anagrams.\n");
        return 0;
    }
}