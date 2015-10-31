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
#include <time.h>
#include <sys/time.h>
#include <sys/errno.h>


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
#define EPSILON 1.0E-9






//Memory Macros
#define seq_A(i) seq_A[i]
#define seq_B(i) seq_B[i]
#define A(i) A[i]
#define B(i) B[i]
#define Table(i,j) Table[i][j]
#define Aout(i) Aout[i]
#define Bout(i) Bout[i]

#define Aout_verify(i) Aout_verify[i]
#define Bout_verify(i) Bout_verify[i]
#define var_Aout(i) Aout(i)
#define var_Aout_verify(i) Aout_verify(i)
#define var_Bout(i) Bout(i)
#define var_Bout_verify(i) Bout_verify(i)

//function prototypes
void sw_base(long, long, short*, short*, int*, int*, int*, int*, int*);
void sw_base_verify(long, long, short*, short*, int*, int*, int*, int*, int*);

//main
int main(int argc, char** argv) {
	//Check number of args
	if (argc <= 2) {
		printf("Number of argument is smaller than expected.\n");
		printf("Expecting M,N\n");
		exit(0);
	}
	
	char *end = 0;
	char *val = 0;
	//Read Parameters
	//Initialisation of M
	errno = 0;
	end = 0;
	val = argv[1];
	long M = strtol(val,&end,10);
	if ((errno == ERANGE && (M == LONG_MAX || M == LONG_MIN)) || (errno != 0 && M == 0)) {
		perror("strtol");
		exit(EXIT_FAILURE);
	}
	if (end == val) {
		fprintf(stderr, "No digits were found for M\n");
		exit(EXIT_FAILURE);
	}
	if (*end != '\0'){
		printf("For parameter M: Converted part: %ld, non-convertible part: %s\n", M, end);
		exit(EXIT_FAILURE);
	}
	
	//Initialisation of N
	errno = 0;
	end = 0;
	val = argv[2];
	long N = strtol(val,&end,10);
	if ((errno == ERANGE && (N == LONG_MAX || N == LONG_MIN)) || (errno != 0 && N == 0)) {
		perror("strtol");
		exit(EXIT_FAILURE);
	}
	if (end == val) {
		fprintf(stderr, "No digits were found for N\n");
		exit(EXIT_FAILURE);
	}
	if (*end != '\0'){
		printf("For parameter N: Converted part: %ld, non-convertible part: %s\n", N, end);
		exit(EXIT_FAILURE);
	}
	
	
	///Parameter checking
	if (!((M >= 2 && N >= 2))) {
		printf("The value of parameters are not valid.\n");
		exit(-1);
	}
	
	
	//Memory Allocation
	int mz1, mz2;
	short* seq_A = (short*)malloc(sizeof(short)*(M));
	mallocCheck(seq_A, (M), short);
	short* seq_B = (short*)malloc(sizeof(short)*(N));
	mallocCheck(seq_B, (N), short);
	int* A = (int*)malloc(sizeof(int)*(M));
	mallocCheck(A, (M), int);
	int* B = (int*)malloc(sizeof(int)*(N));
	mallocCheck(B, (N), int);
	int c;
	int* Aout = (int*)malloc(sizeof(int)*(M));
	mallocCheck(Aout, (M), int);
	int* Bout = (int*)malloc(sizeof(int)*(N));
	mallocCheck(Bout, (N), int);
	#ifdef VERIFY
		int* Aout_verify = (int*)malloc(sizeof(int)*(M));
		mallocCheck(Aout_verify, (M), int);
		int* Bout_verify = (int*)malloc(sizeof(int)*(N));
		mallocCheck(Bout_verify, (N), int);
	#endif

	//Initialization of rand
	srand((unsigned)time(NULL));
	 
	//Input Initialization
	{
		#if defined (RANDOM)
			#define S0(i) (seq_A(i) = rand()) 
		#elif defined (CHECKING) || defined (VERIFY)
			#ifdef NO_PROMPT
				#define S0(i) scanf("%hd", &seq_A(i))
			#else
				#define S0(i) printf("seq_A(%ld)=",(long) i); scanf("%hd", &seq_A(i))
			#endif
		#else
			#define S0(i) (seq_A(i) = 1)   //Default value
		#endif
		
		
		int c1;
		for(c1=0;c1 <= M-1;c1+=1)
		 {
		 	S0((c1));
		 }
		#undef S0
	}
	{
		#if defined (RANDOM)
			#define S0(i) (seq_B(i) = rand()) 
		#elif defined (CHECKING) || defined (VERIFY)
			#ifdef NO_PROMPT
				#define S0(i) scanf("%hd", &seq_B(i))
			#else
				#define S0(i) printf("seq_B(%ld)=",(long) i); scanf("%hd", &seq_B(i))
			#endif
		#else
			#define S0(i) (seq_B(i) = 1)   //Default value
		#endif
		
		
		int c1;
		for(c1=0;c1 <= N-1;c1+=1)
		 {
		 	S0((c1));
		 }
		#undef S0
	}
	{
		#if defined (RANDOM)
			#define S0(i) (A(i) = rand()) 
		#elif defined (CHECKING) || defined (VERIFY)
			#ifdef NO_PROMPT
				#define S0(i) scanf("%d", &A(i))
			#else
				#define S0(i) printf("A(%ld)=",(long) i); scanf("%d", &A(i))
			#endif
		#else
			#define S0(i) (A(i) = 1)   //Default value
		#endif
		
		
		int c1;
		for(c1=0;c1 <= M-1;c1+=1)
		 {
		 	S0((c1));
		 }
		#undef S0
	}
	{
		#if defined (RANDOM)
			#define S0(i) (B(i) = rand()) 
		#elif defined (CHECKING) || defined (VERIFY)
			#ifdef NO_PROMPT
				#define S0(i) scanf("%d", &B(i))
			#else
				#define S0(i) printf("B(%ld)=",(long) i); scanf("%d", &B(i))
			#endif
		#else
			#define S0(i) (B(i) = 1)   //Default value
		#endif
		
		
		int c1;
		for(c1=0;c1 <= N-1;c1+=1)
		 {
		 	S0((c1));
		 }
		#undef S0
	}
	{
		#if defined (RANDOM)
			#define S0() (c = rand()) 
		#elif defined (CHECKING) || defined (VERIFY)
			#ifdef NO_PROMPT
				#define S0() scanf("%d", &c)
			#else
				#define S0() printf("c="); scanf("%d", &c)
			#endif
		#else
			#define S0() (c = 1)   //Default value
		#endif
		
		
		S0();
		#undef S0
	}
	
	//Timing
	struct timeval time;
	double elapsed_time;
	
	//Call the main computation
	gettimeofday(&time, NULL);
	elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000);
	
	sw_base(M, N, seq_A, seq_B, A, B, &c, Aout, Bout);

	gettimeofday(&time, NULL);
	elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000) - elapsed_time;

	// timing information
	printf("Execution time : %lf sec.\n", elapsed_time);
	
	#ifdef TIMING
		FILE * fp = fopen( "trace.dat","a+");
		if (fp == NULL) {
				printf("I couldn't open trace.dat for writing.\n");
				exit(EXIT_FAILURE);
		}
		fprintf(fp, "%ld\t%ld\t%lf\n",M,N,elapsed_time);
		fclose(fp);
	#endif
	
	//Verification Run
	#ifdef VERIFY
		#ifdef TIMING
			gettimeofday(&time, NULL);
			elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000);
		#endif
    	sw_base_verify(M, N, seq_A, seq_B, A, B, &c, Aout_verify, Bout_verify);
    	#ifdef TIMING
    		gettimeofday(&time, NULL);
			elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000) - elapsed_time;
			
			FILE * fp_verify = fopen( "trace_verify.dat","a+");
			if (fp == NULL) {
					printf("I couldn't open trace_verify.dat for writing.\n");
					exit(EXIT_FAILURE);
			}
			fprintf(fp, "%ld\t%ld\t%lf\n",M,N,elapsed_time);
			fclose(fp_verify);
		#endif
	#endif
    	
	#ifdef CHECKING
    	//Print Outputs
		{
			#ifdef NO_PROMPT
				#define S0(i) printf("%d\n",var_Aout(i))
			#else
				#define S0(i) printf("Aout(%ld)=",(long) i);printf("%d\n",var_Aout(i))
			#endif
			int c1;
			for(c1=0;c1 <= M-1;c1+=1)
			 {
			 	S0((c1));
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i) printf("%d\n",var_Bout(i))
			#else
				#define S0(i) printf("Bout(%ld)=",(long) i);printf("%d\n",var_Bout(i))
			#endif
			int c1;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	S0((c1));
			 }
			#undef S0
		}
	#elif VERIFY
		//Compare outputs for verification
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i) if (abs(1 - var_Aout_verify(i)/var_Aout(i)) > EPSILON) _errors_++;
			int c1;
			for(c1=0;c1 <= M-1;c1+=1)
			 {
			 	S0((c1));
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i) if (abs(1 - var_Bout_verify(i)/var_Bout(i)) > EPSILON) _errors_++;
			int c1;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	S0((c1));
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST PASSED\n");
			}else{
				printf("TEST FAILED\n");
			}
		}
    #endif
    
	//Memory Free
	free(seq_A);
	free(seq_B);
	free(A);
	free(B);
	free(Aout);
	free(Bout);
	#ifdef VERIFY
		free(Aout_verify);
		free(Bout_verify);
	#endif
	
	return EXIT_SUCCESS;
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
#undef EPSILON
