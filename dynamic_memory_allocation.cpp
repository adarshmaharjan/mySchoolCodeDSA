#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cash = 100;
void play(int bet)
{
  // char c[3] = {'J', 'Q', 'K'};
  char *c = (char *)malloc(3 * sizeof(char));
  c[0] = 'J';
  c[1] = 'K';
  c[2] = 'Q';
  printf("Shuffling...\n");
  srand(time(NULL));
  int i;
  for (i = 0; i < 5; i++)
  {
    int x = rand() % 3;
    int y = rand() % 3;
    int temp = c[x];
    c[x] = c[y];
    c[y] = temp;
  }
  int j;
  for (j = 0; j < 3; j++)
  {
    printf("%c ", c[j]);
  }
  printf("\n");
  int playerGuess;
  printf("What is the position of the queen - 1,2, or 3 \n");
  scanf("%d", &playerGuess);
  if (c[playerGuess - 1] == 'Q')
  {
    cash += 3 * bet;
    printf("You have won cash is %d \n", cash);
  }
  else
  {
    cash -= bet;
    printf("You have lost cash is %d \n", cash);
  }
  free(c);
}
int main()
{
  int bet;
  while (cash > 0)
  {
    printf("Whats your bet\n");
    scanf("%d", &bet);
    if (bet == 0 || bet > cash)
    {
      break;
    }
    play(bet);
  }
}