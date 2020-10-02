# CMPSCI_4760_P1
Operating systems project

Description:
1. Set up a Makefile and a basic framework for your project. I will have a resource linked for helping you with using
Makefile. This Makefile should, when given no options, compile your project into an executable called ass1. In addition,
it should, when called with Make clean, remove all generated object files. The makefile should also contain constants
determining what compiler flags and what compiler to use.
2. Set up version control. If you are not familiar with one, RCS is a simple one. I will have a resource linked for you. It
would be a good idea to set both of these up before trying to do any other part of this project. To test this, I would suggest
starting by modifying Program 3.1 to terminate immediately after taking command line arguments (you do not want to
be running the program until everything else is set up to work in Test four). For later projects, I will require that RCS or
other version control that you use inserts into the file version information, so you can either work on that now or have it
to look forward to.
3. Modify the code of Program 3.1 in the textbook to take several command line arguments through getopt. Your program
should take three options, either -n x, -h, or -p. The -h option will display a help message indicating the type of input it
expects and then the program should terminate. If it takes -n x, it should store that x into a variable for use for the rest of
the program. If it receives -p as an option it should use perror to generate a test error message as described in the next
task. Test and ensure that these work.
4. Test the generation of error messages for future projects. You are required to use perror for this. The format of the
error message itself should be:
my_prog: Error: Detailed error message
where my_prog is actually the name of the executable (argv[0]) that you are trying to execute. This should not be
hardcoded, so no matter what the executable name is, it will output the correct result. This is necessary so that later on
when we are working with multiple executables it is easier to find where the problem is.

Overview:
	To compile simply type "make" and hit enter. The Makefile creates an executable called
	"./ass1" so when running the project type ./ass1 -<option>. My program uses getopt and 
	perror. But when using the option "-n" it takes three integers because of exercise 3.8.
	Those integers are n, k, m which is for number of processes, loops, sleep time. All my
	 answers to exercise 3.8 are in the file "Answers." I used local git version control.

Version Control:
	I used local git version control. The repository is in a hidden folder called ./git inside 
		my project folder. To see commits type "git log" and hit enter. 

	 
Files used:	
	Makefile - compiles everything and creates executable ./ass1. Also removes objects files 
		when "make clean" is used.
	main.c - includes simplechain.c (or program 3.1) and uses getopt as well as perror.
	
	

	
