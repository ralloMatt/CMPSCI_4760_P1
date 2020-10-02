#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void make_processes(int n, int k, int m){ 
	//Made a function that is pretty much Program 3.1 but modified by Excercise 3.8
	pid_t childpid = 0; 
	int i;
   
	for (i = 1; i < n; i++)
		if (childpid = fork()) 
        break;

	int j;
	
	for (j = 0; j < k; j++) {
		wait();
		
		fprintf(stderr, "i:%d  process ID:%ld  parent ID:%ld  child ID:%ld\n",
			i, (long)getpid(), (long)getppid(), (long)childpid);
		
		/*
		fprintf(stderr, "i: %d ", i);
		fprintf(stderr, "process ID:%ld ", (long)getpid());
		fprintf(stderr, "parent ID:%ld ", (long)getppid());
		fprintf(stderr, "child ID:%ld\n", (long)childpid);
		*/
		
		sleep(m);
	
	}
	return;
}

int main (int argc, char *argv[]) {
	
	int opt; //option
	int n;
	int k;
	int m;	
	
	if (argc < 2){   //if only one argument is given "./ass1"
		fprintf(stderr, "Usage: ./ass1 -<option>\n", argv[0]);
		return 1; 
	}  
	
	while ((opt = getopt (argc, argv, "nhp")) != -1){ //get option
	
		switch (opt) { //check cases 
			case 'n':
				if (argc == 5){
					n = atoi(argv[2]);
					k = atoi(argv[3]);
					m = atoi(argv[4]);
					printf("Stored n, k, m as %d, %d, %d respectively\n\n", n, k, m);
					make_processes(n, k, m); //Program 3.1 to make processes
				}
				else{
					printf("Please give three integers after '-n' for variables n, k, and m!!!\n");
					printf("Expected input:\n");
					printf("\t./ass1 -n <integer> <integer> <integer>\n");
					return 0;
				}
				break;
			case 'h':
				printf("Expected input:\n");
				printf("\t./ass1 -n <integer> <integer> <integer>\n");
				return 0;
				break;
			case 'p':
				printf("Generate a test error message.\n");
				fprintf(stderr, "\t%s: ", argv[0]);
				perror("Error: Detailed error message");
				break;
			default: //invalid option
				return 0;
		}
		
		
	}
	
	
	
	return 0; 
}
