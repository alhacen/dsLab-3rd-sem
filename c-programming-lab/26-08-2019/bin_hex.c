#include <stdio.h>
void progname() {
  printf("\n");
  printf("AHMAD HASSAN ANSARI\n");
  printf("18BCS041\n");
  printf("CS SEM 3\n");
}
int main() {
    progname();
    long int binaryval, hexadecimalval = 0, i = 1, remainder;

    printf("Enter the binary number: ");
    scanf("%ld", & binaryval);
    while (binaryval != 0) {
      remainder = binaryval % 10;
      hexadecimalval = hexadecimalval + remainder * i;
      i = i * 2;
      binaryval = binaryval / 10;
    }
    printf("Equivalent hexadecimal value: %lX", hexadecimalval);
    return 0;
}