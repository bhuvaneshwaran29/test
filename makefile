program.exe:big3.o fact.o palindrome.o reverse.o sort.o main.o
	gcc -o program.exe big3.o fact.o palindrome.o reverse.o sort.o main.o
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
palindrome.o:palindrome.c
	gcc -c palindrome.c
reverse.o:reverse.c
	gcc -c reverse.c
sort.o:sort.c
	gcc -c sort.c
main.o:main.c
	gcc -c main.c
