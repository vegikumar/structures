#include <stdio.h>
struct employee {
  int empno;
  char empname[30];
  int empage[11];
  float salary;
};
void display(struct employee emp[]) {
  printf("EmpName\tEmpAge\tEmpNo\tSalary\n");
  for (int i = 0; i < 2; i++) {
    printf("%s\t%d\t%d\t%.2f\n", emp[i].empname, emp[i].empage, emp[i].empno, emp[i].salary);
  }
}
int main() {
  struct employee emp[2];
  for (int i = 0; i < 2; i++) {
    printf("Enter the details of employee %d:\n", i+1);
    printf("EmpName: ");
    scanf("%s", emp[i].empname);
    printf("EmpAge: ");
    scanf("%d", &emp[i].empage);
    printf("EmpNo: ");
    scanf("%d", &emp[i].empno);
    printf("Salary: ");
    scanf("%f", &emp[i].salary);
  }
  display(emp);
  return 0;
}