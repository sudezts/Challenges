//Adımı soyadımı ve yaşımı 3 fonksiyona yazdım. 


#include <stdio.h>
#include <stdlib.h>

void isim(char *name) {
    printf("Enter your name: ");
    scanf("%s", name);
}

void soyisim(char *surname) {
    printf("Enter your surname: ");
    scanf("%s", surname);
}

void yas(int *age) {
    printf("Enter your age: ");
    scanf("%d", age);
}


int main() {
    char name[20], surname[20];
    int age;
    isim(name);
    soyisim(surname);
    yas(&age);
  
    printf("İsim: %s\nsoyisim: %s\nyaşınız: %d", name, surname, age);
    return 0;
}

