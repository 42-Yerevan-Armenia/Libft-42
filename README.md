# Libft-42

### bzero
<p>ջնջում է str-ի պարունակությունը: Եթե n = 0 է, bzero ոչինչ չի անում:
<p>deletes the contents of str. If n = 0, bzero does nothing.

### malloc
<p>հատկացնումա հիշողություն size չափով և ցուցիչ է վերադարձնում հատկացված հիշողությանը:
<p>allocates memory by size and returns pointer to allocated memory.

![malloc](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Malloc-function-in-c.png)

### calloc
<p>հատկացնումա հիշողության բլոկ, որը հետո այն զրոացնումա (bzero)
<p>allocates a memory block, which then resets it (bzero)

![calloc](https://media.geeksforgeeks.org/wp-content/cdn-uploads/calloc-function-in-c.png)

### isalpha
<p>ստանում է char ու եթե char-ա վերադարձնումա 1 եթե ոչ 0 (int c - ascii) նույնը մնացածի համար
<p>take char and if it is char return 1, if not 0 (int c - ascii) same for the rest

### itoa/atoi
<p>itoa int-ը վերածում է str-ի, atoi str-ը վերածում է int-ի: Օրինակ ուզում ենք վերադարձնի 13 str-ում, 13/10=1 առանց մնացորդի 13%10=3 մնացորդը, որոնց համար malloc-ում տեղ ենք հատկացնում:
<p>itoa converts int to str, atoi str converts to int. For example we want to return 13 in str, 13/10 = 1 without balance, 13%10 = 3 balance, for which we allocate space in malloc.
<p>memchr	(void) փնտրումա մեր str-ում առաջին հանդիպած c արժեքը ու իրանից հետո վերադարձնումա իրան n երկարությամբ
<p>(void) detects the first appearance of c in str and then return the waist to length n

![unsigned](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200806155050/signed-and-unsigned-char-in-C.png)

### memcmp
<p>համեմատումա str1-ը ու str2-ը, աշխատում է ցանկացած ստրուկտուրաի հետ: 
<p>if 1>2 = +, 1<2 = -, 1=2 = 0
<p>compare str1 and str2, works with any structur.

![lstclear](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20200806155050/signed-and-unsigned-char-in-C.png)

### strncmp
<p>համեմատումա str1-ը ու str2-ը, նշելով քանի բայթա համեմատում, աշխատում է միայն char-ով:
<p>if 1>2 = + 1<2 = - 1=2 = 0։
<p>compare str1 and str2, indicating how many bytes of comparison, only works with char.

### memmove
<p>ի տարբերություն memcpy-ի str-ի պարունակությունը պահում է մեկ այլ str-ում հետո move-ենք անում dest-ի մեջ: memmove-ը ավելի ապահով է, memcpy-ը overlaping-ը հաշվի չի առնում, քանի որ համնկնող էլեմենտների դեպքում վարքագիծը անկանխատեսելի է:
<p>unlike memcpy's str content saved in other str then we moved to dest. memmove is safer, memcpy does not take into account overlaping, as the behavior of the matching elements is unpredictable. 
<p>memcpy (dont used buffer) vs memmove (used buffer)

![memcpy](https://www.equestionanswers.com/c/images/memcpy_upper_overlapping.gif)
![memmove](https://www.equestionanswers.com/c/images/memmove_upper_overlapping.gif)

### memset
<p>b տողի վրա գրում է c արժեքը len երկարությամբ (վերածվում է unsigned char-ի):
<p>write the value c on line b along the length len (converts to unsigned char).

### split
<p>կարդում է տվյալ str-ը և այն բաժանուում այն հատվածից որտեղ առկա է c արժեքով էլեմենտ:
<p>reads the given str divides it from the part where there is an element with value c.

![split](https://www.w3resource.com/w3r_images/c-string-image-exercise-31.png)

### strchr
<p>հայտնաբերում է c-ի առաջին հայտնվելը str-ում և տպում դրանից հետո մնացած պարունակությունը
<p>detects the first appearance of c in str and prints the contents that remain after that

### strrchr
<p>նույնը ինչ strchr սակայն տպումա վերջի հանդիպած c-ից հետո
<p>same as strchr but print after the last c encountered
  
![strrchr](https://www.trytoprogram.com/images/working-c-strrchr.jpg)

### strdup
<p>str-ի պարունակությունը copy-ա անում dest-ի մեջ, միաժամանակ տեղ հատկացնելով dest-ին malloc-ում, ու վերադարձնումա malloc(dest)-ի (pointer-ի) պարունակությունը
<p>copies the contents of str into dest while allocating space to dest in malloc and returns the contents of malloc (dest) (our pointer)

### strjoin
<p>str1-ին կպցնում է str2-ը: Ի տարբերություն strcat-ի ինքը malloc-ով տեղա հատկացնում, դնումա dest-ի մեջ ու վերադարձնումա malloc(dest) պարունակությունը: sizeof(char str) * strlen, + 1 վերջին '\0'
<p>str2 is attached to str1. Unlike strcat, it locates itself with malloc, puts it in dest, and returns the malloc (dest) content. sizeof (char str) * strlen, + 1 last '\ 0'

### strlcpy
<p>copy-ա անում ու վերադարձնումա պատճենած str-ի size-ը, իսկ strlcat-ը` str-ի ու dest-ի size-ը:
<p>copies and returns the size of the copied str, when strlcat - the size of str and dest.

### strlen
<p>հաշվարկում է str-ի size-ը:
<p>countss the size of str.

### strmapi
<p>կիրառում է f ֆունկցիան str-ի յուրաքանչյուր char-ի համար, տեղ հատկացնելով malloc-ում, ու վերադարձնումա փոփոխված str-ը:
<p>applies the f function to each char of str, allocating space in malloc, and returns the modified str.

### striteri 
<p>նույնը ինչ strmapi-ին, սակայն malloc-ը տեղ չի հատկացնում քանի որ void-ա
<p>same as strmapi, but malloc does not take up space because it is void

### strnstr
<p>հայտնաբերում է "needle"-ը "haystack" str-ի len երկարությունում և վերադարձնում այն ու նրանից հետո ինչ կա: Եթե չի բավարարում len-ը՝ NULL, "needle" դատարկ է՝ str:
<p>finds the "needle" in the len length of the "haystack" str and returns it and what is after it. If len is not enough NULL, "needle" is empty returns str.

### strtrim
<p>հեռացնում է str-ի սկզբից և վերջից set-ում առկա էլեմենտները:
<p>removes the elements in the set from the beginning and the end of str.

### substr
<p>str-ի մեջ ինչ որ char(substr) index(start)-ից սկցած գրելուա len երկարությամբ, malloc-ով տեղա հատկացնելու մեր str-ին հետո վերադարձնելուա substr-ով փոփոխված str-ը մեզ
<p>in str write char(substr) from index(start) of length len, to replace the str in our malloc with the return of the substr changed to str

![substr](https://www.w3resource.com/w3r_images/oracle-substr-function.png)

### fd
file discript - max 65536 files opened at the same time, index(0) = standart input, i(1) = s output, i(2) = s error, i(3) = new file, i(-1) = not file, if file opend and readed put other i

![fd](https://www.computerhope.com/jargon/f/file-descriptor-illustration.png)

### toupper/tolower
<p>տրված char-ը սարքումա մեծատառ կամ փոքրատառ, +-32-ը ascii-իում իրանց միջև հեռավորություննա
<p>given char in uppercase or lowercase letters, +-32 in ascii distance between them

### libft.h
<p>որպեսզի չգրենք նույն ֆունկցիաները, մենք ավելացնում ենք իրանց այստեղ որպես linker
<p>so as not to write the same functions, we add them here as a linker

### makefile
<p>շատ ֆունկցիաներ կապվում/աշխատացվում/կոմպիլացիա են արվում իրար հետ, “target:“ որում գրվում են parent-րը, իրանցից ներքև կատարվող command-ներն են: ar rcs Crate ARchiv, Replace changings in .o, Set indexes for AR(man ar), “.PHONY” եթե կա target-րի անունով ֆայլ, կատարել make բոլորի համար:
<p>wildcard-ավելացնել այն .c-րը որոնք գտնվում են Makefile-ի հետ նույն directory-ում: Subject-ում wildcard չի թույլատրվում:
many functions are linked / executed / compiled with each other “target:“ in which parenters are written, commands executed from within them. ar rcs Crate ARchiv, Replace changings in .o, Set indexes for AR(man ar), “.PHONY” if there is a file with the target name, make it for everyone.
<p>wildcard - add the .c that are in the same directory as Makefile. Wildcard is not allowed in the subject.

### lstnew
<p>փոփոխական, որը ցույց է տալիս list-ի առաջին կետը: Միշտ պետք է ստուգենք՝ malloc-ը վերադարձրել է NULL արժեք, թե ոչ: t_list -> հանգույց
<p>a variable that indicates the first item in the list. We should always check to see if malloc has returned a NULL value. t_list -> node

![linked_list](https://cdn.mycplus.com/mycplus/wp-content/uploads/2017/09/linked-list.png)

### lstadd_front
<p>ստեղծել նոր lst և հասցեավորել իրեն head-ին
<p>Create a new item and set its value
<p>Link the new item to point to the head of the list
<p>Set the head of the list to be our new item

### lstadd_back
<p>ստեղծում ենք current, որը head-ից սկսացծ ցույց է տալիս մեր next lst-ն մինչև հասնի վերջինին և նոր ավելացնում new
<p>we create current, which from the head shows our next lst until it reaches the last and adds new

### lstlast
<p>կատարում է ցիկլային ստուգում մինչև վերջին lst
<p>performs a cyclic check until the last lst

### lstsize
<p>հաշվում է lst-րի քանակը
<p>counts the number of lsts

### lstdellone
<p>ջնջում է մեր ներկա lst-ի պարունակությունը
<p>deletes the contents of our current lst

### lstclear
<p>մեր ուզածը lst-ն ջնջելու համար պետք է նախ վերահացեավորել նախորդի նախորդին:
<p>"Iterate to the node before the node we wish to delete
<p>Save the node we wish to delete in a temporary pointer
<p>Set the previous node's next pointer to point to the node after the node we wish to delete
<p>Delete the node using the temporary pointer"

![lstclear](https://media.geeksforgeeks.org/wp-content/uploads/CircularDeleteFirstNode.png)

### lstiter
<p>կիրառում f ֆունկցիան յուր. lst-ի պարունակության համար
<p>uses the function f for lst content

### lstmap
<p>կատարում է lstiter-ը, հետո ստեղծում lst արդեն փոփոխված f-ով
<p>same as lstiter, then creates lst with already modified f

## Useful links

<p>https://en.wikipedia.org/wiki/C_string_handling
<p>https://www.learn-c.org/en/Linked_lists
<p>https://www.asciitable.com/
