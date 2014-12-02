// Variables
// alpha (double)	a scalar multiple
// beta (double)	a scalar multiple
// incX (int) 		the increment for the vector elements in X
// incY (int)		the increment for the vector elements in Y
// lda (int)		the leading dimension of a
// N (int) 			the number of elements in X and  Y
// Trans (char)		transpose specification 
//					'N' = none
//					'T' = transpose
//					'C' = conjugate transpose
// X (double) 		a vector of double-type elements
// Y (double)		a vector of double-type elements

//------------------------------------------------------ Level 1 Routines -- //
// BLAS Level 1 routines and functions perform vector-vector operations. 

int test(){
  printf("test.\n");
}

// ?copy - Copies vector to another vector.
extern void dcopy_(int* N,double* X, int* incX, double* Y, int* incY);

// ?dot - Computes a vector-vector dot product
extern double ddot_(int* N, double* X, int* incX, double* Y, int* incY);

// ?scal - Computes the product of a vector by a scalar.
extern void dscal_(int* N,double* alpha,double* X, int* incX); 

//------------------------------------------------------ Level 2 Routines -- //
// BLAS Level 2 routines perform matrix-vector operations.

// ?gemv
// Computes a matrix-vector product using a general matrix
extern void dgemv_(char* Trans, int* M, int* N, double* alpha, 
					double* A, int* lda, double* X, int* incX, 
					double* beta, double* Y, int* incY );

//------------------------------------------------------ Level 3 Routines -- //
// BLAS Level 3 routines perform matrix-matrix operations.

// ?gemm
// Computes a scalar-matrix-matrix product and adds the result to a scalar-matrix product.
extern void dgemm_(char * transa, char* transb, int* m, int* n, int* k, double* alpha, double* A, int* lda, double* B, int* ldb, double* beta, double* C, int* ldc);


