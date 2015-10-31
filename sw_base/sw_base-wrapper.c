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
void sw_base(long, long, short*, short*, int*, int*, int*, float*, float*);
void sw_base_verify(long, long, short*, short*, int*, int*, int*, float*, float*);

//main
int main(int argc, char** argv) {
	//Check number of args
	if (argc <= 2) {
		printf("Number of argument is smaller than expected.\n");
		printf("Expecting bM,bN\n");
		exit(0);
	}
	
	char *end = 0;
	char *val = 0;
	//Read Parameters
	//Initialisation of bM
	errno = 0;
	end = 0;
	val = argv[1];
	long bM = strtol(val,&end,10);
	if ((errno == ERANGE && (bM == LONG_MAX || bM == LONG_MIN)) || (errno != 0 && bM == 0)) {
		perror("strtol");
		exit(EXIT_FAILURE);
	}
	if (end == val) {
		fprintf(stderr, "No digits were found for bM\n");
		exit(EXIT_FAILURE);
	}
	if (*end != '\0'){
		printf("For parameter bM: Converted part: %ld, non-convertible part: %s\n", bM, end);
		exit(EXIT_FAILURE);
	}
	
	//Initialisation of bN
	errno = 0;
	end = 0;
	val = argv[2];
	long bN = strtol(val,&end,10);
	if ((errno == ERANGE && (bN == LONG_MAX || bN == LONG_MIN)) || (errno != 0 && bN == 0)) {
		perror("strtol");
		exit(EXIT_FAILURE);
	}
	if (end == val) {
		fprintf(stderr, "No digits were found for bN\n");
		exit(EXIT_FAILURE);
	}
	if (*end != '\0'){
		printf("For parameter bN: Converted part: %ld, non-convertible part: %s\n", bN, end);
		exit(EXIT_FAILURE);
	}
	
	
	///Parameter checking
	if (!((bM >= 2 && bN >= 2))) {
		printf("The value of parameters are not valid.\n");
		exit(-1);
	}
	
	
	//Memory Allocation
	int mz1, mz2;
	short* seq_A = (short*)malloc(sizeof(short)*(bM));
	mallocCheck(seq_A, (bM), short);
	short* seq_B = (short*)malloc(sizeof(short)*(bN));
	mallocCheck(seq_B, (bN), short);
	int* A = (int*)malloc(sizeof(int)*(bM));
	mallocCheck(A, (bM), int);
	int* B = (int*)malloc(sizeof(int)*(bN));
	mallocCheck(B, (bN), int);
	int c;
	float* Aout = (float*)malloc(sizeof(float)*(bM));
	mallocCheck(Aout, (bM), float);
	float* Bout = (float*)malloc(sizeof(float)*(bN));
	mallocCheck(Bout, (bN), float);
	#ifdef VERIFY
		float* Aout_verify = (float*)malloc(sizeof(float)*(bM));
		mallocCheck(Aout_verify, (bM), float);
		float* Bout_verify = (float*)malloc(sizeof(float)*(bN));
		mallocCheck(Bout_verify, (bN), float);
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
		for(c1=0;c1 <= bM-1;c1+=1)
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
		for(c1=0;c1 <= bN-1;c1+=1)
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
		for(c1=0;c1 <= bM-1;c1+=1)
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
		for(c1=0;c1 <= bN-1;c1+=1)
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
	
	sw_base(bM, bN, seq_A, seq_B, A, B, &c, Aout, Bout);

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
		fprintf(fp, "%ld\t%ld\t%lf\n",bM,bN,elapsed_time);
		fclose(fp);
	#endif
	
	//Verification Run
	#ifdef VERIFY
		#ifdef TIMING
			gettimeofday(&time, NULL);
			elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000);
		#endif
    	sw_base_verify(bM, bN, seq_A, seq_B, A, B, &c, Aout_verify, Bout_verify);
    	#ifdef TIMING
    		gettimeofday(&time, NULL);
			elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000) - elapsed_time;
			
			FILE * fp_verify = fopen( "trace_verify.dat","a+");
			if (fp == NULL) {
					printf("I couldn't open trace_verify.dat for writing.\n");
					exit(EXIT_FAILURE);
			}
			fprintf(fp, "%ld\t%ld\t%lf\n",bM,bN,elapsed_time);
			fclose(fp_verify);
		#endif
	#endif
    	
	#ifdef CHECKING
    	//Print Outputs
		{
			#ifdef NO_PROMPT
				#define S0(i) printf("%0.2f\n",var_Aout(i))
			#else
				#define S0(i) printf("Aout(%ld)=",(long) i);printf("%0.2f\n",var_Aout(i))
			#endif
			int c1;
			for(c1=0;c1 <= bM-1;c1+=1)
			 {
			 	S0((c1));
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i) printf("%0.2f\n",var_Bout(i))
			#else
				#define S0(i) printf("Bout(%ld)=",(long) i);printf("%0.2f\n",var_Bout(i))
			#endif
			int c1;
			for(c1=0;c1 <= bN-1;c1+=1)
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
			#define S0(i) if (fabsf(1.0f - var_Aout_verify(i)/var_Aout(i)) > EPSILON) _errors_++;
			int c1;
			for(c1=0;c1 <= bM-1;c1+=1)
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
			#define S0(i) if (fabsf(1.0f - var_Bout_verify(i)/var_Bout(i)) > EPSILON) _errors_++;
			int c1;
			for(c1=0;c1 <= bN-1;c1+=1)
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
