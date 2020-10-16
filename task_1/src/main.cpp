
#include "../include/CComplexVector.hpp"
#include "../include/test.hpp"

#define VECTOR_SIZE 5

int main ()
{
  CComplexVector_t vector0 (VECTOR_SIZE);
  vector0.init_vector ();
  printf ("VECTOR_0:\n");
  vector0.print_vector ();

  CComplexVector_t vector1 (VECTOR_SIZE);
  vector1.init_vector ();
  printf ("VECTOR_1:\n");
  vector1.print_vector ();

  CComplexVector_t vector2 = vector0 + vector1;
  printf ("VECTOR_0 + VECTOR_1:\n");
  vector2.print_vector ();

  CComplexVector_t vector3 = vector0 - vector1;
  printf ("VECTOR_0 - VECTOR_1:\n");
  vector3.print_vector ();

  printf ("VECTOR_0 * VECTOR_1:\n");
  (vector0 * vector1).print_vector ();

  autotest ();
  return 0;
}
