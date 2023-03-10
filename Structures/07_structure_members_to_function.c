#include <stdio.h>
struct student {
   char name[50];
   int per,rno;
};

void display(int a, int b);

int main() {
   struct student s1;

   printf("Enter name: ");
   gets(s1.name);
   printf("Enter the roll number: ");
   scanf("%d",&s1.rno);
   printf("Enter percentage: ");
   scanf("%d", &s1.per);
   display(s1.rno,s1.per);
   return 0;
}

void display(int a, int b ) {
   printf("\nDisplaying information\n");
   printf("Roll number: %d", a);
   printf("\nPercentage: %d", b);
}
