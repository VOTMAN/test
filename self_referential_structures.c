 #include <stdio.h>

 struct ref
 {
    int data;
    struct ref* prev;
    struct ref* next;
 };

 int main()
 {
    struct ref object1;
    object1.prev = NULL;
    object1.next = NULL;
    object1.data = 10;

    struct ref object2;
    object2.prev = NULL;
    object2.next = NULL;
    object2.data = 20;

    struct ref object3;
    object3.prev = NULL;
    object3.next = NULL;
    object3.data = 30;

    object1.next = &object2;//forward links
    object2.next = &object3;
    object2.prev = &object1;//backward links
    object3.prev = &object2;
    printf ("%d \t", object1.data);
    printf ("%d \t", object1.next -> data);
    printf ("%d \n", object1.next -> next -> data);

    printf ("%d \t", object2.prev -> data);
    printf ("%d \t", object2.data);
    printf ("%d \n", object2.next -> data);

    printf ("%d \t", object3.prev -> prev -> data);
    printf ("%d \t", object3.prev -> data);
    printf ("%d \n", object3.data);
    return 0;
 }
