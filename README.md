# Libft-42

#### bzero
ջնջում է str-ի պարունակությունը: Եթե n = 0 է, bzero ոչինչ չի անում:
deletes the contents of str. If n = 0, bzero does nothing.

#### malloc
հատկացնումա հիշողություն size չափով և ցուցիչ է վերադարձնում հատկացված հիշողությանը:
allocates memory by size and returns pointer to allocated memory.

#### calloc
հատկացնումա հիշողության բլոկ, որը հետո այն զրոացնումա (bzero)
allocates a memory block, which then resets it (bzero)

#### isalpha
ստանում է char ու եթե char-ա վերադարձնումա 1 եթե ոչ 0 (int c - ascii) նույնը մնացածի համար
take char and if it is char return 1, if not 0 (int c - ascii) same for the rest

#### itoa/atoi
itoa int-ը վերածում է str-ի, atoi str-ը վերածում է int-ի: Օրինակ ուզում ենք վերադարձնի 13 str-ում, 13/10=1 առանց մնացորդի 13%10=3 մնացորդը, որոնց համար malloc-ում տեղ ենք հատկացնում:
itoa converts int to str, atoi str converts to int. For example we want to return 13 in str, 13/10 = 1 without balance, 13%10 = 3 balance, for which we allocate space in malloc.
memchr	(void) փնտրումա մեր str-ում առաջին հանդիպած c արժեքը ու իրանից հետո վերադարձնումա իրան n երկարությամբ
(void) detects the first appearance of c in str and then return the waist to length n

#### memcmp
համեմատումա str1-ը ու str2-ը, աշխատում է ցանկացած ստրուկտուրաի հետ: 
if 1>2 = +, 1<2 = -, 1=2 = 0
compare str1 and str2, works with any structur.

#### strncmp
համեմատումա str1-ը ու str2-ը, նշելով քանի բայթա համեմատում, աշխատում է միայն char-ով:
if 1>2 = + 1<2 = - 1=2 = 0։
compare str1 and str2, indicating how many bytes of comparison, only works with char.

#### memmove
ի տարբերություն memcpy-ի str-ի պարունակությունը պահում է մեկ այլ str-ում հետո move-ենք անում dest-ի մեջ: memmove-ը ավելի ապահով է, memcpy-ը overlaping-ը հաշվի չի առնում, քանի որ համնկնող էլեմենտների դեպքում վարքագիծը անկանխատեսելի է:
unlike memcpy's str content saved in other str then we moved to dest. memmove is safer, memcpy does not take into account overlaping, as the behavior of the matching elements is unpredictable. 
memcpy (dont used buffer) vs memmove (used buffer)

#### memset
b տողի վրա գրում է c արժեքը len երկարությամբ (վերածվում է unsigned char-ի):
write the value c on line b along the length len (converts to unsigned char).

#### split
կարդում է տվյալ str-ը և այն բաժանուում այն հատվածից որտեղ առկա է c արժեքով էլեմենտ:
reads the given str divides it from the part where there is an element with value c. 

#### strchr
հայտնաբերում է c-ի առաջին հայտնվելը str-ում և տպում դրանից հետո մնացած պարունակությունը
detects the first appearance of c in str and prints the contents that remain after that

#### strrchr
նույնը ինչ strchr սակայն տպումա վերջի հանդիպած c-ից հետո
same as strchr but print after the last c encountered

#### strdup
str-ի պարունակությունը copy-ա անում dest-ի մեջ, միաժամանակ տեղ հատկացնելով dest-ին malloc-ում, ու վերադարձնումա malloc(dest)-ի (pointer-ի) պարունակությունը
copies the contents of str into dest while allocating space to dest in malloc and returns the contents of malloc (dest) (our pointer)

#### strjoin
str1-ին կպցնում է str2-ը: Ի տարբերություն strcat-ի ինքը malloc-ով տեղա հատկացնում, դնումա dest-ի մեջ ու վերադարձնումա malloc(dest) պարունակությունը: sizeof(char str) * strlen, + 1 վերջին '\0'
str2 is attached to str1. Unlike strcat, it locates itself with malloc, puts it in dest, and returns the malloc (dest) content. sizeof (char str) * strlen, + 1 last '\ 0'

