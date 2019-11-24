#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void progname() {
  printf("\n");
  printf("AHMAD HASSAN ANSARI\n");
  printf("18BCS041\n");
  printf("CS SEM 3\n");
}
int cday = 30, cmon = 10, cyea = 2018, chou = 26, cmin = 29, csec = 35;

void check(char arr[30]) {
  int i, j = 0, k = 0, l = 0, m = 0, n = 0, b = 0, p;
  for (i = 0, p = 3; arr[i] != '/'; i++, p--){
    j = j + ((int) arr[i] - 48) * pow(10, p);
  }
  for (i = i + 1, p = 1; arr[i] != '/'; i++, p--) {
    k = k + ((int) arr[i] - 48) * pow(10, p);
  }
  for (i = i + 1, p = 1; arr[i] != ' '; i++, p--) {
    l = l + ((int) arr[i] - 48) * pow(10, p);
  }
  for (i = i + 1, p = 1; arr[i] != ':'; i++, p--) {
    m = m + ((int) arr[i] - 48) * pow(10, p);
  }
  for (i = i + 1, p = 1; arr[i] != ':'; i++, p--) {
    n = n + ((int) arr[i] - 48) * pow(10, p);
  }
  for (i = i + 1, p = 1; arr[i] != '\0'; i++, p--) {
    b = b + ((int) arr[i] - 48) * pow(10, p);
  }
  if (b > csec) {
    cmin -= 1;
    csec += 60;
  }
  csec -= b;
  if (n > cmin) {
    chou -= 1;
    cmin += 60;
  }
  cmin -= n;
  if (m > chou) {
    cday -= 1;
    chou += 24;
  }
  chou -= m;
  if (l > cday) {
    cmon -= 1;
    cday += 30;
  }
  cday -= l;
  if (k > cmon) {
    cyea -= 1;
    cmon += 12;
  }
  cmon -= k;
  if (j > cyea) {
    printf("Invalid input\n");
    return;
  }
  cyea -= j;

  printf("Years:%d Months:%d Days:%d Hours:%d Mins:%d Sec:%d \n", cyea, cmon, cday, chou, cmin, csec);

}

int main() {
  progname();
  char arr[30];
  printf("Enter date and time in the format YYYY/MM/DD HH:MM:SS\n");
  gets(arr);
  printf("%s\n", arr);
  check(arr);
  return 0;
}