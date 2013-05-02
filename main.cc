#include <iostream> // std::cout, std::cin
#include <iomanip>  // std:setprecision
#include <math.h>

using std::cout;
using std::cin;
using std::setprecision;

const double phi ( ( pow(5, 0.5) + 1 ) / 2 );

long fibonacci(int term)
{
  /* Define the Nth Fibonacci number as the result of the Binet formula
     with the term as the argument */
  long fibo;
  fibo  = ( pow(phi, term) - pow(-phi, -term) ) / pow(5, 0.5);

  // Return the number
  return fibo;
}

double phiApprox(int iter)
{
  double approx;
  double term1, term2;
  term1 = fibonacci(iter);
  term2 = fibonacci(iter+1);
  approx = term2 / term1;
  
  return approx;
}

int main()
{  
  int iters;
  cout << "How many interations would you like to do? ";
  cin >> iters;
  double approx;
  approx = phiApprox(iters);
  cout << setprecision(iters/5) << "Approximate value:\t" << approx     << "\n";
  cout << setprecision(iters/5) << "True Value:\t\t"      << phi        << "\n";
  cout << setprecision(iters/5) << "Difference:\t\t"      << phi-approx << "\n";
  return 0;
}
