#include <stdio.h>
#include <string.h>
void main()
<<<<<<< HEAD
{ char Name[69], G[5], answer[20];
=======
{ char Name[69], G[5], answer[10];
>>>>>>> d4156580e7a65a0efd99ea75b3af09900cbd71d0
  int i;
  do
  {
    printf("What is your NAME? ");
    scanf("%s", Name);
    do
    {
<<<<<<< HEAD
      printf("What is your BLOOD GROUP[A, B, AB, or O]? ");
=======
      printf("What is your BLOOD group [A, B, AB, or O]? ");
>>>>>>> d4156580e7a65a0efd99ea75b3af09900cbd71d0
      scanf("%s", G);

      if (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 )
        printf("Blood group %s is incorrect! Please try again.\n", G);
    }  while (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 );
    if (strcmp(G,"A") ==0)
    {
      printf("%s, A. Hey, you can give blood to: A, AB.\n", Name);
      printf("  You can receive blood from: A, O.\n");
    }
    else if (strcmp(G, "B") ==0)
    {
      printf("%s, B. Well, you can give blood to: B, AB.\n", Name);
      printf("  You can receive blood from: B, O.\n");
    }
    else if (strcmp(G, "AB") == 0)
    {
      printf("%s, AB. Oh my God, you can give blood only to: AB.\n", Name);
      printf("  Wow, you can receive blood from all: O, A, B, AB.\n");
    }
    else
    {
      printf("%s, O. Nice! You can give blood to all: O, A, B, AB\n", Name);
      printf("  But Sad! You can receive blood only from: O\n");
    }
    printf("\nContinue (YES for Yes)? ");
    scanf("%s", answer);
  } while (strcmp(answer, "YES") == 0);
  printf("Goodbye\n");
}
