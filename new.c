#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

struct tnode *addtree(struct tnode *, char *);

void treeprint(struct tnode *);

int getword(char *, int);

/* word frequency count */

int 
main (int argc, char *argv[])
{
	FILE *fopen() , *fp ;
	int c;
	char filename[40] ; 

	printf("Enter the file name to be counted\n") ; 
	gets(filename) ; 
	fp = fopen(filename , "r") ; 
	if (fp == NULL)
	{
		printf("Cannot open file %s for reading", filename) ;
		return 0;
	}
	c = getc(fp) ;

	struct tnode *root;
	char word[MAXWORD];
	root = NULL;
while (getword(word, MAXWORD) != EOF)
   	if (isalpha(word[0]))
	root = addtree(root, word);
	treeprint(root);
		printf("print%d\n ");
return 0;
}
