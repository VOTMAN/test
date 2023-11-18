#include <stdio.h>

struct student {
    int rollno;
    struct student* prev;    
    struct student* next;    
};

int main(void) {
    struct student std1;
    std1.prev = NULL;
    std1.next = NULL;
    std1.rollno = 68;

    struct student std2;
    std2.prev = NULL;
    std2.next = NULL;
    std2.rollno = 69;

    struct student std3;
    std3.prev = NULL;
    std3.next = NULL;
    std3.rollno = 70;

    std1.next = &std2; // Forward linking
    std2.next = &std3;
    std3.prev = &std2; // backward linking
    std2.prev = &std1;

    printf("%d \t", std1.rollno);
    printf("%d \t", std1.next -> rollno);
    printf("%d \n", std1.next -> next -> rollno);
    printf("%d \t", std2.prev -> rollno);
    printf("%d \t", std2.rollno);
    printf("%d \n", std2.next -> rollno);
    printf("%d \t", std3.prev -> prev -> rollno);
    printf("%d \t", std3.prev -> rollno);
    printf("%d \n", std3.rollno);
    return 0;
}