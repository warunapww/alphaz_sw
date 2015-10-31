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


///Global Variables
static short* seq_A;
static short* seq_B;
static int* A;
static int* B;
static int c;
static int gap_penalty;
static int** Table;
static float* Aout;
static float* Bout;
static char* _flag_Aout;
static char* _flag_Bout;
static char _flag_gap_penalty;
static char** _flag_Table;


//Local Function Declarations
int eval_gap_penalty(long, long);
int eval_Table(long, long, int, int);
float eval_Aout(long, long, int);
float eval_Bout(long, long, int);

//Memory Macros
#define seq_A(i) seq_A[i]
#define seq_B(i) seq_B[i]
#define A(i) A[i]
#define B(i) B[i]
#define Table(i,j) Table[i][j]
#define Aout(i) Aout[i]
#define Bout(i) Bout[i]
#define _flag_Aout(i) _flag_Aout[i]
#define _flag_Bout(i) _flag_Bout[i]
#define _flag_Table(i,j) _flag_Table[i][j]

void sw_base(long bM, long bN, short* _local_seq_A, short* _local_seq_B, int* _local_A, int* _local_B, int* _local_c, float* _local_Aout, float* _local_Bout){
	///Parameter checking
	if (!((bM >= 2 && bN >= 2))) {
		printf("The value of parameters are not valid.\n");
		exit(-1);
	}
	//Copy to global
	seq_A = _local_seq_A;
	seq_B = _local_seq_B;
	A = _local_A;
	B = _local_B;
	
	c = *_local_c;
	Aout = _local_Aout;
	Bout = _local_Bout;
	
	//Memory Allocation
	int mz1, mz2;
	
	
	int* _lin_Table = (int*)malloc(sizeof(int)*((bM) * (bN)));
	mallocCheck(_lin_Table, ((bM) * (bN)), int);
	Table = (int**)malloc(sizeof(int*)*(bM));
	mallocCheck(Table, (bM), int*);
	for (mz1=0;mz1 < bM; mz1++) {
		Table[mz1] = &_lin_Table[(mz1*(bN))];
	}
	
	_flag_Aout = (char*)malloc(sizeof(char)*(bM));
	mallocCheck(_flag_Aout, (bM), char);
	memset(_flag_Aout, 'N', (bM));
	
	_flag_Bout = (char*)malloc(sizeof(char)*(bN));
	mallocCheck(_flag_Bout, (bN), char);
	memset(_flag_Bout, 'N', (bN));
	
	_flag_gap_penalty = 'N';
	
	char* _lin__flag_Table = (char*)malloc(sizeof(char)*((bM) * (bN)));
	mallocCheck(_lin__flag_Table, ((bM) * (bN)), char);
	_flag_Table = (char**)malloc(sizeof(char*)*(bM));
	mallocCheck(_flag_Table, (bM), char*);
	for (mz1=0;mz1 < bM; mz1++) {
		_flag_Table[mz1] = &_lin__flag_Table[(mz1*(bN))];
	}
	memset(_lin__flag_Table, 'N', ((bM) * (bN)));
	#define S0(i) eval_Aout(bM,bN,i)
	{
		//Domain
		//{i|i>=0 && bM>=i+1 && bM>=2 && bN>=2}
		int c1;
		for(c1=0;c1 <= bM-1;c1+=1)
		 {
		 	S0((c1));
		 }
	}
	#undef S0
	#define S0(i) eval_Bout(bM,bN,i)
	{
		//Domain
		//{i|i>=0 && bN>=i+1 && bM>=2 && bN>=2}
		int c1;
		for(c1=0;c1 <= bN-1;c1+=1)
		 {
		 	S0((c1));
		 }
	}
	#undef S0
	
	//Memory Free
	
	free(_lin_Table);
	free(Table);
	
	free(_flag_Aout);
	free(_flag_Bout);
	
	free(_lin__flag_Table);
	free(_flag_Table);
}
int eval_gap_penalty(long bM, long bN){
	if ( _flag_gap_penalty == 'N' ) {
		_flag_gap_penalty = 'I';
	//Body for gap_penalty
		gap_penalty = -(1);
		_flag_gap_penalty = 'F';
	} else if ( _flag_gap_penalty == 'I' ) {
		printf("There is a self dependence on gap_penalty at () \n");
		exit(-1);
	}
	return gap_penalty;
}
int eval_Table(long bM, long bN, int i, int j){
	if ( _flag_Table(i,j) == 'N' ) {
		_flag_Table(i,j) = 'I';
	//Body for Table
		Table(i,j) = (((j == 0 && i == 0))?__max_int(0,__max_int((c)+(similarity_function(seq_A(i),seq_B(j))),__max_int((A(i))+(eval_gap_penalty(bM,bN)),(B(j))+(eval_gap_penalty(bM,bN))))):(((i == 0 && j >= 1))?__max_int(0,__max_int((B(j-1))+(similarity_function(seq_A(i),seq_B(j))),__max_int((eval_Table(bM,bN,i,j-1))+(eval_gap_penalty(bM,bN)),(B(j))+(eval_gap_penalty(bM,bN))))):(((j == 0 && i >= 1))?__max_int(0,__max_int((A(i-1))+(similarity_function(seq_A(i),seq_B(j))),__max_int((A(i))+(eval_gap_penalty(bM,bN)),(eval_Table(bM,bN,i-1,j))+(eval_gap_penalty(bM,bN))))):(__max_int(0,__max_int((eval_Table(bM,bN,i-1,j-1))+(similarity_function(seq_A(i),seq_B(j))),__max_int((eval_Table(bM,bN,i,j-1))+(eval_gap_penalty(bM,bN)),(eval_Table(bM,bN,i-1,j))+(eval_gap_penalty(bM,bN)))))))));
		_flag_Table(i,j) = 'F';
	} else if ( _flag_Table(i,j) == 'I' ) {
		printf("There is a self dependence on Table at (%d,%d) \n",i,j);
		exit(-1);
	}
	return Table(i,j);
}
float eval_Aout(long bM, long bN, int i){
	if ( _flag_Aout(i) == 'N' ) {
		_flag_Aout(i) = 'I';
	//Body for Aout
		Aout(i) = eval_Table(bM,bN,i,bN-1);
		_flag_Aout(i) = 'F';
	} else if ( _flag_Aout(i) == 'I' ) {
		printf("There is a self dependence on Aout at (%d) \n",i);
		exit(-1);
	}
	return Aout(i);
}
float eval_Bout(long bM, long bN, int i){
	if ( _flag_Bout(i) == 'N' ) {
		_flag_Bout(i) = 'I';
	//Body for Bout
		Bout(i) = eval_Table(bM,bN,bM-1,i);
		_flag_Bout(i) = 'F';
	} else if ( _flag_Bout(i) == 'I' ) {
		printf("There is a self dependence on Bout at (%d) \n",i);
		exit(-1);
	}
	return Bout(i);
}

//Memory Macros
#undef seq_A
#undef seq_B
#undef A
#undef B
#undef Table
#undef Aout
#undef Bout
#undef _flag_Aout
#undef _flag_Bout
#undef _flag_Table


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
