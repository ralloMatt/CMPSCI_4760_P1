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
hardcoded, so no matter what the executable name is, it will output the correct result. This i
