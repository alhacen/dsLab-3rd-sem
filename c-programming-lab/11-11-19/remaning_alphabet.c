#include<stdio.h>

void progname() {
  printf("\n");
  printf("AHMAD HASSAN ANSARI\n");
  printf("18BCS041\n");
  printf("CS SEM 3\n");
}
int main() {
  progname();
  char line[150];
  int i, j, k;
  printf("Enter a string: ");
  gets(line);
  for (i = 0; line[i] != '\0'; ++i) {
    while (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0')) {
      for (j = i; line[j] != '\0'; ++j) {
        line[j] = line[j + 1];
      }
      line[j] = '\0';
    }
  }
  for (k = 0; line[k] != '\0'; k++) {
    line[k] -= 32;
  }
  printf("Output String: ");
  puts(line);
  return 0;
}