#### strlcpy
copy-ա անում ու վերադարձնումա պատճենած str-ի size-ը, իսկ strlcat-ը` str-ի ու dest-ի size-ը:
copies and returns the size of the copied str, when strlcat - the size of str and dest.

#### strlen
հաշվարկում է str-ի size-ը:
countss the size of str.

## strmapi
կիրառում է f ֆունկցիան str-ի յուրաքանչյուր char-ի համար, տեղ հատկացնելով malloc-ում, ու վերադարձնումա փոփոխված str-ը:
applies the f function to each char of str, allocating space in malloc, and returns the modified str.

#### striteri 
նույնը ինչ strmapi-ին, սակայն malloc-ը տեղ չի հատկացնում քանի որ void-ա
same as strmapi, but malloc does not take up space because it is void

#### strnstr
հայտնաբերում է "needle"-ը "haystack" str-ի len երկարությունում և վերադարձնում այն ու նրանից հետո ինչ կա: Եթե չի բավարարում len-ը՝ NULL, "needle" դատարկ է՝ str:
finds the "needle" in the len length of the "haystack" str and returns it and what is after it. If len is not enough NULL, "needle" is empty returns str.

#### strtrim
հեռացնում է str-ի սկզբից և վերջից set-ում առկա էլեմենտները:
removes the elements in the set from the beginning and the end of str.

#### substr
str-ի մեջ ինչ որ char(substr) index(start)-ից սկցած գրելուա len երկարությամբ, malloc-ով տեղա հատկացնելու մեր str-ին հետո վերադարձնելուա substr-ով փոփոխված str-ը մեզ
in str write char(substr) from index(start) of length len, to replace the str in our malloc with the return of the substr changed to str

#### fd
file discript - max 65536 files opened at the same time, index(0) = standart input, i(1) = s output, i(2) = s error, i(3) = new file, i(-1) = not file, if file opend and readed put other i

#### toupper/tolower
տրված char-ը սարքումա մեծատառ կամ փոքրատառ, +-32-ը ascii-իում իրանց միջև հեռավորություննա
given char in uppercase or lowercase letters, +-32 in ascii distance between them

#### libft.h
որպեսզի չգրենք նույն ֆունկցիաները, մենք ավելացնում ենք իրանց այստեղ որպես linker
so as not to write the same functions, we add them here as a linker

#### makefile
շատ ֆունկցիաներ կապվում/աշխատացվում/կոմպիլացիա են արվում իրար հետ, “target:“ որում գրվում են parent-րը, իրանցից ներքև կատարվող command-ներն են: ar rcs Crate ARchiv, Replace changings in .o, Set indexes for AR(man ar), “.PHONY” եթե կա target-րի անունով ֆայլ, կատարել make բոլորի համար:
wildcard-ավելացնել այն .c-րը որոնք գտնվում են Makefile-ի հետ նույն directory-ում: Subject-ում wildcard չի թույլատրվում:
many functions are linked / executed / compiled with each other “target:“ in which parenters are written, commands executed from within them. ar rcs Crate ARchiv, Replace changings in .o, Set indexes for AR(man ar), “.PHONY” if there is a file with the target name, make it for everyone.
wildcard - add the .c that are in the same directory as Makefile. Wildcard is not allowed in the subject.

#### lstnew
փոփոխական, որը ցույց է տալիս list-ի առաջին կետը: Միշտ պետք է ստուգենք՝ malloc-ը վերադարձրել է NULL արժեք, թե ոչ: t_list -> հանգույց
a variable that indicates the first item in the list. We should always check to see if malloc has returned a NULL value. t_list -> node

#### lstadd_front
ստեղծել նոր lst և հասցեավորել իրեն head-ին
"Create a new item and set its value
Link the new item to point to the head of the list
Set the head of the list to be our new item"

#### lstadd_back
ստեղծում ենք current, որը head-ից սկսացծ ցույց է տալիս մեր next lst-ն մինչև հասնի վերջինին և նոր ավելացնում new
we create current, which from the head shows our next lst until it reaches the last and adds new

#### lstlast
կատարում է ցիկլային ստուգում մինչև վերջին lst
performs a cyclic check until the last lst

#### lstsize
հաշվում է lst-րի քանակը
counts the number of lsts

#### lstdellone
ջնջում է մեր ներկա lst-ի պարունակությունը
deletes the contents of our current lst

#### lstclear
մեր ուզածը lst-ն ջնջելու համար պետք է նախ վերահացեավորել նախորդի նախորդին:
"Iterate to the node before the node we wish to delete
Save the node we wish to delete in a temporary pointer
Set the previous node's next pointer to point to the node after the node we wish to delete
Delete the node using the temporary pointer"

#### lstiter
կիրառում f ֆունկցիան յուր. lst-ի պարունակության համար
uses the function f for lst content

#### lstmap
կատարում է lstiter-ը, հետո ստեղծում lst արդեն փոփոխված f-ով
same as lstiter, then creates lst with already modified f

## Useful links

https://en.wikipedia.org/wiki/C_string_handling
https://www.learn-c.org/en/Linked_lists
https://www.asciitable.com/
