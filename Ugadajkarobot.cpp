#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main()
{
    srand(time(NULL));
    int secret = 1;
    int skaitlis = 50;
    int add = 50;
    int count = 0;
    do {
        if (add % 2 == 0) add = add / 2;
        else add = (add + 1) / 2;
        std::cout << skaitlis << std::endl;
        if (secret < skaitlis) {
            puts("Skaitlis ir mazaks par ievadito");
            skaitlis = skaitlis - add;
            
        }
        else if (secret > skaitlis) {
            puts("Skaitlis ir lielaks par ievadito");
           
            skaitlis = skaitlis + add;
        }
        count++;
    } while (secret != skaitlis && count != 10);
    std::cout << std::endl;
    if (count < 10) std::cout << "Skaitlis uzminets no " << count << " meginajuma";
    else std::cout << "Jus zaudejat! Pareiza atbilde " << secret;
    return 0;
}
