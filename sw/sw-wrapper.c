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
#define seq_A(i,j) seq_A[i][j]
#define seq_B(i,j) seq_B[i][j]
#define TempA_sub(i,j,k) TempA_sub[i][j][k]
#define TempB_sub(i,j,k) TempB_sub[i][j][k]
#define TempA(i,j,k) TempA[i][j][k]
#define TempB(i,j,k) TempB[i][j][k]
#define Tempc(i,j) Tempc[i][j]
#define Aout(i,j) Aout[i][j]
#define Bout(i,j) Bout[i][j]

#define Aout_verify(i,j) Aout_verify[i][j]
#define Bout_verify(i,j) Bout_verify[i][j]
#define var_Aout(i,j) Aout(i,j)
#define var_Aout_verify(i,j) Aout_verify(i,j)
#define var_Bout(i,j) Bout(i,j)
#define var_Bout_verify(i,j) Bout_verify(i,j)

//function prototypes
void sw(long, long, long, long, short**, short**, int**, int**);
void sw_verify(long, long, long, long, short**, short**, int**, int**);

//main
int main(int argc, char** argv) {
	//Check number of args
	if (argc <= 4) {
		printf("Number of argument is smaller than expected.\n");
		printf("Expecting M,N,bM,bN\n");
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
	
	//Initialisation of bM
	errno = 0;
	end = 0;
	val = argv[3];
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
	val = argv[4];
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
	if (!((M >= 2 && N >= 2 && bM >= 2 && bN >= 2))) {
		printf("The value of parameters are not valid.\n");
		exit(-1);
	}
	
	
	//Memory Allocation
	int mz1, mz2, mz3;
	short* _lin_seq_A = (short*)malloc(sizeof(short)*((M) * (bM)));
	mallocCheck(_lin_seq_A, ((M) * (bM)), short);
	short** seq_A = (short**)malloc(sizeof(short*)*(M));
	mallocCheck(seq_A, (M), short*);
	for (mz1=0;mz1 < M; mz1++) {
		seq_A[mz1] = &_lin_seq_A[(mz1*(bM))];
	}
	short* _lin_seq_B = (short*)malloc(sizeof(short)*((N) * (bN)));
	mallocCheck(_lin_seq_B, ((N) * (bN)), short);
	short** seq_B = (short**)malloc(sizeof(short*)*(N));
	mallocCheck(seq_B, (N), short*);
	for (mz1=0;mz1 < N; mz1++) {
		seq_B[mz1] = &_lin_seq_B[(mz1*(bN))];
	}
	int* _lin_Aout = (int*)malloc(sizeof(int)*((M) * (bM)));
	mallocCheck(_lin_Aout, ((M) * (bM)), int);
	int** Aout = (int**)malloc(sizeof(int*)*(M));
	mallocCheck(Aout, (M), int*);
	for (mz1=0;mz1 < M; mz1++) {
		Aout[mz1] = &_lin_Aout[(mz1*(bM))];
	}
	int* _lin_Bout = (int*)malloc(sizeof(int)*((N) * (bN)));
	mallocCheck(_lin_Bout, ((N) * (bN)), int);
	int** Bout = (int**)malloc(sizeof(int*)*(N));
	mallocCheck(Bout, (N), int*);
	for (mz1=0;mz1 < N; mz1++) {
		Bout[mz1] = &_lin_Bout[(mz1*(bN))];
	}
	#ifdef VERIFY
		int* _lin_Aout_verify = (int*)malloc(sizeof(int)*((M) * (bM)));
		mallocCheck(_lin_Aout_verify, ((M) * (bM)), int);
		int** Aout_verify = (int**)malloc(sizeof(int*)*(M));
		mallocCheck(Aout_verify, (M), int*);
		for (mz1=0;mz1 < M; mz1++) {
			Aout_verify[mz1] = &_lin_Aout_verify[(mz1*(bM))];
		}
		int* _lin_Bout_verify = (int*)malloc(sizeof(int)*((N) * (bN)));
		mallocCheck(_lin_Bout_verify, ((N) * (bN)), int);
		int** Bout_verify = (int**)malloc(sizeof(int*)*(N));
		mallocCheck(Bout_verify, (N), int*);
		for (mz1=0;mz1 < N; mz1++) {
			Bout_verify[mz1] = &_lin_Bout_verify[(mz1*(bN))];
		}
	#endif

	//Initialization of rand
	srand((unsigned)time(NULL));
	 
	//Input Initialization
	{
		#if defined (RANDOM)
			#define S0(i,j) (seq_A(i,j) = rand()) 
		#elif defined (CHECKING) || defined (VERIFY)
			#ifdef NO_PROMPT
				#define S0(i,j) scanf("%hd", &seq_A(i,j))
			#else
				#define S0(i,j) printf("seq_A(%ld,%ld)=",(long) i,(long) j); scanf("%hd", &seq_A(i,j))
			#endif
		#else
			#define S0(i,j) (seq_A(i,j) = 1)   //Default value
		#endif
		
		
		int c1,c2;
		for(c1=0;c1 <= M-1;c1+=1)
		 {
		 	for(c2=0;c2 <= bM-1;c2+=1)
		 	 {
		 	 	S0((c1),(c2));
		 	 }
		 }
		#undef S0
	}
	{
		#if defined (RANDOM)
			#define S0(i,j) (seq_B(i,j) = rand()) 
		#elif defined (CHECKING) || defined (VERIFY)
			#ifdef NO_PROMPT
				#define S0(i,j) scanf("%hd", &seq_B(i,j))
			#else
				#define S0(i,j) printf("seq_B(%ld,%ld)=",(long) i,(long) j); scanf("%hd", &seq_B(i,j))
			#endif
		#else
			#define S0(i,j) (seq_B(i,j) = 1)   //Default value
		#endif
		
		
		int c1,c2;
		for(c1=0;c1 <= N-1;c1+=1)
		 {
		 	for(c2=0;c2 <= bN-1;c2+=1)
		 	 {
		 	 	S0((c1),(c2));
		 	 }
		 }
		#undef S0
	}
	
	//Timing
	struct timeval time;
	double elapsed_time;
	
	//Call the main computation
	gettimeofday(&time, NULL);
	elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000);
	
	sw(M, N, bM, bN, seq_A, seq_B, Aout, Bout);

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
		fprintf(fp, "%ld\t%ld\t%ld\t%ld\t%lf\n",M,N,bM,bN,elapsed_time);
		fclose(fp);
	#endif
	
	//Verification Run
	#ifdef VERIFY
		#ifdef TIMING
			gettimeofday(&time, NULL);
			elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000);
		#endif
    	sw_verify(M, N, bM, bN, seq_A, seq_B, Aout_verify, Bout_verify);
    	#ifdef TIMING
    		gettimeofday(&time, NULL);
			elapsed_time = (((double) time.tv_sec) + ((double) time.tv_usec)/1000000) - elapsed_time;
			
			FILE * fp_verify = fopen( "trace_verify.dat","a+");
			if (fp == NULL) {
					printf("I couldn't open trace_verify.dat for writing.\n");
					exit(EXIT_FAILURE);
			}
			fprintf(fp, "%ld\t%ld\t%ld\t%ld\t%lf\n",M,N,bM,bN,elapsed_time);
			fclose(fp_verify);
		#endif
	#endif
    	
	#ifdef CHECKING
    	//Print Outputs
		{
			#ifdef NO_PROMPT
				#define S0(i,j) printf("%d\n",var_Aout(i,j))
			#else
				#define S0(i,j) printf("Aout(%ld,%ld)=",(long) i,(long) j);printf("%d\n",var_Aout(i,j))
			#endif
			int c1,c2;
			for(c1=0;c1 <= M-1;c1+=1)
			 {
			 	for(c2=0;c2 <= bM-1;c2+=1)
			 	 {
			 	 	S0((c1),(c2));
			 	 }
			 }
			#undef S0
		}
		{
			#ifdef NO_PROMPT
				#define S0(i,j) printf("%d\n",var_Bout(i,j))
			#else
				#define S0(i,j) printf("Bout(%ld,%ld)=",(long) i,(long) j);printf("%d\n",var_Bout(i,j))
			#endif
			int c1,c2;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=0;c2 <= bN-1;c2+=1)
			 	 {
			 	 	S0((c1),(c2));
			 	 }
			 }
			#undef S0
		}
	#elif VERIFY
		//Compare outputs for verification
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i,j) if (var_Aout_verify(i,j)!=var_Aout(i,j)) _errors_++;
			int c1,c2;
			for(c1=0;c1 <= M-1;c1+=1)
			 {
			 	for(c2=0;c2 <= bM-1;c2+=1)
			 	 {
			 	 	S0((c1),(c2));
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST for Aout PASSED\n");
			}else{
				printf("TEST for Aout FAILED\n");
			}
		}
		{
			//Error Counter
			int _errors_ = 0;
			#define S0(i,j) if (var_Bout_verify(i,j)!=var_Bout(i,j)) _errors_++;
			int c1,c2;
			for(c1=0;c1 <= N-1;c1+=1)
			 {
			 	for(c2=0;c2 <= bN-1;c2+=1)
			 	 {
			 	 	S0((c1),(c2));
			 	 }
			 }
			#undef S0
			if(_errors_ == 0){
				printf("TEST for Bout PASSED\n");
			}else{
				printf("TEST for Bout FAILED\n");
			}
		}
    #endif
    
	//Memory Free
	free(_lin_seq_A);
	free(seq_A);
	free(_lin_seq_B);
	free(seq_B);
	free(_lin_Aout);
	free(Aout);
	free(_lin_Bout);
	free(Bout);
	#ifdef VERIFY
		free(_lin_Aout_verify);
		free(Aout_verify);
		free(_lin_Bout_verify);
		free(Bout_verify);
	#endif
	
	return EXIT_SUCCESS;
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
