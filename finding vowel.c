/*Finding vowel*/
#include<stdio.h>
char main()
{
    char ch;

    printf("Enter the character : ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a' :
        printf("%c is a Vowel",ch);
        break;

        case 'e':
        printf("%c is a Vowel",ch);
        break;

        case 'i' :
        printf("%c is a Vowel",ch);
        break;

         case 'o' :
        printf("%c is a Vowel",ch);
        break;

         case 'u' :
        printf("%c is a Vowel",ch);
        break;

         case 'A' :
        printf("%c is a Vowel",ch);
        break;

         case 'E' :
        printf("It is a Vowel");
        break;

         case 'I' :
        printf("%c is a Vowel",ch);
        break;

         case 'O' :
        printf("%c is a Vowel",ch);
        break;


         case 'U' :
        printf("%c is a Vowel",ch);
        break;

        default :
        printf("%c is not a Vowel",ch);
        break;
    }

    return 0;

}
