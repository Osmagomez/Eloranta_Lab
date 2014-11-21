/*
  This is an example program using the header file
  dsygv.h, my implementation of the LAPACK symmetric
  generalized eigenvalue problem solver routine.  See
  that header file for more documentation on its use.
  
  We need two matrices for our problem, taking the
  form Ax = lBx.  For the matrix A, we take
  A[i,j] = i^j + j^i.  For B, let B[i,j] = i^(.5 j) + j^(.5 i).
  The output of this program should be:

  Eigenvalue  0: 0.890643
  Eigenvector 0: (0.889234, -0.434701, 0.141084, -0.0198101)
  Eigenvalue  1: 2.46414
  Eigenvector 1: (0.5695, -0.778192, 0.262117, -0.0371761)
  Eigenvalue  2: 11.7716
  Eigenvector 2: (0.381569, -0.779935, 0.490691, -0.0730036)
  Eigenvalue  3: 207.398
  Eigenvector 3: (-0.285119, 0.710275, -0.617634, 0.180955)

  Scot Shaw
  28 September 1999
*/

// Begin with some standard include files.

#include <math.h>
#include <stdio.h>
#include <fstream.h>
#include "dsygv.h"

void main(int nargs, char *args[])
{
  double **A, **B, *Evals, **Evecs;
  int i, j, k;
  
  int n=4;
  
  // Generate the matrix for my equation
  
  A = new double*[n];
  for (i=0; i<n; i++) A[i] = new double[n];
  for (i=0; i<n; i++) for (j=i; j<n; j++)
    A[i][j] = pow(i+1, j+1) + pow(j+1, i+1);
  
  B = new double*[n];
  for (i=0; i<n; i++) B[i] = new double[n];
  for (i=0; i<n; i++) for (j=i; j<n; j++)
    B[i][j] = pow(i+1, .5*(j+1)) + pow(j+1, .5*(i+1));
    
  // Call the LAPACK solver
  
  Evals = new double[n]; 
  Evecs = new double*[n];
  for (i=0; i<n; i++) Evecs[i] = new double[n];

  dsygv(A, B, n, Evals, Evecs);
  
  // Output the results

  for (i=0; i<n; i++) {
    cout << "Eigenvalue  " << i << ": " << Evals[i] << "\n";
    cout << "Eigenvector " << i << ": ("
	 << Evecs[0][i] << ", "
	 << Evecs[1][i] << ", "
	 << Evecs[2][i] << ", "
	 << Evecs[3][i] << ")\n";
  }
}
