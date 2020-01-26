#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main()
{
    srand(time(NULL));
    int secret = rand() % 100 + 0;
    int skaitlis;
    int count = 0;
    do {
        printf("Guess the number (0 to 100): ");
        std::cin >> skaitlis;
        if (secret < skaitlis) puts("Skaitlis ir mazaks par ievadito");
        else if (secret > skaitlis) puts("Skaitlis ir lielaks par ievadito");
        count++;
    } while (secret != skaitlis && count!=10);
    if (count < 10) std::cout << "Skaitlis uzminets no " << count << " meginajuma";
    else std::cout << "Jus zaudejat! Pareiza atbilde " << secret;
    return 0;
}
