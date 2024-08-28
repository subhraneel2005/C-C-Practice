#include<stdio.h>

struct Employee{
    char empName[50];
    int empId;
    float empSalary;
};

void updateEmployeeSalary(struct Employee *ptr){
    float updatedSalary;
    printf("\n\nEnter amount to update: ");
    scanf("%f", &updatedSalary);
    ptr->empSalary = updatedSalary;
};

int main(){
    
    struct Employee e;
    
    printf("Enter employee name: ");
    scanf("%s", &e.empName);
    
    printf("Enter employee id: ");
    scanf("%d", &e.empId);
    
    printf("Enter employee salary: ");
    scanf("%f", &e.empSalary);
    
    printf("\n\nInitial Details\n");
    printf("Employee name: %s\n", e.empName );
    printf("Employee id: %d\n", e.empId);
    printf("Employee salary: %.2f\n", e.empSalary);
    
    updateEmployeeSalary(&e);
    
     printf("\n\nUpdated Details\n");
    printf("Employee name: %s\n", e.empName );
    printf("Employee id: %d\n", e.empId);
    printf("Employee salary: %.2f\n", e.empSalary);
    
    return 0;
}