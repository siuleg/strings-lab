#include <stdio.h>

/* Gets input from the user in the form of a string. The string
   contains up to n characters, including the end marker '\0'.

   No changes are needed here.

*/
void input_string(char str[], int n) {
  char c;
  int i;
  
  if (n < 1) return;  
  for (i=0; i<n-1; i++) {
    scanf("%c", &c);
    if (c == '\n') {
      break;
    }
    str[i] = c;
  } 
  str[i] = '\0';
}

/* Removes all characters from the string str that are no upper case
   letters.

   The string is modified in place, i.e. the string contains both the 
   input to the function and the output of the function.

   Examples:

   "HELLO WORLD" is transformed into "HELLOWORLD"

   "hello World" is transformed into "W"

   "aaaaaa"      is transformed into ""

   "HwEoLrLlOd"  is transformed into "HELLO"

   "a"           is transformed into ""

   CAUTION: THIS FUNCTION MAY (AND TECHNICALLY CANNOT) USE A 
   COPY OF THE STRING! 

   The function must achieve its goal by finding all positions at
   which a character that is not an upper case letter is located and
   it must remove these characters by moving all characters right to
   this (or these) position(s) to the left, *including* the end
   marker.

   CAUTION: BE SURE TO NEVER READ THE -1-TH ELEMENT OF THE ARRAY THE
   STRING IS FORMED OF, NOR THE CHARACTER BEYOND THE END OF THE
   STRING.
   
   WARNING: THIS ALGORITHM IS EASY ("TRIVIAL") ONCE YOU FIND IT BUT IT
   WILL PRODUCE SOME FRUSTRATION IN THE BEGINNING!!

   THIS FUNCTION MAY NOT CALL ANY OTHER FUNCTION

*/
void remove_anything_but_upper_case(char str[]) {
  /* TODO */
}

/* Returns the length of the string str, i.e. the number of characters
   before the end marker '\0'.

   DO NOT USE strlen TO IMPLEMENT THIS FUNCTION!

*/
int string_length(const char str[]) {
  /* TODO */
  return 0; /* STUB */
}

/* Rotates the string str one character to the right, i.e. copies the
   last character into the first one, shifting all characters to the
   right.

   This function may use the string_length function defined above.

   THIS FUNCTION MAY NOT USE strlen AND IT MAY (AND TECHNICALLY
   CANNOT) USE A COPY OF THE INPUT STRING.
   
   Example: if the entering string is "HELLO", it gets modified to
            "OHELL".

*/
void rotate_string(char str[]) {
  /* TODO */
}


/* Computes the letters in a string that come first and last in the
   alphabet.

   For example, for the string "hello", the letter that comes first is
   'e'.  The letter that comes last is 'o'.

   Puts the letter of the string that comes first in the alphabet into
   the variable pointed by min.

   Puts the letter of the string that comes last in the alphabet into
   the variable pointed by max.
   
   Ignores all characters that are no upper-case or lower-case English 
   alphabet letters. 

   The upper-case letters are considered to come before the lower-case
   letters.

   If the string is empty or contains no English upper-case or
   lower-case letters, considers 'z' to be the letter that comes first
   (to be put into the variable pointed by min) and 'A' to be the
   letter that comes last (to be put into the variable pointed by
   max).
   
   THIS FUNCTION DOES NOT CALL ANY OTHER FUNCTION.

*/
void minmax_letters_in_string(char *min, char *max, const char str[]) {
  /* TODO */
}

/* The main function. 

   No change is needed here.

*/
int main(int argc, char **argv) {
  const int BUF_LEN = 4095;
  char str[BUF_LEN];
  char min, max;
  int len, i;

  /* Make the user enter a string */
  printf("Please enter a string. Hit enter when done.\n");
  input_string(str, BUF_LEN);

  /* Print out the string */
  printf("The string you entered is \"%s\".\n", str);

  /* Remove every character but uppercase letters */
  remove_anything_but_upper_case(str);

  /* Print out the transformed string */
  printf("The string with only the upper case letters left is \"%s\".\n", str);

  /* Make the user again enter a string */
  printf("Please enter again a string. Hit enter when done.\n");
  input_string(str, BUF_LEN);

  /* Print out the string */
  printf("This time, you entered: \"%s\"\n", str);

  /* Compute the length of the string */
  len = string_length(str);

  /* Display the length of this string */
  printf("This string contains %d characters.\n", len);
  printf("\n");

  /* Compute the first and last character in the string */
  minmax_letters_in_string(&min, &max, str);

  /* Print out which letter comes first and last in the alphabet */
  printf("The letter in the string \"%s\" that comes first in the alphabet is \'%c\'.\n", str, min);
  printf("The letter in the string \"%s\" that comes last  in the alphabet is \'%c\'.\n", str, max);
  
  /* Display the string repeatedly, rotating it in between */
  printf("\n");
  for (i=0; i<len; i++) {
    printf("%s\n", str);
    rotate_string(str);
  }
  printf("%s\n", str);

  return 0;
}

