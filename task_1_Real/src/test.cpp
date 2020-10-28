
#include "../include/test.hpp"

void autotest ()
{
  CVector_t vector0 (VECTOR_TEST_SIZE);
  vector0.init_vector ();
  for (int i = 0; i < VECTOR_TEST_SIZE; i++)
    if (fabs (vector0.get_array ()[i] - i) > std::numeric_limits<double>::epsilon ())
      { printf ("TEST FAILED!\n"); return; }


  CVector_t vector1 (VECTOR_TEST_SIZE);
  vector1.init_vector ();
  for (int i = 0; i < VECTOR_TEST_SIZE; i++)
    if (fabs (vector1.get_array ()[i] - i) > std::numeric_limits<double>::epsilon ())
      { printf ("TEST FAILED!\n"); return; }


  CVector_t vector2 = vector0 + vector1;
  for (int i = 0; i < VECTOR_TEST_SIZE; i++)
    if (fabs (vector2.get_array ()[i] - 2 * i) > std::numeric_limits<double>::epsilon ())
      { printf ("TEST FAILED!\n"); return; }

  for (int i = 0; i < VECTOR_TEST_SIZE; i++)
    if (fabs (vector0.get_array ()[i] - i) > std::numeric_limits<double>::epsilon ())
      { printf ("TEST FAILED!\n"); return; }

  for (int i = 0; i < VECTOR_TEST_SIZE; i++)
    if (fabs (vector1.get_array ()[i] - i) > std::numeric_limits<double>::epsilon ())
      { printf ("TEST FAILED!\n"); return; }


  CVector_t vector3 = vector0 - vector1;
  for (int i = 0; i < VECTOR_TEST_SIZE; i++)
    if (fabs (vector3.get_array ()[i]) > std::numeric_limits<double>::epsilon ())
      { printf ("TEST FAILED!\n"); return; }

  if (fabs ((vector0 * vector1).get_array ()[0] - 5) > std::numeric_limits<double>::epsilon ())
    { printf ("TEST FAILED!\n"); return; }


  printf ("TEST PASSED!\n");
}
