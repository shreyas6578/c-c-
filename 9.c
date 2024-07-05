#include <stdio.h>
// Create a structure
struct myStructure {
  int da;
  int ta;
  int gs;
  int ns;
};
int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {200, 600, 3000};
  // Calculate net salary
  s1.ns = s1.da + s1.ta + s1.gs;
  // Print values, including the net salary
  printf("DA: %d\n", s1.da);
  printf("TA: %d\n", s1.ta);
  printf("GS: %d\n", s1.gs);
  printf("Net Salary: %d\n", s1.ns);
  return 0;
}
