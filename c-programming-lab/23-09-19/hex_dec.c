#include<stdio.h>
#include<string.h>
void progname() {
  printf("\n");
  printf("AHMAD HASSAN ANSARI\n");
  printf("18BCS041\n");
  printf("CS SEM 3\n");
}
int hexadecimalToDecimal(char hexVal[]) {
  int len = strlen(hexVal);
  int base = 1;
  int dec_val = 0;
  for (int i = len - 1; i >= 0; i--) {
    if (hexVal[i] >= '0' && hexVal[i] <= '9') {
      dec_val += (hexVal[i] - 48) * base;
      base = base * 16;
    }
    else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
      dec_val += (hexVal[i] - 55) * base;
      base = base * 16;
    }
  }

  return dec_val;
}
int main() {
  progname();
  int res;
  char hexNum[50];
  printf("enter number: ");
  gets(hexNum);
  res = hexadecimalToDecimal(hexNum);
  printf("the deciamal value is : %d", res);
  return 0;
}