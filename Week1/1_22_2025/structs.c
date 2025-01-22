#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    int publicationYear;
    int numPages;
};

struct Person {
    char name[50];
    int age;
};

int checkEligibility(struct Person possible_voter) {
    if (possible_voter.age >= 18) {
        return 1;
    }
    return 0;
}

int main(void) {

    // Problem 1: Struct Initialization and Field Access
    // Define a struct type called Book that represents a book in a library. The struct should contain the following fields:
    // char title[100] for the book's title.
    // char author[100] for the author's name.
    // int publicationYear for the year the book was published.
    // int numPages for the number of pages in the book.
    // In your main function, declare two variables of type Book, initialize them with appropriate values, and then print the details of the books using the dot notation.
    // Expected Output:
    // Book 1:
    // Title: The Great Gatsby
    // Author: F. Scott Fitzgerald
    // Publication Year: 1925
    // Number of Pages: 218

    // Book 2:
    // Title: To Kill a Mockingbird
    // Author: Harper Lee
    // Publication Year: 1960
    // Number of Pages: 281

    // struct Book toKillAMockingBird;
    // strcpy(toKillAMockingBird.title, "To Kill a Mockingbird");
    // strcpy(toKillAMockingBird.author, "Harper Lee");
    // toKillAMockingBird.publicationYear = 1960;
    // toKillAMockingBird.numPages = 281;
    // printf("Title: %s\n", toKillAMockingBird.title);
    // printf("Author: %s\n", toKillAMockingBird.author);
    // printf("Publication Year: %d\n", toKillAMockingBird.publicationYear);
    // printf("Number of Pages: %d\n", toKillAMockingBird.numPages);



    // Problem 2: Passing Structs to Functions
    // Define a struct type called Person that represents an individual with the following fields:
    // char name[50] for the person's name.
    // int age for the person's age.
    // Write a function checkEligibility that takes a Person struct as an argument and returns 1 if the person is eligible to vote (age 18 or older), and 0 otherwise. In the main function, create two Person variables and call checkEligibility for each person. Print whether the person is eligible to vote.
    // Expected Output:
    // Alice is eligible to vote: 1
    // Bob is eligible to vote: 0





    // Problem 3: Dynamic Memory Allocation for Structs
    // Write a C program where you dynamically allocate memory for a Person struct using malloc. The struct should have the following fields:
    // char name[50] for the person's name.
    // int age for the person's age.
    // After dynamically allocating memory for the struct, set the name and age fields, and print out the details of the person. Finally, free the dynamically allocated memory.
    // Expected Output:
    // Name: John Doe
    // Age: 30
    // These problems will help practice working with structs, passing structs to functions, and using dynamic memory allocation.
    struct Person *person_two = malloc(sizeof(struct Person));
    (*person_two).age = 30;
    strcpy((*person_two).name, "John Doe");
    printf("Name: %s\n", (*person_two).name);
    printf("Age: %d\n", (*person_two).age);
    printf("Eligible to Vote: %d\n", checkEligibility(*person_two));
    free(person_two);
    person_two = NULL;
    return 0;
}