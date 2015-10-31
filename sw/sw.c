// This file is generated from test alphabets program by code generator in alphaz
// To compile this code, use -lm option for math library.

// Includes
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <float.h>

#include "external_functions.h"

// Common Macros
#define max(x, y)   ((x)>(y) ? (x) : (y))
#define MAX(x, y)	((x)>(y) ? (x) : (y))
#define min(x, y)   ((x)>(y) ? (y) : (x))
#define MIN(x, y)	((x)>(y) ? (y) : (x))
#define CEILD(n,d)  (int)ceil(((double)(n))/((double)(d)))
#define ceild(n,d)  (int)ceil(((double)(n))/((double)(d)))
#define FLOORD(n,d) (int)floor(((double)(n))/((double)(d)))
#define floord(n,d) (int)floor(((double)(n))/((double)(d)))
#define CDIV(x,y)    CEILD((x),(y))
#define div(x,y)    CDIV((x),(y))
#define FDIV(x,y)    FLOORD((x),(y))
#define LB_SHIFT(b,s)  ((int)ceild(b,s) * s)
#define MOD(i,j)   ((i)%(j))
#define mallocCheck(v,s,d) if ((v) == NULL) { printf("Failed to allocate memory for %s : size=%lu\n", "sizeof(d)*(s)", sizeof(d)*(s)); exit(-1); }

// Common functions for min and max
//functions for integer max
inline int __max_int(int x, int y){
	return ((x)>(y) ? (x) : (y));
}

inline short __max_short(short x, short y){
	return ((x)>(y) ? (x) : (y));
}

inline long __max_long(long x, long y){
	return ((x)>(y) ? (x) : (y));
}

inline unsigned int __max_unsigned_int(unsigned int x, unsigned int y){
	return ((x)>(y) ? (x) : (y));
}

inline unsigned short __max_unsigned_short(unsigned short x, unsigned short y){
	return ((x)>(y) ? (x) : (y));
}

//function for float max
inline float __max_float(float x, float y){
	return ((x)>(y) ? (x) : (y));
}

//function for double max
inline double __max_double(double x, double y){
	return ((x)>(y) ? (x) : (y));
}

//function for integer min
inline int __min_int(int x, int y){
	return ((x)>(y) ? (y) : (x));
}

inline short __min_short(short x, short y){
	return ((x)>(y) ? (y) : (x));
}

inline long __min_long(long x, long y){
	return ((x)>(y) ? (y) : (x));
}

inline unsigned int __min_unsigned_int(unsigned int x, unsigned int y){
	return ((x)>(y) ? (y) : (x));
}

inline unsigned short __min_unsigned_short(unsigned short x, unsigned short y){
	return ((x)>(y) ? (y) : (x));
}

inline unsigned long __min_unsigned_long(unsigned long x, unsigned long y){
	return ((x)>(y) ? (y) : (x));
}

inline float __min_float(float x, float y){
	return ((x)>(y) ? (y) : (x));
}

inline double __min_double(double x, double y){
	return ((x)>(y) ? (y) : (x));
}



//SubSystem Function Declarations
void sw_base(long, long, short*, short*, int*, int*, int*, int*, int*);

//Local Function Declarations
short* memory_allocation_for_UseEquation_TempA_sub_input_0(long, long, long, long, int, int, int, int, int);
void value_copy_for_UseEquation_TempA_sub_input_0(long, long, long, long, int, int, int, int, int, short**, short*);
void memory_free_for_UseEquation_TempA_sub_input_0(long, long, long, long, int, int, int, int, int, short*);
short* memory_allocation_for_UseEquation_TempA_sub_input_1(long, long, long, long, int, int, int, int, int);
void value_copy_for_UseEquation_TempA_sub_input_1(long, long, long, long, int, int, int, int, int, short**, short*);
void memory_free_for_UseEquation_TempA_sub_input_1(long, long, long, long, int, int, int, int, int, short*);
int* memory_allocation_for_UseEquation_TempA_sub_input_2(long, long, long, long, int, int, int, int, int);
void value_copy_for_UseEquation_TempA_sub_input_2(long, long, long, long, int, int, int, int, int, int***, int*);
void memory_free_for_UseEquation_TempA_sub_input_2(long, long, long, long, int, int, int, int, int, int*);
int* memory_allocation_for_UseEquation_TempA_sub_input_3(long, long, long, long, int, int, int, int, int);
void value_copy_for_UseEquation_TempA_sub_input_3(long, long, long, long, int, int, int, int, int, int***, int*);
void memory_free_for_UseEquation_TempA_sub_input_3(long, long, long, long, int, int, int, int, int, int*);
void value_copy_for_UseEquation_TempA_sub_input_4(long, long, long, long, int, int, int, int, int, int**, int*);
int* memory_allocation_for_UseEquation_TempA_sub_output_0(long, long, long, long, int, int, int, int, int);
void value_copy_for_UseEquation_TempA_sub_output_0(long, long, long, long, int, int, int, int, int, int*, int***);
void memory_free_for_UseEquation_TempA_sub_output_0(long, long, long, long, int, int, int, int, int, int*);
int* memory_allocation_for_UseEquation_TempA_sub_output_1(long, long, long, long, int, int, int, int, int);
void value_copy_for_UseEquation_TempA_sub_output_1(long, long, long, long, int, int, int, int, int, int*, int***);
void memory_free_for_UseEquation_TempA_sub_output_1(long, long, long, long, int, int, int, int, int, int*);

//Memory Macros
#define seq_A(i,j) seq_A[i][j]
#define seq_B(i,j) seq_B[i][j]
#define TempA_sub(i,j,k) TempA_sub[i][j][k]
#define TempB_sub(i,j,k) TempB_sub[i][j][k]
#define TempA(i,j,k) TempA[i][j][k]
#define TempB(i,j,k) TempB[i][j][k]
#define Tempc(i,j) Tempc[i][j]
#define Aout(i,j) Aout[i][j]
#define Bout(i,j) Bout[i][j]
#define UseEquation_TempA_sub_input_0(i5) UseEquation_TempA_sub_input_0[i5]
#define UseEquation_TempA_sub_input_1(i5) UseEquation_TempA_sub_input_1[i5]
#define UseEquation_TempA_sub_input_2(i5) UseEquation_TempA_sub_input_2[i5]
#define UseEquation_TempA_sub_input_3(i5) UseEquation_TempA_sub_input_3[i5]
#define UseEquation_TempA_sub_output_0(i5) UseEquation_TempA_sub_output_0[i5]
#define UseEquation_TempA_sub_output_1(i5) UseEquation_TempA_sub_output_1[i5]

