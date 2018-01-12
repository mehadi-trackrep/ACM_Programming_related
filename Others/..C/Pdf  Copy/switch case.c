#include <stdio.h>
#include <ctype.h>
int main(void) {
    int c; int state=1;
    for ( ; ; ) {
            c = getchar();
    if (c == EOF) break;
     switch (state) {
          case 1:  if (isalpha(c)) {
              putchar(toupper(c));
              state = 2;            }
              else putchar(c);
              break;
          case 2:   if (!isalpha(c))
                    state = 1;
                     putchar(c);
                     break;
                     }
                     }
                     return 0;
                     }
