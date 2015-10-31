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





//Memory Macros
#define seq_A(i) seq_A[i]
#define seq_B(i) seq_B[i]
#define A(i) A[i]
#define B(i) B[i]
#define Table(i,j) Table[i][j]
#define Aout(i) Aout[i]
#define Bout(i) Bout[i]

void sw_base(long bM, long bN, short* seq_A, short* seq_B, int* A, int* B, int* c, int* Aout, int* Bout){
	///Parameter checking
	if (!((bM >= 2 && bN >= 2))) {
		printf("The value of parameters are not valid.\n");
		exit(-1);
	}
	//Memory Allocation
	int mz1, mz2;
	
	int gap_penalty;
	int* _lin_Table = (int*)malloc(sizeof(int)*((bM) * (bN)));
	mallocCheck(_lin_Table, ((bM) * (bN)), int);
	int** Table = (int**)malloc(sizeof(int*)*(bM));
	mallocCheck(Table, (bM), int*);
	for (mz1=0;mz1 < bM; mz1++) {
		Table[mz1] = &_lin_Table[(mz1*(bN))];
	}
	#define S0(i0,i1,i2) gap_penalty = -(1)
	#define S1(i,j,i2) Table(j-i2,i2) = __max_int(0,__max_int((*c)+(similarity_function(seq_A(j-i2),seq_B(i2))),__max_int((A(j-i2))+(gap_penalty),(B(i2))+(gap_penalty))))
	#define S2(i,j,i2) Table(j-i2,i2) = __max_int(0,__max_int((B(i2-1))+(similarity_function(seq_A(j-i2),seq_B(i2))),__max_int((Table(j-i2,i2-1))+(gap_penalty),(B(i2))+(gap_penalty))))
	#define S3(i,j,i2) Table(j-i2,i2) = __max_int(0,__max_int((A(j-i2-1))+(similarity_function(seq_A(j-i2),seq_B(i2))),__max_int((A(j-i2))+(gap_penalty),(Table(j-i2-1,i2))+(gap_penalty))))
	#define S4(i,j,i2) Table(j-i2,i2) = __max_int(0,__max_int((Table(j-i2-1,i2-1))+(similarity_function(seq_A(j-i2),seq_B(i2))),__max_int((Table(j-i2,i2-1))+(gap_penalty),(Table(j-i2-1,i2))+(gap_penalty))))
	#define S5(i,i1,i2) Aout(i1-bM) = Table(i1-bM,bN-1)
	#define S6(i,i1,i2) Bout(i1-bN) = Table(bM-1,i1-bN)
	{
		//Domain
		//{i0,i1,i2|i2==0 && i1==0 && i0==0 && bM>=2 && bN>=2}
		//{i,j,i2|i2==0 && j==0 && i==1 && bM>=2 && bN>=2}
		//{i,j,i2|i2==j && i==1 && j>=1 && bM>=2 && bN>=2 && bN>=j+1}
		//{i,j,i2|i2==0 && i==1 && j>=1 && bM>=2 && bN>=2 && bM>=j+1}
		//{i,j,i2|i==1 && j>=i2+1 && i2>=1 && bM>=2 && bN>=2 && bN>=i2+1 && bM+i2>=j+1}
		//{i,i1,i2|i2==0 && i==1 && i1>=bM && 2bM>=i1+1 && bN>=2 && bM>=2}
		//{i,i1,i2|i2==0 && i==1 && bM>=2 && bN>=2 && i1>=bN && 2bN>=i1+1}
		int c2,c3;
		S0((0),(0),(0));
		S1((1),(0),(0));
		S3((1),(1),(0));
		S2((1),(1),(1));
		for(c2=2;c2 <= min(bM-1,bN-1);c2+=1)
		 {
		 	S3((1),(c2),(0));
		 	for(c3=1;c3 <= c2-1;c3+=1)
		 	 {
		 	 	S4((1),(c2),(c3));
		 	 }
		 	S2((1),(c2),(c2));
		 }
		for(c2=bN;c2 <= min(bM-1,2*bN-1);c2+=1)
		 {
		 	S3((1),(c2),(0));
		 	S6((1),(c2),(0));
		 	for(c3=1;c3 <= bN-1;c3+=1)
		 	 {
		 	 	S4((1),(c2),(c3));
		 	 }
		 }
		for(c2=2*bN;c2 <= bM-1;c2+=1)
		 {
		 	S3((1),(c2),(0));
		 	for(c3=1;c3 <= bN-1;c3+=1)
		 	 {
		 	 	S4((1),(c2),(c3));
		 	 }
		 }
		for(c2=bM;c2 <= min(2*bM-1,bN-1);c2+=1)
		 {
		 	S5((1),(c2),(0));
		 	for(c3=c2-bM+1;c3 <= c2-1;c3+=1)
		 	 {
		 	 	S4((1),(c2),(c3));
		 	 }
		 	S2((1),(c2),(c2));
		 }
		for(c2=2*bM;c2 <= bN-1;c2+=1)
		 {
		 	for(c3=c2-bM+1;c3 <= c2-1;c3+=1)
		 	 {
		 	 	S4((1),(c2),(c3));
		 	 }
		 	S2((1),(c2),(c2));
		 }
		for(c2=max(bM,bN);c2 <= min(2*bM-1,min(2*bN-1,bM+bN-2));c2+=1)
		 {
		 	S5((1),(c2),(0));
		 	S6((1),(c2),(0));
		 	for(c3=c2-bM+1;c3 <= bN-1;c3+=1)
		 	 {
		 	 	S4((1),(c2),(c3));
		 	 }
		 }
		for(c2=max(bM,2*bN);c2 <= bM+bN-2;c2+=1)
		 {
		 	S5((1),(c2),(0));
		 	for(c3=c2-bM+1;c3 <= bN-1;c3+=1)
		 	 {
		 	 	S4((1),(c2),(c3));
		 	 }
		 }
		if ((bM == bN)) {
			{
				S5((1),(2*bM-1),(0));
				S6((1),(2*bM-1),(0));
			}
		}
		for(c2=max(2*bN,bM+bN-1);c2 <= 2*bM-1;c2+=1)
		 {
		 	S5((1),(c2),(0));
		 }
		for(c2=max(2*bM,bN);c2 <= bM+bN-2;c2+=1)
		 {
		 	S6((1),(c2),(0));
		 	for(c3=c2-bM+1;c3 <= bN-1;c3+=1)
		 	 {
		 	 	S4((1),(c2),(c3));
		 	 }
		 }
		for(c2=max(2*bM,bM+bN-1);c2 <= 2*bN-1;c2+=1)
		 {
		 	S6((1),(c2),(0));
		 }
	}
	#undef S0
	#undef S1
	#undef S2
	#undef S3
	#undef S4
	#undef S5
	#undef S6
	
	//Memory Free
	
	free(_lin_Table);
	free(Table);
}

//Memory Macros
#undef seq_A
#undef seq_B
#undef A
#undef B
#undef Table
#undef Aout
#undef Bout


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
