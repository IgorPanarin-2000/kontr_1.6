
#include "../include/CVector.hpp"

CVector_t::CVector_t ()
{
  m_array = 0;
  m_array_size = 0;
}

CVector_t::CVector_t (int array_size)
{
  if (array_size > 0)
    {
      m_array_size = array_size;
      m_array = new double [m_array_size];
      memset (m_array, 0, m_array_size * sizeof (double));
    }
  else
    {
      m_array = 0;
      m_array_size = 0;
    }
}

CVector_t::CVector_t (double *array, int array_size)
{
  if (array_size > 0 && array)
    {
      m_array_size = array_size;
      m_array = new double [m_array_size];
      memcpy (m_array, array, m_array_size * sizeof (double));
    }
  else
    {
      m_array = 0;
      m_array_size = 0;
    }
}

CVector_t::~CVector_t ()
{
  if (m_array)
    delete [] m_array;
}

double *CVector_t::get_array ()
{
  return m_array;
}

int CVector_t::get_array_size ()
{
  return m_array_size;
}

void CVector_t::set_array (double *array)
{
  if (m_array)
    delete [] m_array;
  m_array = array;
}

void CVector_t::set_array_size (int array_size)
{
  m_array_size = array_size;
}

void CVector_t::init_vector ()
{
  for (int i = 0; i < m_array_size; i++)
    m_array[i] = i;
}

void CVector_t::print_vector ()
{
  for (int i = 0; i < m_array_size; i++)
    printf ("CVector[%d] = %2.1lf\n", i, m_array[i]);
  printf ("\n");
}

CVector_t CVector_t::operator+ (CVector_t &rhs)
{
  if (m_array_size != rhs.m_array_size)
    return *this;

  std::unique_ptr<double []> array_temp (new double [m_array_size]);

  for (int i = 0; i < m_array_size; i++)
    array_temp[i] = m_array[i] + rhs.m_array[i];

  return CVector_t (array_temp.get (), m_array_size);
}

CVector_t CVector_t::operator- (CVector_t &rhs)
{
  if (m_array_size != rhs.m_array_size)
    return *this;

  std::unique_ptr<double []> array_temp (new double [m_array_size]);

  for (int i = 0; i < m_array_size; i++)
    array_temp[i] = m_array[i] - rhs.m_array[i];

  return CVector_t (array_temp.get (), m_array_size);
}

double CVector_t::operator* (CVector_t &rhs)
{
  if (m_array_size != rhs.m_array_size)
    return 0.;

  double sum = 0.;

  for (int i = 0; i < m_array_size; i++)
    sum += m_array[i] * rhs.m_array[i];

  return sum;
}

CVector_t& CVector_t::operator= (CVector_t &rhs)
{
  if (m_array_size > 0)
    {
      if (m_array)
        delete [] m_array;
      m_array_size = 0;
    }

  m_array_size = rhs.m_array_size;
  m_array = new double [m_array_size];
  memcpy (m_array, rhs.m_array, m_array_size * sizeof (double));

  return *this;
}

