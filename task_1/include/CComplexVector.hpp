#ifndef __CCOMPLEXVECTOR_T_HPP_INCLUDED__
#define __CCOMPLEXVECTOR_T_HPP_INCLUDED__

#include <memory>
#include <stdio.h>
#include <cstring>

class CComplexVector_t
{
private:
  double *m_array_a;
  double *m_array_b;
  int m_array_size;

public:
  CComplexVector_t (int array_size);
  CComplexVector_t (double *array_a, double *array_b, int array_size);
  ~CComplexVector_t ();

  double *get_array_a ();
  double *get_array_b ();
  int get_array_size ();

  void set_array_a (double *array_a);
  void set_array_b (double *array_b);
  void set_array_size (int array_size);

  void init_vector ();
  void print_vector ();

  CComplexVector_t operator+ (CComplexVector_t &rhs);
  CComplexVector_t operator- (CComplexVector_t &rhs);
  CComplexVector_t operator* (CComplexVector_t &rhs);
  CComplexVector_t& operator= (CComplexVector_t &rhs);

};

#endif // __CCOMPLEXVECTOR_T_HPP_INCLUDED__
