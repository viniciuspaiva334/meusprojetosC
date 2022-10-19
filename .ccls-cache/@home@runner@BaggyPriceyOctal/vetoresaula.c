#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  return 0;
}echo "# vetoresc" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/viniciuspaiva334/vetoresc.git
git push -u origin main