void sw(long M, long N, long bM, long bN, short** seq_A, short** seq_B, int** Aout, int** Bout){
	///Parameter checking
	if (!((M >= 2 && N >= 2 && bM >= 2 && bN >= 2))) {
		printf("The value of parameters are not valid.\n");
		exit(-1);
	}
	//Memory Allocation
	int mz1, mz2, mz3;
	
	int* _lin_TempA_sub = (int*)malloc(sizeof(int)*((M) * (N) * (bM)));
	mallocCheck(_lin_TempA_sub, ((M) * (N) * (bM)), int);
	int*** TempA_sub = (int***)malloc(sizeof(int**)*(M));
	mallocCheck(TempA_sub, (M), int**);
	for (mz1=0;mz1 < M; mz1++) {
		TempA_sub[mz1] = (int**)malloc(sizeof(int*)*(N));
		mallocCheck(TempA_sub[mz1], (N), int*);
		for (mz2=0;mz2 < N; mz2++) {
			TempA_sub[mz1][mz2] = &_lin_TempA_sub[(mz1*((N) * (bM))) + (mz2*(bM))];
		}
	}
	
	int* _lin_TempB_sub = (int*)malloc(sizeof(int)*((M) * (N) * (bN)));
	mallocCheck(_lin_TempB_sub, ((M) * (N) * (bN)), int);
	int*** TempB_sub = (int***)malloc(sizeof(int**)*(M));
	mallocCheck(TempB_sub, (M), int**);
	for (mz1=0;mz1 < M; mz1++) {
		TempB_sub[mz1] = (int**)malloc(sizeof(int*)*(N));
		mallocCheck(TempB_sub[mz1], (N), int*);
		for (mz2=0;mz2 < N; mz2++) {
			TempB_sub[mz1][mz2] = &_lin_TempB_sub[(mz1*((N) * (bN))) + (mz2*(bN))];
		}
	}
	
	int* _lin_TempA = (int*)malloc(sizeof(int)*((M) * (N+1) * (bM)));
	mallocCheck(_lin_TempA, ((M) * (N+1) * (bM)), int);
	int*** TempA = (int***)malloc(sizeof(int**)*(M));
	mallocCheck(TempA, (M), int**);
	for (mz1=0;mz1 < M; mz1++) {
		TempA[mz1] = (int**)malloc(sizeof(int*)*(N+1));
		mallocCheck(TempA[mz1], (N+1), int*);
		for (mz2=0;mz2 < N+1; mz2++) {
			TempA[mz1][mz2] = &_lin_TempA[(mz1*((N+1) * (bM))) + (mz2*(bM))];
		}
	}
	
	int* _lin_TempB = (int*)malloc(sizeof(int)*((M+1) * (N) * (bN)));
	mallocCheck(_lin_TempB, ((M+1) * (N) * (bN)), int);
	int*** TempB = (int***)malloc(sizeof(int**)*(M+1));
	mallocCheck(TempB, (M+1), int**);
	for (mz1=0;mz1 < M+1; mz1++) {
		TempB[mz1] = (int**)malloc(sizeof(int*)*(N));
		mallocCheck(TempB[mz1], (N), int*);
		for (mz2=0;mz2 < N; mz2++) {
			TempB[mz1][mz2] = &_lin_TempB[(mz1*((N) * (bN))) + (mz2*(bN))];
		}
	}
	
	int* _lin_Tempc = (int*)malloc(sizeof(int)*((M) * (N)));
	mallocCheck(_lin_Tempc, ((M) * (N)), int);
	int** Tempc = (int**)malloc(sizeof(int*)*(M));
	mallocCheck(Tempc, (M), int*);
	for (mz1=0;mz1 < M; mz1++) {
		Tempc[mz1] = &_lin_Tempc[(mz1*(N))];
	}
	short* UseEquation_TempA_sub_input_0;
	
	short* UseEquation_TempA_sub_input_1;
	
	int* UseEquation_TempA_sub_input_2;
	
	int* UseEquation_TempA_sub_input_3;
	
	int UseEquation_TempA_sub_input_4;
	int* UseEquation_TempA_sub_output_0;
	
	int* UseEquation_TempA_sub_output_1;
	#define S0(i,j,i2,i3,i4) Tempc(j-i2+1,i2) = 0
	#define S1(i,j,i2,i3,i4) Tempc(j-i2+1,i2) = TempA(j-i2+1,i2,bM-1)
	#define S2(i,j,k,i3,i4) TempA(j-k+1,k,i4) = 0
	#define S3(i,j,k,i3,i4) TempA(j-k+1,k,i4) = TempA_sub(j-k+1,k-1,i4)
	#define S4(i,j,k,i3,i4) TempB(j-k+1,k,i4) = 0
	#define S5(i,j,k,i3,i4) TempB(j-k+1,k,i4) = TempB_sub(j-k,k,i4)
	#define S6(i,j,i2,i3,i4) Aout(j,i2) = TempA(j,N,i2)
	#define S7(i,j,i2,i3,i4) Bout(j,i2) = TempB(M,j,i2)
	#define S8(i,j,i2,i3,i4) UseEquation_TempA_sub_input_0=memory_allocation_for_UseEquation_TempA_sub_input_0(M,N,bM,bN,i,j,i2,i3,i4)
	#define S9(i,j,i2,i3,i4) value_copy_for_UseEquation_TempA_sub_input_0(M,N,bM,bN,i,j,i2,i3,i4,seq_A,UseEquation_TempA_sub_input_0)
	#define S10(i,j,i2,i3,i4) memory_free_for_UseEquation_TempA_sub_input_0(M,N,bM,bN,i,j,i2,i3,i4,UseEquation_TempA_sub_input_0)
	#define S11(i,j,i2,i3,i4) UseEquation_TempA_sub_input_1=memory_allocation_for_UseEquation_TempA_sub_input_1(M,N,bM,bN,i,j,i2,i3,i4)
	#define S12(i,j,i2,i3,i4) value_copy_for_UseEquation_TempA_sub_input_1(M,N,bM,bN,i,j,i2,i3,i4,seq_B,UseEquation_TempA_sub_input_1)
	#define S13(i,j,i2,i3,i4) memory_free_for_UseEquation_TempA_sub_input_1(M,N,bM,bN,i,j,i2,i3,i4,UseEquation_TempA_sub_input_1)
	#define S14(i,j,i2,i3,i4) UseEquation_TempA_sub_input_2=memory_allocation_for_UseEquation_TempA_sub_input_2(M,N,bM,bN,i,j,i2,i3,i4)
	#define S15(i,j,i2,i3,i4) value_copy_for_UseEquation_TempA_sub_input_2(M,N,bM,bN,i,j,i2,i3,i4,TempA,UseEquation_TempA_sub_input_2)
	#define S16(i,j,i2,i3,i4) memory_free_for_UseEquation_TempA_sub_input_2(M,N,bM,bN,i,j,i2,i3,i4,UseEquation_TempA_sub_input_2)
	#define S17(i,j,i2,i3,i4) UseEquation_TempA_sub_input_3=memory_allocation_for_UseEquation_TempA_sub_input_3(M,N,bM,bN,i,j,i2,i3,i4)
	#define S18(i,j,i2,i3,i4) value_copy_for_UseEquation_TempA_sub_input_3(M,N,bM,bN,i,j,i2,i3,i4,TempB,UseEquation_TempA_sub_input_3)
	#define S19(i,j,i2,i3,i4) memory_free_for_UseEquation_TempA_sub_input_3(M,N,bM,bN,i,j,i2,i3,i4,UseEquation_TempA_sub_input_3)
	#define S20(i,j,i2,i3,i4) value_copy_for_UseEquation_TempA_sub_input_4(M,N,bM,bN,i,j,i2,i3,i4,Tempc,&UseEquation_TempA_sub_input_4)
	#define S21(i,j,i2,i3,i4) UseEquation_TempA_sub_output_0=memory_allocation_for_UseEquation_TempA_sub_output_0(M,N,bM,bN,i,j,i2,i3,i4)
	#define S22(i,j,i2,i3,i4) value_copy_for_UseEquation_TempA_sub_output_0(M,N,bM,bN,i,j,i2,i3,i4,UseEquation_TempA_sub_output_0,TempA_sub)
	#define S23(i,j,i2,i3,i4) memory_free_for_UseEquation_TempA_sub_output_0(M,N,bM,bN,i,j,i2,i3,i4,UseEquation_TempA_sub_output_0)
	#define S24(i,j,i2,i3,i4) UseEquation_TempA_sub_output_1=memory_allocation_for_UseEquation_TempA_sub_output_1(M,N,bM,bN,i,j,i2,i3,i4)
	#define S25(i,j,i2,i3,i4) value_copy_for_UseEquation_TempA_sub_output_1(M,N,bM,bN,i,j,i2,i3,i4,UseEquation_TempA_sub_output_1,TempB_sub)
	#define S26(i,j,i2,i3,i4) memory_free_for_UseEquation_TempA_sub_output_1(M,N,bM,bN,i,j,i2,i3,i4,UseEquation_TempA_sub_output_1)
	#define S27(i,j,i2,i3,i4) sw_base(bM,bN,UseEquation_TempA_sub_input_0,UseEquation_TempA_sub_input_1,UseEquation_TempA_sub_input_2,UseEquation_TempA_sub_input_3,&UseEquation_TempA_sub_input_4,UseEquation_TempA_sub_output_0,UseEquation_TempA_sub_output_1)
	{
		//Domain
		//{i,j,i2,i3,i4|i4==bM && i3==2 && i2==j+1 && i==1 && M>=2 && N>=2 && bM>=2 && bN>=2 && j>=-1 && N>=j+2} || {i,j,i2,i3,i4|i4==bM && i3==2 && i2==0 && i==1 && M>=2 && N>=2 && bM>=2 && bN>=2 && j>=-1 && M>=j+2}
		//{i,j,i2,i3,i4|i4==bM && i3==2 && i==1 && j>=i2 && i2>=1 && M>=2 && N>=2 && bM>=2 && bN>=2 && N>=i2+1 && M+i2>=j+2}
		//{i,j,k,i3,i4|i3==2 && k==0 && i==1 && M>=2 && N>=2 && bM>=2 && bN>=2 && bM>=i4+1 && i4>=0 && M>=j+2 && j>=-1}
		//{i,j,k,i3,i4|i3==2 && i==1 && M>=2 && N>=2 && bM>=2 && bN>=2 && k>=1 && j>=k-1 && M+k>=j+2 && bM>=i4+1 && N>=k && i4>=0}
		//{i,j,k,i3,i4|i3==2 && k==j+1 && i==1 && M>=2 && N>=2 && bM>=2 && bN>=2 && bN>=i4+1 && i4>=0 && N>=j+2 && j>=-1}
		//{i,j,k,i3,i4|i3==2 && i==1 && M>=2 && N>=2 && bM>=2 && bN>=2 && j>=k && bN>=i4+1 && M+k>=j+1 && k>=0 && N>=k+1 && i4>=0}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i==2 && j>=0 && M>=j+1 && N>=2 && bM>=2 && i2>=0 && bM>=i2+1 && M>=2 && bN>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i==2 && M>=2 && bM>=2 && j>=0 && N>=j+1 && i2>=0 && bN>=i2+1 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==0 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==2 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==0 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==2 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==0 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==2 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==0 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==2 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==0 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==2 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==2 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==0 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==2 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==0 && i2==0 && j==0 && i==2 && bM>=2 && M>=2 && bN>=2 && N>=2}
		//{i,j,i2,i3,i4|i4==0 && i3==1 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		int c2,c3,c5;
		S8((0),(0),(0),(0),(0));
		S11((0),(0),(0),(0),(0));
		S14((0),(0),(0),(0),(0));
		S17((0),(0),(0),(0),(0));
		S21((0),(0),(0),(0),(0));
		S24((0),(0),(0),(0),(0));
		if ((bM >= bN+1)) {
			{
				for(c5=0;c5 <= bN-1;c5+=1)
				 {
				 	S2((1),(-1),(0),(2),(c5));
				 	S4((1),(-1),(0),(2),(c5));
				 }
				for(c5=bN;c5 <= bM-1;c5+=1)
				 {
				 	S2((1),(-1),(0),(2),(c5));
				 }
				S0((1),(-1),(0),(2),(bM));
			}
		}
		if ((bM <= bN-2)) {
			{
				for(c5=0;c5 <= bM-1;c5+=1)
				 {
				 	S2((1),(-1),(0),(2),(c5));
				 	S4((1),(-1),(0),(2),(c5));
				 }
				S0((1),(-1),(0),(2),(bM));
				S4((1),(-1),(0),(2),(bM));
				for(c5=bM+1;c5 <= bN-1;c5+=1)
				 {
				 	S4((1),(-1),(0),(2),(c5));
				 }
			}
		}
		if ((bM == bN-1)) {
			{
				for(c5=0;c5 <= bM-1;c5+=1)
				 {
				 	S2((1),(-1),(0),(2),(c5));
				 	S4((1),(-1),(0),(2),(c5));
				 }
				S0((1),(-1),(0),(2),(bM));
				S4((1),(-1),(0),(2),(bM));
			}
		}
		if ((bM == bN)) {
			{
				for(c5=0;c5 <= bM-1;c5+=1)
				 {
				 	S2((1),(-1),(0),(2),(c5));
				 	S4((1),(-1),(0),(2),(c5));
				 }
				S0((1),(-1),(0),(2),(bM));
			}
		}
		S9((1),(0),(0),(0),(0));
		S12((1),(0),(0),(0),(0));
		S15((1),(0),(0),(0),(0));
		S18((1),(0),(0),(0),(0));
		S20((1),(0),(0),(0),(0));
		S27((1),(0),(0),(1),(0));
		if ((bM >= bN+1)) {
			{
				S2((1),(0),(0),(2),(0));
				S5((1),(0),(0),(2),(0));
				S22((1),(0),(0),(2),(0));
				S25((1),(0),(0),(2),(0));
				for(c5=1;c5 <= bN-1;c5+=1)
				 {
				 	S2((1),(0),(0),(2),(c5));
				 	S5((1),(0),(0),(2),(c5));
				 }
				for(c5=bN;c5 <= bM-1;c5+=1)
				 {
				 	S2((1),(0),(0),(2),(c5));
				 }
				S0((1),(0),(0),(2),(bM));
				for(c5=0;c5 <= bN-1;c5+=1)
				 {
				 	S3((1),(0),(1),(2),(c5));
				 	S4((1),(0),(1),(2),(c5));
				 }
				for(c5=bN;c5 <= bM-1;c5+=1)
				 {
				 	S3((1),(0),(1),(2),(c5));
				 }
				S0((1),(0),(1),(2),(bM));
			}
		}
		if ((bM <= bN-2)) {
			{
				S2((1),(0),(0),(2),(0));
				S5((1),(0),(0),(2),(0));
				S22((1),(0),(0),(2),(0));
				S25((1),(0),(0),(2),(0));
				for(c5=1;c5 <= bM-1;c5+=1)
				 {
				 	S2((1),(0),(0),(2),(c5));
				 	S5((1),(0),(0),(2),(c5));
				 }
				S0((1),(0),(0),(2),(bM));
				S5((1),(0),(0),(2),(bM));
				for(c5=bM+1;c5 <= bN-1;c5+=1)
				 {
				 	S5((1),(0),(0),(2),(c5));
				 }
				for(c5=0;c5 <= bM-1;c5+=1)
				 {
				 	S3((1),(0),(1),(2),(c5));
				 	S4((1),(0),(1),(2),(c5));
				 }
				S0((1),(0),(1),(2),(bM));
				S4((1),(0),(1),(2),(bM));
				for(c5=bM+1;c5 <= bN-1;c5+=1)
				 {
				 	S4((1),(0),(1),(2),(c5));
				 }
			}
		}
		if ((bM == bN-1)) {
			{
				S2((1),(0),(0),(2),(0));
				S5((1),(0),(0),(2),(0));
				S22((1),(0),(0),(2),(0));
				S25((1),(0),(0),(2),(0));
				for(c5=1;c5 <= bM-1;c5+=1)
				 {
				 	S2((1),(0),(0),(2),(c5));
				 	S5((1),(0),(0),(2),(c5));
				 }
				S0((1),(0),(0),(2),(bM));
				S5((1),(0),(0),(2),(bM));
				for(c5=0;c5 <= bM-1;c5+=1)
				 {
				 	S3((1),(0),(1),(2),(c5));
				 	S4((1),(0),(1),(2),(c5));
				 }
				S0((1),(0),(1),(2),(bM));
				S4((1),(0),(1),(2),(bM));
			}
		}
		if ((bM == bN)) {
			{
				S2((1),(0),(0),(2),(0));
				S5((1),(0),(0),(2),(0));
				S22((1),(0),(0),(2),(0));
				S25((1),(0),(0),(2),(0));
				for(c5=1;c5 <= bM-1;c5+=1)
				 {
				 	S2((1),(0),(0),(2),(c5));
				 	S5((1),(0),(0),(2),(c5));
				 }
				S0((1),(0),(0),(2),(bM));
				for(c5=0;c5 <= bM-1;c5+=1)
				 {
				 	S3((1),(0),(1),(2),(c5));
				 	S4((1),(0),(1),(2),(c5));
				 }
				S0((1),(0),(1),(2),(bM));
			}
		}
		if ((bM >= bN+1)) {
			{
				for(c2=1;c2 <= min(M-2,N-2);c2+=1)
				 {
				 	S9((1),(c2),(0),(0),(0));
				 	S12((1),(c2),(0),(0),(0));
				 	S15((1),(c2),(0),(0),(0));
				 	S18((1),(c2),(0),(0),(0));
				 	S20((1),(c2),(0),(0),(0));
				 	S27((1),(c2),(0),(1),(0));
				 	S2((1),(c2),(0),(2),(0));
				 	S5((1),(c2),(0),(2),(0));
				 	S22((1),(c2),(0),(2),(0));
				 	S25((1),(c2),(0),(2),(0));
				 	for(c5=1;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S2((1),(c2),(0),(2),(c5));
				 	 	S5((1),(c2),(0),(2),(c5));
				 	 }
				 	for(c5=bN;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S2((1),(c2),(0),(2),(c5));
				 	 }
				 	S0((1),(c2),(0),(2),(bM));
				 	for(c3=1;c3 <= c2;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bN-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	for(c5=bN;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(c2+1),(2),(c5));
				 	 	S4((1),(c2),(c2+1),(2),(c5));
				 	 }
				 	for(c5=bN;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(c2+1),(2),(c5));
				 	 }
				 	S0((1),(c2),(c2+1),(2),(bM));
				 }
			}
		}
		if ((bM <= bN-2)) {
			{
				for(c2=1;c2 <= min(M-2,N-2);c2+=1)
				 {
				 	S9((1),(c2),(0),(0),(0));
				 	S12((1),(c2),(0),(0),(0));
				 	S15((1),(c2),(0),(0),(0));
				 	S18((1),(c2),(0),(0),(0));
				 	S20((1),(c2),(0),(0),(0));
				 	S27((1),(c2),(0),(1),(0));
				 	S2((1),(c2),(0),(2),(0));
				 	S5((1),(c2),(0),(2),(0));
				 	S22((1),(c2),(0),(2),(0));
				 	S25((1),(c2),(0),(2),(0));
				 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S2((1),(c2),(0),(2),(c5));
				 	 	S5((1),(c2),(0),(2),(c5));
				 	 }
				 	S0((1),(c2),(0),(2),(bM));
				 	S5((1),(c2),(0),(2),(bM));
				 	for(c5=bM+1;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S5((1),(c2),(0),(2),(c5));
				 	 }
				 	for(c3=1;c3 <= c2;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 	S5((1),(c2),(c3),(2),(bM));
				 	 	for(c5=bM+1;c5 <= bN-1;c5+=1)
				 	 	 {
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(c2+1),(2),(c5));
				 	 	S4((1),(c2),(c2+1),(2),(c5));
				 	 }
				 	S0((1),(c2),(c2+1),(2),(bM));
				 	S4((1),(c2),(c2+1),(2),(bM));
				 	for(c5=bM+1;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S4((1),(c2),(c2+1),(2),(c5));
				 	 }
				 }
			}
		}
		if ((bM == bN-1)) {
			{
				for(c2=1;c2 <= min(M-2,N-2);c2+=1)
				 {
				 	S9((1),(c2),(0),(0),(0));
				 	S12((1),(c2),(0),(0),(0));
				 	S15((1),(c2),(0),(0),(0));
				 	S18((1),(c2),(0),(0),(0));
				 	S20((1),(c2),(0),(0),(0));
				 	S27((1),(c2),(0),(1),(0));
				 	S2((1),(c2),(0),(2),(0));
				 	S5((1),(c2),(0),(2),(0));
				 	S22((1),(c2),(0),(2),(0));
				 	S25((1),(c2),(0),(2),(0));
				 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S2((1),(c2),(0),(2),(c5));
				 	 	S5((1),(c2),(0),(2),(c5));
				 	 }
				 	S0((1),(c2),(0),(2),(bM));
				 	S5((1),(c2),(0),(2),(bM));
				 	for(c3=1;c3 <= c2;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 	S5((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(c2+1),(2),(c5));
				 	 	S4((1),(c2),(c2+1),(2),(c5));
				 	 }
				 	S0((1),(c2),(c2+1),(2),(bM));
				 	S4((1),(c2),(c2+1),(2),(bM));
				 }
			}
		}
		if ((bM == bN)) {
			{
				for(c2=1;c2 <= min(M-2,N-2);c2+=1)
				 {
				 	S9((1),(c2),(0),(0),(0));
				 	S12((1),(c2),(0),(0),(0));
				 	S15((1),(c2),(0),(0),(0));
				 	S18((1),(c2),(0),(0),(0));
				 	S20((1),(c2),(0),(0),(0));
				 	S27((1),(c2),(0),(1),(0));
				 	S2((1),(c2),(0),(2),(0));
				 	S5((1),(c2),(0),(2),(0));
				 	S22((1),(c2),(0),(2),(0));
				 	S25((1),(c2),(0),(2),(0));
				 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S2((1),(c2),(0),(2),(c5));
				 	 	S5((1),(c2),(0),(2),(c5));
				 	 }
				 	S0((1),(c2),(0),(2),(bM));
				 	for(c3=1;c3 <= c2;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(c2+1),(2),(c5));
				 	 	S4((1),(c2),(c2+1),(2),(c5));
				 	 }
				 	S0((1),(c2),(c2+1),(2),(bM));
				 }
			}
		}
		if ((bM >= bN+1)) {
			{
				for(c2=N-1;c2 <= M-2;c2+=1)
				 {
				 	S9((1),(c2),(0),(0),(0));
				 	S12((1),(c2),(0),(0),(0));
				 	S15((1),(c2),(0),(0),(0));
				 	S18((1),(c2),(0),(0),(0));
				 	S20((1),(c2),(0),(0),(0));
				 	S27((1),(c2),(0),(1),(0));
				 	S2((1),(c2),(0),(2),(0));
				 	S5((1),(c2),(0),(2),(0));
				 	S22((1),(c2),(0),(2),(0));
				 	S25((1),(c2),(0),(2),(0));
				 	for(c5=1;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S2((1),(c2),(0),(2),(c5));
				 	 	S5((1),(c2),(0),(2),(c5));
				 	 }
				 	for(c5=bN;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S2((1),(c2),(0),(2),(c5));
				 	 }
				 	S0((1),(c2),(0),(2),(bM));
				 	for(c3=1;c3 <= N-1;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bN-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	for(c5=bN;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(N),(2),(c5));
				 	 }
				 }
			}
		}
		if ((bM <= bN-2)) {
			{
				for(c2=N-1;c2 <= M-2;c2+=1)
				 {
				 	S9((1),(c2),(0),(0),(0));
				 	S12((1),(c2),(0),(0),(0));
				 	S15((1),(c2),(0),(0),(0));
				 	S18((1),(c2),(0),(0),(0));
				 	S20((1),(c2),(0),(0),(0));
				 	S27((1),(c2),(0),(1),(0));
				 	S2((1),(c2),(0),(2),(0));
				 	S5((1),(c2),(0),(2),(0));
				 	S22((1),(c2),(0),(2),(0));
				 	S25((1),(c2),(0),(2),(0));
				 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S2((1),(c2),(0),(2),(c5));
				 	 	S5((1),(c2),(0),(2),(c5));
				 	 }
				 	S0((1),(c2),(0),(2),(bM));
				 	S5((1),(c2),(0),(2),(bM));
				 	for(c5=bM+1;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S5((1),(c2),(0),(2),(c5));
				 	 }
				 	for(c3=1;c3 <= N-1;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 	S5((1),(c2),(c3),(2),(bM));
				 	 	for(c5=bM+1;c5 <= bN-1;c5+=1)
				 	 	 {
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(N),(2),(c5));
				 	 }
				 }
			}
		}
		if ((bM == bN-1)) {
			{
				for(c2=N-1;c2 <= M-2;c2+=1)
				 {
				 	S9((1),(c2),(0),(0),(0));
				 	S12((1),(c2),(0),(0),(0));
				 	S15((1),(c2),(0),(0),(0));
				 	S18((1),(c2),(0),(0),(0));
				 	S20((1),(c2),(0),(0),(0));
				 	S27((1),(c2),(0),(1),(0));
				 	S2((1),(c2),(0),(2),(0));
				 	S5((1),(c2),(0),(2),(0));
				 	S22((1),(c2),(0),(2),(0));
				 	S25((1),(c2),(0),(2),(0));
				 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S2((1),(c2),(0),(2),(c5));
				 	 	S5((1),(c2),(0),(2),(c5));
				 	 }
				 	S0((1),(c2),(0),(2),(bM));
				 	S5((1),(c2),(0),(2),(bM));
				 	for(c3=1;c3 <= N-1;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 	S5((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(N),(2),(c5));
				 	 }
				 }
			}
		}
		if ((bM == bN)) {
			{
				for(c2=N-1;c2 <= M-2;c2+=1)
				 {
				 	S9((1),(c2),(0),(0),(0));
				 	S12((1),(c2),(0),(0),(0));
				 	S15((1),(c2),(0),(0),(0));
				 	S18((1),(c2),(0),(0),(0));
				 	S20((1),(c2),(0),(0),(0));
				 	S27((1),(c2),(0),(1),(0));
				 	S2((1),(c2),(0),(2),(0));
				 	S5((1),(c2),(0),(2),(0));
				 	S22((1),(c2),(0),(2),(0));
				 	S25((1),(c2),(0),(2),(0));
				 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S2((1),(c2),(0),(2),(c5));
				 	 	S5((1),(c2),(0),(2),(c5));
				 	 }
				 	S0((1),(c2),(0),(2),(bM));
				 	for(c3=1;c3 <= N-1;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(N),(2),(c5));
				 	 }
				 }
			}
		}
		if ((bM <= bN-2)) {
			{
				for(c2=M-1;c2 <= N-2;c2+=1)
				 {
				 	S9((1),(c2),(c2-M+1),(0),(0));
				 	S12((1),(c2),(c2-M+1),(0),(0));
				 	S15((1),(c2),(c2-M+1),(0),(0));
				 	S18((1),(c2),(c2-M+1),(0),(0));
				 	S20((1),(c2),(c2-M+1),(0),(0));
				 	S27((1),(c2),(c2-M+1),(1),(0));
				 	S5((1),(c2),(c2-M+1),(2),(0));
				 	S22((1),(c2),(c2-M+1),(2),(0));
				 	S25((1),(c2),(c2-M+1),(2),(0));
				 	for(c5=1;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S5((1),(c2),(c2-M+1),(2),(c5));
				 	 }
				 	for(c3=c2-M+2;c3 <= c2;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 	S5((1),(c2),(c3),(2),(bM));
				 	 	for(c5=bM+1;c5 <= bN-1;c5+=1)
				 	 	 {
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(c2+1),(2),(c5));
				 	 	S4((1),(c2),(c2+1),(2),(c5));
				 	 }
				 	S0((1),(c2),(c2+1),(2),(bM));
				 	S4((1),(c2),(c2+1),(2),(bM));
				 	for(c5=bM+1;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S4((1),(c2),(c2+1),(2),(c5));
				 	 }
				 }
			}
		}
		if ((bM == bN-1)) {
			{
				for(c2=M-1;c2 <= N-2;c2+=1)
				 {
				 	S9((1),(c2),(c2-M+1),(0),(0));
				 	S12((1),(c2),(c2-M+1),(0),(0));
				 	S15((1),(c2),(c2-M+1),(0),(0));
				 	S18((1),(c2),(c2-M+1),(0),(0));
				 	S20((1),(c2),(c2-M+1),(0),(0));
				 	S27((1),(c2),(c2-M+1),(1),(0));
				 	S5((1),(c2),(c2-M+1),(2),(0));
				 	S22((1),(c2),(c2-M+1),(2),(0));
				 	S25((1),(c2),(c2-M+1),(2),(0));
				 	for(c5=1;c5 <= bM;c5+=1)
				 	 {
				 	 	S5((1),(c2),(c2-M+1),(2),(c5));
				 	 }
				 	for(c3=c2-M+2;c3 <= c2;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 	S5((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(c2+1),(2),(c5));
				 	 	S4((1),(c2),(c2+1),(2),(c5));
				 	 }
				 	S0((1),(c2),(c2+1),(2),(bM));
				 	S4((1),(c2),(c2+1),(2),(bM));
				 }
			}
		}
		if ((bM >= bN+1)) {
			{
				for(c2=M-1;c2 <= N-2;c2+=1)
				 {
				 	S9((1),(c2),(c2-M+1),(0),(0));
				 	S12((1),(c2),(c2-M+1),(0),(0));
				 	S15((1),(c2),(c2-M+1),(0),(0));
				 	S18((1),(c2),(c2-M+1),(0),(0));
				 	S20((1),(c2),(c2-M+1),(0),(0));
				 	S27((1),(c2),(c2-M+1),(1),(0));
				 	S5((1),(c2),(c2-M+1),(2),(0));
				 	S22((1),(c2),(c2-M+1),(2),(0));
				 	S25((1),(c2),(c2-M+1),(2),(0));
				 	for(c5=1;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S5((1),(c2),(c2-M+1),(2),(c5));
				 	 }
				 	for(c3=c2-M+2;c3 <= c2;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bN-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	for(c5=bN;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(c2+1),(2),(c5));
				 	 	S4((1),(c2),(c2+1),(2),(c5));
				 	 }
				 	for(c5=bN;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(c2+1),(2),(c5));
				 	 }
				 	S0((1),(c2),(c2+1),(2),(bM));
				 }
			}
		}
		if ((bM == bN)) {
			{
				for(c2=M-1;c2 <= N-2;c2+=1)
				 {
				 	S9((1),(c2),(c2-M+1),(0),(0));
				 	S12((1),(c2),(c2-M+1),(0),(0));
				 	S15((1),(c2),(c2-M+1),(0),(0));
				 	S18((1),(c2),(c2-M+1),(0),(0));
				 	S20((1),(c2),(c2-M+1),(0),(0));
				 	S27((1),(c2),(c2-M+1),(1),(0));
				 	S5((1),(c2),(c2-M+1),(2),(0));
				 	S22((1),(c2),(c2-M+1),(2),(0));
				 	S25((1),(c2),(c2-M+1),(2),(0));
				 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S5((1),(c2),(c2-M+1),(2),(c5));
				 	 }
				 	for(c3=c2-M+2;c3 <= c2;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(c2+1),(2),(c5));
				 	 	S4((1),(c2),(c2+1),(2),(c5));
				 	 }
				 	S0((1),(c2),(c2+1),(2),(bM));
				 }
			}
		}
		if ((bM <= bN-2)) {
			{
				for(c2=max(M-1,N-1);c2 <= M+N-3;c2+=1)
				 {
				 	S9((1),(c2),(c2-M+1),(0),(0));
				 	S12((1),(c2),(c2-M+1),(0),(0));
				 	S15((1),(c2),(c2-M+1),(0),(0));
				 	S18((1),(c2),(c2-M+1),(0),(0));
				 	S20((1),(c2),(c2-M+1),(0),(0));
				 	S27((1),(c2),(c2-M+1),(1),(0));
				 	S5((1),(c2),(c2-M+1),(2),(0));
				 	S22((1),(c2),(c2-M+1),(2),(0));
				 	S25((1),(c2),(c2-M+1),(2),(0));
				 	for(c5=1;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S5((1),(c2),(c2-M+1),(2),(c5));
				 	 }
				 	for(c3=c2-M+2;c3 <= N-1;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 	S5((1),(c2),(c3),(2),(bM));
				 	 	for(c5=bM+1;c5 <= bN-1;c5+=1)
				 	 	 {
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(N),(2),(c5));
				 	 }
				 }
			}
		}
		if ((bM == bN-1)) {
			{
				for(c2=max(M-1,N-1);c2 <= M+N-3;c2+=1)
				 {
				 	S9((1),(c2),(c2-M+1),(0),(0));
				 	S12((1),(c2),(c2-M+1),(0),(0));
				 	S15((1),(c2),(c2-M+1),(0),(0));
				 	S18((1),(c2),(c2-M+1),(0),(0));
				 	S20((1),(c2),(c2-M+1),(0),(0));
				 	S27((1),(c2),(c2-M+1),(1),(0));
				 	S5((1),(c2),(c2-M+1),(2),(0));
				 	S22((1),(c2),(c2-M+1),(2),(0));
				 	S25((1),(c2),(c2-M+1),(2),(0));
				 	for(c5=1;c5 <= bM;c5+=1)
				 	 {
				 	 	S5((1),(c2),(c2-M+1),(2),(c5));
				 	 }
				 	for(c3=c2-M+2;c3 <= N-1;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 	S5((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(N),(2),(c5));
				 	 }
				 }
			}
		}
		if ((bM >= bN+1)) {
			{
				for(c2=max(M-1,N-1);c2 <= M+N-3;c2+=1)
				 {
				 	S9((1),(c2),(c2-M+1),(0),(0));
				 	S12((1),(c2),(c2-M+1),(0),(0));
				 	S15((1),(c2),(c2-M+1),(0),(0));
				 	S18((1),(c2),(c2-M+1),(0),(0));
				 	S20((1),(c2),(c2-M+1),(0),(0));
				 	S27((1),(c2),(c2-M+1),(1),(0));
				 	S5((1),(c2),(c2-M+1),(2),(0));
				 	S22((1),(c2),(c2-M+1),(2),(0));
				 	S25((1),(c2),(c2-M+1),(2),(0));
				 	for(c5=1;c5 <= bN-1;c5+=1)
				 	 {
				 	 	S5((1),(c2),(c2-M+1),(2),(c5));
				 	 }
				 	for(c3=c2-M+2;c3 <= N-1;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bN-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	for(c5=bN;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(N),(2),(c5));
				 	 }
				 }
			}
		}
		if ((bM == bN)) {
			{
				for(c2=max(M-1,N-1);c2 <= M+N-3;c2+=1)
				 {
				 	S9((1),(c2),(c2-M+1),(0),(0));
				 	S12((1),(c2),(c2-M+1),(0),(0));
				 	S15((1),(c2),(c2-M+1),(0),(0));
				 	S18((1),(c2),(c2-M+1),(0),(0));
				 	S20((1),(c2),(c2-M+1),(0),(0));
				 	S27((1),(c2),(c2-M+1),(1),(0));
				 	S5((1),(c2),(c2-M+1),(2),(0));
				 	S22((1),(c2),(c2-M+1),(2),(0));
				 	S25((1),(c2),(c2-M+1),(2),(0));
				 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S5((1),(c2),(c2-M+1),(2),(c5));
				 	 }
				 	for(c3=c2-M+2;c3 <= N-1;c3+=1)
				 	 {
				 	 	S9((1),(c2),(c3),(0),(0));
				 	 	S12((1),(c2),(c3),(0),(0));
				 	 	S15((1),(c2),(c3),(0),(0));
				 	 	S18((1),(c2),(c3),(0),(0));
				 	 	S20((1),(c2),(c3),(0),(0));
				 	 	S27((1),(c2),(c3),(1),(0));
				 	 	S3((1),(c2),(c3),(2),(0));
				 	 	S5((1),(c2),(c3),(2),(0));
				 	 	S22((1),(c2),(c3),(2),(0));
				 	 	S25((1),(c2),(c3),(2),(0));
				 	 	for(c5=1;c5 <= bM-1;c5+=1)
				 	 	 {
				 	 	 	S3((1),(c2),(c3),(2),(c5));
				 	 	 	S5((1),(c2),(c3),(2),(c5));
				 	 	 }
				 	 	S1((1),(c2),(c3),(2),(bM));
				 	 }
				 	for(c5=0;c5 <= bM-1;c5+=1)
				 	 {
				 	 	S3((1),(c2),(N),(2),(c5));
				 	 }
				 }
			}
		}
		S9((1),(M+N-2),(N-1),(0),(0));
		S12((1),(M+N-2),(N-1),(0),(0));
		S15((1),(M+N-2),(N-1),(0),(0));
		S18((1),(M+N-2),(N-1),(0),(0));
		S20((1),(M+N-2),(N-1),(0),(0));
		S27((1),(M+N-2),(N-1),(1),(0));
		S5((1),(M+N-2),(N-1),(2),(0));
		S22((1),(M+N-2),(N-1),(2),(0));
		S25((1),(M+N-2),(N-1),(2),(0));
		for(c5=1;c5 <= bN-1;c5+=1)
		 {
		 	S5((1),(M+N-2),(N-1),(2),(c5));
		 }
		for(c5=0;c5 <= bM-1;c5+=1)
		 {
		 	S3((1),(M+N-2),(N),(2),(c5));
		 }
		if ((bM >= bN+1)) {
			{
				S6((2),(0),(0),(0),(0));
				S7((2),(0),(0),(0),(0));
				S10((2),(0),(0),(0),(0));
				S13((2),(0),(0),(0),(0));
				S16((2),(0),(0),(0),(0));
				S19((2),(0),(0),(0),(0));
				S23((2),(0),(0),(0),(0));
				S26((2),(0),(0),(0),(0));
				for(c3=1;c3 <= bN-1;c3+=1)
				 {
				 	S6((2),(0),(c3),(0),(0));
				 	S7((2),(0),(c3),(0),(0));
				 }
				for(c3=bN;c3 <= bM-1;c3+=1)
				 {
				 	S6((2),(0),(c3),(0),(0));
				 }
			}
		}
		if ((bM <= bN-1)) {
			{
				S6((2),(0),(0),(0),(0));
				S7((2),(0),(0),(0),(0));
				S10((2),(0),(0),(0),(0));
				S13((2),(0),(0),(0),(0));
				S16((2),(0),(0),(0),(0));
				S19((2),(0),(0),(0),(0));
				S23((2),(0),(0),(0),(0));
				S26((2),(0),(0),(0),(0));
				for(c3=1;c3 <= bM-1;c3+=1)
				 {
				 	S6((2),(0),(c3),(0),(0));
				 	S7((2),(0),(c3),(0),(0));
				 }
				for(c3=bM;c3 <= bN-1;c3+=1)
				 {
				 	S7((2),(0),(c3),(0),(0));
				 }
			}
		}
		if ((bM == bN)) {
			{
				S6((2),(0),(0),(0),(0));
				S7((2),(0),(0),(0),(0));
				S10((2),(0),(0),(0),(0));
				S13((2),(0),(0),(0),(0));
				S16((2),(0),(0),(0),(0));
				S19((2),(0),(0),(0),(0));
				S23((2),(0),(0),(0),(0));
				S26((2),(0),(0),(0),(0));
				for(c3=1;c3 <= bM-1;c3+=1)
				 {
				 	S6((2),(0),(c3),(0),(0));
				 	S7((2),(0),(c3),(0),(0));
				 }
			}
		}
		if ((bM >= bN+1)) {
			{
				for(c2=1;c2 <= min(M-1,N-1);c2+=1)
				 {
				 	for(c3=0;c3 <= bN-1;c3+=1)
				 	 {
				 	 	S6((2),(c2),(c3),(0),(0));
				 	 	S7((2),(c2),(c3),(0),(0));
				 	 }
				 	for(c3=bN;c3 <= bM-1;c3+=1)
				 	 {
				 	 	S6((2),(c2),(c3),(0),(0));
				 	 }
				 }
			}
		}
		if ((bM <= bN-1)) {
			{
				for(c2=1;c2 <= min(M-1,N-1);c2+=1)
				 {
				 	for(c3=0;c3 <= bM-1;c3+=1)
				 	 {
				 	 	S6((2),(c2),(c3),(0),(0));
				 	 	S7((2),(c2),(c3),(0),(0));
				 	 }
				 	for(c3=bM;c3 <= bN-1;c3+=1)
				 	 {
				 	 	S7((2),(c2),(c3),(0),(0));
				 	 }
				 }
			}
		}
		if ((bM == bN)) {
			{
				for(c2=1;c2 <= min(M-1,N-1);c2+=1)
				 {
				 	for(c3=0;c3 <= bM-1;c3+=1)
				 	 {
				 	 	S6((2),(c2),(c3),(0),(0));
				 	 	S7((2),(c2),(c3),(0),(0));
				 	 }
				 }
			}
		}
		for(c2=N;c2 <= M-1;c2+=1)
		 {
		 	for(c3=0;c3 <= bM-1;c3+=1)
		 	 {
		 	 	S6((2),(c2),(c3),(0),(0));
		 	 }
		 }
		for(c2=M;c2 <= N-1;c2+=1)
		 {
		 	for(c3=0;c3 <= bN-1;c3+=1)
		 	 {
		 	 	S7((2),(c2),(c3),(0),(0));
		 	 }
		 }
	}
	#undef S0
	#undef S1
	#undef S2
	#undef S3
	#undef S4
	#undef S5
	#undef S6
	#undef S7
	#undef S8
	#undef S9
	#undef S10
	#undef S11
	#undef S12
	#undef S13
	#undef S14
	#undef S15
	#undef S16
	#undef S17
	#undef S18
	#undef S19
	#undef S20
	#undef S21
	#undef S22
	#undef S23
	#undef S24
	#undef S25
	#undef S26
	#undef S27
	
	//Memory Free
	free(_lin_TempA_sub);
	for (mz1=0;mz1 < M; mz1++) {
		free(TempA_sub[mz1]);
	}
	free(TempA_sub);
	
	free(_lin_TempB_sub);
	for (mz1=0;mz1 < M; mz1++) {
		free(TempB_sub[mz1]);
	}
	free(TempB_sub);
	
	free(_lin_TempA);
	for (mz1=0;mz1 < M; mz1++) {
		free(TempA[mz1]);
	}
	free(TempA);
	
	free(_lin_TempB);
	for (mz1=0;mz1 < M+1; mz1++) {
		free(TempB[mz1]);
	}
	free(TempB);
	
	free(_lin_Tempc);
	free(Tempc);
}
short* memory_allocation_for_UseEquation_TempA_sub_input_0(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4){
	//Memory Allocation
	int mz1;
	
	short* UseEquation_TempA_sub_input_0 = (short*)malloc(sizeof(short)*(bM));
	mallocCheck(UseEquation_TempA_sub_input_0, (bM), short);
	return UseEquation_TempA_sub_input_0;
}
void value_copy_for_UseEquation_TempA_sub_input_0(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, short** seq_A, short* UseEquation_TempA_sub_input_0){
	#define S0(i5) UseEquation_TempA_sub_input_0(i5) = seq_A(j-i2,i5)
	{
		//Domain
		//{i5|i4==0 && i3==1 && i==1 && j>=i2 && M+i2>=j+1 && i5>=0 && bM>=i5+1 && M>=2 && N>=2 && bM>=2 && bN>=2 && N>=i2+1 && i2>=0}
		int c1;
		for(c1=0;c1 <= bM-1;c1+=1)
		 {
		 	S0((c1));
		 }
	}
	#undef S0
}
void memory_free_for_UseEquation_TempA_sub_input_0(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, short* UseEquation_TempA_sub_input_0){
	
	//Memory Free
	free(UseEquation_TempA_sub_input_0);
}
short* memory_allocation_for_UseEquation_TempA_sub_input_1(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4){
	//Memory Allocation
	int mz1;
	
	short* UseEquation_TempA_sub_input_1 = (short*)malloc(sizeof(short)*(bN));
	mallocCheck(UseEquation_TempA_sub_input_1, (bN), short);
	return UseEquation_TempA_sub_input_1;
}
void value_copy_for_UseEquation_TempA_sub_input_1(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, short** seq_B, short* UseEquation_TempA_sub_input_1){
	#define S0(i5) UseEquation_TempA_sub_input_1(i5) = seq_B(i2,i5)
	{
		//Domain
		//{i5|i4==0 && i3==1 && i==1 && i2>=0 && N>=i2+1 && i5>=0 && bN>=i5+1 && M>=2 && N>=2 && bM>=2 && bN>=2 && j>=i2 && M+i2>=j+1}
		int c1;
		for(c1=0;c1 <= bN-1;c1+=1)
		 {
		 	S0((c1));
		 }
	}
	#undef S0
}
void memory_free_for_UseEquation_TempA_sub_input_1(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, short* UseEquation_TempA_sub_input_1){
	
	//Memory Free
	free(UseEquation_TempA_sub_input_1);
}
int* memory_allocation_for_UseEquation_TempA_sub_input_2(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4){
	//Memory Allocation
	int mz1;
	
	int* UseEquation_TempA_sub_input_2 = (int*)malloc(sizeof(int)*(bM));
	mallocCheck(UseEquation_TempA_sub_input_2, (bM), int);
	return UseEquation_TempA_sub_input_2;
}
void value_copy_for_UseEquation_TempA_sub_input_2(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, int*** TempA, int* UseEquation_TempA_sub_input_2){
	#define S0(i5) UseEquation_TempA_sub_input_2(i5) = TempA(j-i2,i2,i5)
	{
		//Domain
		//{i5|i4==0 && i3==1 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && i5>=0 && bM>=i5+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		int c1;
		for(c1=0;c1 <= bM-1;c1+=1)
		 {
		 	S0((c1));
		 }
	}
	#undef S0
}
void memory_free_for_UseEquation_TempA_sub_input_2(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, int* UseEquation_TempA_sub_input_2){
	
	//Memory Free
	free(UseEquation_TempA_sub_input_2);
}
int* memory_allocation_for_UseEquation_TempA_sub_input_3(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4){
	//Memory Allocation
	int mz1;
	
	int* UseEquation_TempA_sub_input_3 = (int*)malloc(sizeof(int)*(bN));
	mallocCheck(UseEquation_TempA_sub_input_3, (bN), int);
	return UseEquation_TempA_sub_input_3;
}
void value_copy_for_UseEquation_TempA_sub_input_3(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, int*** TempB, int* UseEquation_TempA_sub_input_3){
	#define S0(i5) UseEquation_TempA_sub_input_3(i5) = TempB(j-i2,i2,i5)
	{
		//Domain
		//{i5|i4==0 && i3==1 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && i5>=0 && bN>=i5+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		int c1;
		for(c1=0;c1 <= bN-1;c1+=1)
		 {
		 	S0((c1));
		 }
	}
	#undef S0
}
void memory_free_for_UseEquation_TempA_sub_input_3(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, int* UseEquation_TempA_sub_input_3){
	
	//Memory Free
	free(UseEquation_TempA_sub_input_3);
}
void value_copy_for_UseEquation_TempA_sub_input_4(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, int** Tempc, int* UseEquation_TempA_sub_input_4){
	#define S0() *UseEquation_TempA_sub_input_4 = Tempc(j-i2,i2)
	{
		//Domain
		//{|i4==0 && i3==1 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		S0();
	}
	#undef S0
}
int* memory_allocation_for_UseEquation_TempA_sub_output_0(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4){
	//Memory Allocation
	int mz1;
	
	int* UseEquation_TempA_sub_output_0 = (int*)malloc(sizeof(int)*(bM));
	mallocCheck(UseEquation_TempA_sub_output_0, (bM), int);
	return UseEquation_TempA_sub_output_0;
}
void value_copy_for_UseEquation_TempA_sub_output_0(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, int* UseEquation_TempA_sub_output_0, int*** TempA_sub){
	#define S0(i5) TempA_sub(j-i2,i2,i5)=UseEquation_TempA_sub_output_0(i5)
	{
		//Domain
		//{i5|i4==0 && i3==1 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && i5>=0 && bM>=i5+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		int c1;
		for(c1=0;c1 <= bM-1;c1+=1)
		 {
		 	S0((c1));
		 }
	}
	#undef S0
}
void memory_free_for_UseEquation_TempA_sub_output_0(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, int* UseEquation_TempA_sub_output_0){
	
	//Memory Free
	free(UseEquation_TempA_sub_output_0);
}
int* memory_allocation_for_UseEquation_TempA_sub_output_1(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4){
	//Memory Allocation
	int mz1;
	
	int* UseEquation_TempA_sub_output_1 = (int*)malloc(sizeof(int)*(bN));
	mallocCheck(UseEquation_TempA_sub_output_1, (bN), int);
	return UseEquation_TempA_sub_output_1;
}
void value_copy_for_UseEquation_TempA_sub_output_1(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, int* UseEquation_TempA_sub_output_1, int*** TempB_sub){
	#define S0(i5) TempB_sub(j-i2,i2,i5)=UseEquation_TempA_sub_output_1(i5)
	{
		//Domain
		//{i5|i4==0 && i3==1 && i==1 && j>=i2 && M+i2>=j+1 && i2>=0 && N>=i2+1 && i5>=0 && bN>=i5+1 && M>=2 && N>=2 && bM>=2 && bN>=2}
		int c1;
		for(c1=0;c1 <= bN-1;c1+=1)
		 {
		 	S0((c1));
		 }
	}
	#undef S0
}
void memory_free_for_UseEquation_TempA_sub_output_1(long M, long N, long bM, long bN, int i, int j, int i2, int i3, int i4, int* UseEquation_TempA_sub_output_1){
	
	//Memory Free
	free(UseEquation_TempA_sub_output_1);
}

//Memory Macros
#undef seq_A
#undef seq_B
#undef TempA_sub
#undef TempB_sub
#undef TempA
#undef TempB
#undef Tempc
#undef Aout
#undef Bout
#undef UseEquation_TempA_sub_input_0
#undef UseEquation_TempA_sub_input_1
#undef UseEquation_TempA_sub_input_2
#undef UseEquation_TempA_sub_input_3
#undef UseEquation_TempA_sub_output_0
#undef UseEquation_TempA_sub_output_1


//Common Macro undefs
#undef max
#undef MAX
#undef min
#undef MIN
#undef CEILD
#undef ceild
#undef FLOORD
#undef floord
#undef CDIV
#undef FDIV
#undef LB_SHIFT
#undef MOD
