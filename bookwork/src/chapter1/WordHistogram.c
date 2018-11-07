/**
 * Exercise 1-13 page 24 of K&R
 * 
 * Author: P Talbot
 */
#include <stdio.h>

#define WORD_FINISHED       0
#define WORD_IN_PROGRESS    1

/*
 * Create and print a histogram of the number of occurrences of a word of
 * certain lengths.
 * 
 * @param max_length is the max word length to consider.
 */ 
void word_length_histo(int max_length)
{
    // Create array and initialize all elements equal to zero.
    int word_lengths[max_length];
    for (int i = 0; i < max_length; i++)
        word_lengths[i] = 0;
        
    int word = 0;                               // Store current word length.
    int word_status = WORD_IN_PROGRESS;         // Word status whether to add.
    
    // Get word lengths and add their occurence to our array. 
    while ((curr_char = getchar()) != EOF)
    {
        // spaces, newlines and tabs reset the word length.
        if (curr_char == ' ' || curr_char == '\n' || curr_char == '\t')
        {
            if (word > 0)
            {
                word_status = WORD_FINISHED;
                word = 0;
            }
        }
        else
        {
            ++word;
        }
            
        // If the word is finished, then we add it to our array.
        if (word_status == WORD_FINISHED)
        {
            if (word > max_length)      word = max_length;
            
            // Increment word index.
            ++word_lengths[word];
            
            word_status = WORD_IN_PROGRESS;
        }
           
    }
    
    // Make histogram and print it
    print_word_histo(word_lengths);
}

void print_word_histo()
{
    // TODO: Write the histogram printing code here.
}
