#include <stdio.h>

struct Employee {
    int id;
    int gross_salary;
    int bouns;
    int total_income;
};

int calculate_net_salary(int total_income) {
    int tax;
    if (total_income > 30000) {
        tax = (int)(total_income * 0.10);
    } else {
        tax = (int)(total_income * 0.05);
    }
    return total_income - tax;
}

int main() {
    struct Employee emp;
    int net_salary;

    int input1, inpnut2, input3;
    scanf("%d", &input1);
    scanf("%d", &inpnut2);
    scanf("%d", &input3);

    emp.id = input1;
    emp.gross_salary = inpnut2;
    emp.bouns = input3;
    emp.total_income = emp.gross_salary + emp.bouns;

    net_salary = calculate_net_salary(emp.total_income);

    printf("--- EMPLOYEE SALARY REPORT ---\n");
    printf("ID: %d\n", emp.id);
    printf("Gross Salary: %d\n", emp.gross_salary);
    printf("Bonus: %d\n", emp.bouns);
    printf("Total Income: %d\n", emp.total_income);
    printf("Net Salary: %d\n", net_salary);

    return 0;
}
