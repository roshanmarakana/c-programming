#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float phy,maths,chem;
    float total;
};

int main(){
    struct student s;
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter name: ");
    fflush(stdin); // Clear input buffer before using gets
    scanf(" %[^\n]", s.name); 
    printf("Enter marks in Physics, Maths and Chemistry: ");
    fflush(stdin); // Clear input buffer before reading floats
    scanf("%f %f %f",&s.phy,&s.maths,&s.chem);
    fflush(stdin); // Clear input buffer
    s.total=s.phy + s.maths + s.chem;
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n",s.roll);
    printf("Name: %s\n",s.name);
    printf("Marks in Physics: %.2f\n",s.phy);
    printf("Marks in Maths: %.2f\n",s.maths);
    printf("Marks in Chemistry: %.2f\n",s.chem);
    printf("Total Marks: %.2f\n",s.total);
    return 0;
}
