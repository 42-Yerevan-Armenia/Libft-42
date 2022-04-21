# Libft-42

bzero		  () deletes the contents of str. If n = 0, bzero does nothing.
malloc		() allocates memory by size and returns pointer to allocated memory.
calloc		() allocates a memory block, which then resets it (bzero)
isalpha 	() take char and if it is char return 1, if not 0 (int c - ascii) same for the rest
itoa/atoi () itoa converts int to str, atoi str converts to int. For example we want to return 13 in str, 13/10 = 1 without balance, 13%10 = 3 balance,                for which we allocate space in malloc.
memchr	  (void) detects the first appearance of c in str and then return the waist to length n
memcmp	  () compare str1 and str2, works with any structur. if 1>2 = +, 1<2 = -, 1=2 = 0
strncmp	  () compare str1 and str2, indicating how many bytes of comparison, only works with char.
memmove	  () unlike memcpy's str content saved in other str then we moved to dest. memmove is safer, memcpy does not take into account overlaping, as the              behavior of the matching elements is unpredictable. memcpy (dont used buffer) / memmove (used buffer)
memset	  () write the value c on line b along the length len (converts to unsigned char).
split 		() reads the given str divides it from the part where there is an element with value c. 
strchr		(char) detects the first appearance of c in str and prints the contents that remain after that
strrchr 	() same as strchr but print after the last c encountered
strdup		() copies the contents of str into dest while allocating space to dest in malloc and returns the contents of malloc (dest) (our pointer)
strjoin		() str2 is attached to str1. Unlike strcat, it locates itself with malloc, puts it in dest, and returns the malloc (dest) content. 
strlcpy		() copies and returns the size of the copied str, when strlcat - the size of str and dest.
strlen		() countss the size of str.
strmapi	  () applies the f function to each char of str, allocating space in malloc, and returns the modified str.
striteri 	() same as strmapi, but malloc does not take up space because it is void
strnstr		() finds the "needle" in the len length of the "haystack" str and returns it and what is after it. If len is not enough NULL, "needle" is empty              returns str.
strtrim		() removes the elements in the set from the beginning and the end of str.
substr		() in str write char(substr) from index(start) of length len, to replace the str in our malloc with the return of the substr changed to str
fd		    () file discript - max 65536 files opened at the same time, index(0) = standart input, i(1) = s output, i(2) = s error, i(3) = new file, 
             i(-1) =    not file if file opend and readed put other i()
toupper/tolower ()  given char in uppercase or lowercase letters, +-32 in ascii distance between them
libft.h		() so as not to write the same functions, we add them here as a linker
makefile	() many functions are linked / executed / compiled with each other “target:“ in which parenters are written, commands executed from within them. ar rcs Crate ARchiv, Replace changings in .o, Set indexes for AR(man ar), “.PHONY” if there is a file with the target name, make it for everyone.
wildcard - add the .c that are in the same directory as Makefile. Wildcard is not allowed in the subject.

Bonus Part
lstnew		    () a variable that indicates the first item in the list. We should always check to see if malloc has returned a NULL value. t_list -> node
lstadd_front	() Create a new item and set its value, link the new item to point to the head of the list, set the head of the list to be our new item
lstadd_back	  () we create current, which from the head shows our next lst until it reaches the last and adds new
lstlast		    () performs a cyclic check until the last lst
lstsize		    () counts the number of lsts
lstdellone	  () deletes the contents of our current lst
lstclear		  () Iterate to the node before the node we wish to delete, save the node we wish to delete in a temporary pointer, set the previous node's,                  next pointer to point to the node after the node we wish to delete, delete the node using the temporary pointer
lstiter		    () uses the function f for lst content
lstmap		    () same as lstiter, then creates lst with already modified f

https://docs.google.com/document/d/1TtaWJmjv7x0-fkRSXv2Y_9NaUVYXrESB9WP9ulx6XZQ/edit#
