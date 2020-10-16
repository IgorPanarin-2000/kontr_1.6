
#include "../include/CComplexVector.hpp"

CComplexVector_t::CComplexVector_t (int array_size = 0)
{
  if (array_size > 0)
    {
      m_array_size = array_size;
      m_array_a = new double [m_array_size];
      m_array_b = new double [m_array_size];
      memset (m_array_a, 0, m_array_size * sizeof (double));
      memset (m_array_b, 0, m_array_size * sizeof (double));
    }
  else
    {
      m_array_a = 0;
      m_array_b = 0;
      m_array_size = 0;
    }
}

CComplexVector_t::CComplexVector_t (double *array_a = 0, double *array_b = 0, int array_size = 0)
{
  if (array_size > 0)
    {
      m_array_size = array_size;
      m_array_a = new double [m_array_size];
      m_array_b = new double [m_array_size];
      memcpy (m_array_a, array_a, m_array_size * sizeof (double));
      memcpy (m_array_b, array_b, m_array_size * sizeof (double));
    }
}

CComplexVector_t::~CComplexVector_t ()
{
  if (m_array_a)
    delete [] m_array_a;
  if (m_array_b)
    delete [] m_array_b;
}

double *CComplexVector_t::get_array_a ()
{
  return m_array_a;
}

double *CComplexVector_t::get_array_b ()
{
  return m_array_b;
}

int CComplexVector_t::get_array_size ()
{
  return m_array_size;
}


void CComplexVector_t::set_array_a (double *array_a)
{
  if (m_array_a)
    delete [] m_array_a;
  m_array_a = array_a;
}

void CComplexVector_t::set_array_b (double *array_b)
{
  if (m_array_b)
    delete [] m_array_b;
  m_array_b = array_b;
}

void CComplexVector_t::set_array_size (int array_size)
{
  m_array_size = array_size;
}

void CComplexVector_t::init_vector ()
{
  for (int i = 0; i < m_array_size; i++)
    {
      m_array_a[i] = i;
      m_array_b[i] = m_array_size - i;
    }
}

void CComplexVector_t::print_vector ()
{
  for (int i = 0; i < m_array_size; i++)
    printf ("CComplexVector[%d] = %2.1lf + i*%2.1lf\n", i, m_array_a[i], m_array_b[i]);
  printf ("\n");
}

CComplexVector_t CComplexVector_t::operator+ (CComplexVector_t &rhs)
{
  if (m_array_size != rhs.m_array_size)
    return *this;

  std::unique_ptr<double []> array_a_temp (new double [m_array_size]);
  std::unique_ptr<double []> array_b_temp (new double [m_array_size]);

  for (int i = 0; i < m_array_size; i++)
    {
      array_a_temp[i] = m_array_a[i] + rhs.m_array_a[i];
      array_b_temp[i] = m_array_b[i] + rhs.m_array_b[i];
    }

  return CComplexVector_t (array_a_temp.get (), array_b_temp.get (), m_array_size);
}

CComplexVector_t CComplexVector_t::operator- (CComplexVector_t &rhs)
{
  if (m_array_size != rhs.m_array_size)
    return *this;

  std::unique_ptr<double []> array_a_temp (new double [m_array_size]);
  std::unique_ptr<double []> array_b_temp (new double [m_array_size]);

  for (int i = 0; i < m_array_size; i++)
    {
      array_a_temp[i] = m_array_a[i] - rhs.m_array_a[i];
      array_b_temp[i] = m_array_b[i] - rhs.m_array_b[i];
    }

  return CComplexVector_t (array_a_temp.get (), array_b_temp.get (), m_array_size);
}

/**
 * x = (x1, x2, x3, ..., xn)
 * y = (y1, y2, y3, ..., yn)
 * (x, y) = sum from 1 to n (xi*!yi)
 * !yi - complex conjugate to yi
 * */
CComplexVector_t CComplexVector_t::operator* (CComplexVector_t &rhs)
{
  if (m_array_size != rhs.m_array_size)
    return *this;

  double sum_a = 0.;
  double sum_b = 0.;

  for (int i = 0; i < m_array_size; i++)
    {
      sum_a += m_array_a[i] * rhs.m_array_a[i] + m_array_b[i] * rhs.m_array_b[i];
      sum_b += m_array_b[i] * rhs.m_array_a[i] - m_array_a[i] * rhs.m_array_b[i];
    }

  return CComplexVector_t (&sum_a, &sum_b, 1);
}

CComplexVector_t& CComplexVector_t::operator= (CComplexVector_t &rhs)
{
  if (m_array_size > 0)
    {
      if (m_array_a)
        delete [] m_array_a;
      if (m_array_b)
        delete [] m_array_b;

      m_array_size = 0;
    }

  m_array_size = rhs.m_array_size;
  m_array_a = new double [m_array_size];
  m_array_b = new double [m_array_size];
  memcpy (m_array_a, rhs.m_array_a, m_array_size * sizeof (double));
  memcpy (m_array_b, rhs.m_array_b, m_array_size * sizeof (double));

  return *this;
}

