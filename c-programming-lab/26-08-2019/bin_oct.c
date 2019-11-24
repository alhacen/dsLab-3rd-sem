#include <stdio.h>
#include <math.h>
int convertBinarytoOctal(long long binaryNumber);
void progname() {
  printf("\n");
  printf("AHMAD HASSAN ANSARI\n");
  printf("18BCS041\n");
  printf("CS SEM 3\n");
}
int main() {
  progname();
  long long binaryNumber;
  printf("Enter a binary number: ");
  scanf("%lld", & binaryNumber);
  printf("%lld in binary = %d in octal", binarNyumber, convertBinarytoOctal(binaryNumber));
  return 0;
}
int convertBinarytoOctal(long long binaryNumber) {
  int octalNumber = 0, decimalNumber = 0, i = 0;
  while (binaryNumber != 0) {
    decimalNumber += (binaryNumber % 10) * pow(2, i);
    ++i;
    binaryNumber /= 10;
  }
  i = 1;
  while (decimalNumber != 0) {
    octalNumber += (decimalNumber % 8) * i;
    decimalNumber /= 8;
    i *= 10;
  }
  return octalNumber;
}