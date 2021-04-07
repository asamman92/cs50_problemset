#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int userInput;
    do
    {
        userInput = get_int("height: ");
    }
    while ( userInput < 1 || userInput > 8);

    for (int row = 0; row < userInput; row++)
   {
      for (int zero = row + 1; zero < userInput; zero++) {
          printf("0");
        }

      for (int column = 0; column < row + 1; column++) {
          printf("#");
      }
        printf("\n");
    }
}


