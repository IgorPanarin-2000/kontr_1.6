#ifndef __CVector_T_HPP_INCLUDED__
#define __CVector_T_HPP_INCLUDED__

#include <memory>
#include <stdio.h>
#include <cstring>
#include <cmath>
#include <limits>

class CVector_t
{
private:
  double *m_array;
  int m_array_size;

public:
  CVector_t ();
  CVector_t (int array_size);
  CVector_t (double *array, int array_size);
  ~CVector_t ();

  double *get_array ();
  int get_array_size ();

  void set_array (double *array);
  void set_array_size (int array_size);

  void init_vector ();
  void print_vector ();

  CVector_t operator+ (CVector_t &rhs);
  CVector_t operator- (CVector_t &rhs);
  CVector_t operator* (CVector_t &rhs);
  CVector_t& operator= (CVector_t &rhs);

};

#endif // __CVector_T_HPP_INCLUDED__
