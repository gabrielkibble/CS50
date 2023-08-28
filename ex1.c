#include <stdio.h>
#include <string.h>

int main(void) {
    int age = get_int("Enter your age: ");
    string phone_number = get_string("Enter your phone number: ");
    char name[] = get_string("Enter your name: ");

    printf("Age %i, Number %s, Name %s", age, phone_number, name);
}