#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct books{
    int id;
    char bookName[50];
    char authorName[50];
    char date[12];
}b;
struct student{
    int id;
    char sName[50];
    char sClass[50];
    int sRoll;
    char bookName[50];
    char date[12];
}s;
FILE *fp;
