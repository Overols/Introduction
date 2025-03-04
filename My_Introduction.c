#include <stdio.h>

void printIntroduction() {
    printf("# My Introduction\n\n");
    printf("Welcome to *Muhammad Ridho Prakoso, Introduction*! ");
    printf("This repository is designed to Introduce myself to the Github Community and My Goals!\n\n");
}

void printTableOfContents() {
    printf("## Table of Contents\n");
    printf("1. Introduction\n");
    printf("2. Projects\n");
    printf("3. Resources\n\n");
}

void printPersonalIntro() {
    printf("## Introduction\n");
    printf("My name is Muhammad Ridho Prakoso, i'm a Computer-Science student ");
    printf("at BINUS University @Alam Sutera.\n\n");
}

void printProjects() {
    printf("## Projects\n");
    printf("Here are some my project that i'm working on':\n");
    printf("- SQL Linux\n");
    printf("- Cybertask with Python\n\n");
    
}

void printResources() {
    printf("## Resources\n");
    printf("My list of resources to help me learn more about coding:\n");
    printf("- Coursera\n\n");
}

int main() {
    printIntroduction();
    printTableOfContents();
    printPersonalIntro();
    printProjects();
    printResources();
    
    printf("Happy Coding ^v^");
    return 0;
}