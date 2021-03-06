# include "stdio.h"


void  printString ( const  char * string)
{
    printf ( " % s \ n " , строка);
}

void  printArrayString ( const  char * string [])
{
    printf ( " % s \ n " , строка [ 0 ]);
    printf ( " % s \ n " , строка [ 1 ]);
    printf ( " % s \ n " , строка [ 2 ]);
}

const  char * allowedFlags [] = { " --print " , " --god-mode " };
const  char * allowedArgs [] = { " -n " , " -p " , " -j " };

unsigned  int  checkAllowedFlags ( const  char ** const flags)
{
    // для || в то время как
    // если при проходе найден флаг этого нет, то:
    //      printf ("% s \ n", "[-] Плохой аргумент!");
    //      return 0;
    return  1 ;
    // лучше вернуть 1 (если все ок), так проще проверить в if
    // if (checkAllowedFlags) - если все ок, то ...
    // if (! checkAllowedFlags) - если ошибка (вернула 0), то ...
}

int  main ( const  int argc, const  char ** const argv)
{
    // argc - тоже const!
    printf ( " % d \ n " , argc);
    
    если (argc> 1 ) {
        checkAllowedFlags (argv);
    }
    
    // Эти строки должны быть в блоке, если,
    // иначе мы читаем неизвестно какие места памяти,
    // если аругменты не переданы
    printf ( " % s \ n " , argv [ 0 ]); // имя программы
    printf ( " % s \ n " , argv [ 1 ]); // аргумент
    printf ( " % s \ n " , argv [ 2 ]); // аргумент
    
    const  char * hello3 = " Hello3 " ;
    const  char * const hello4 = " Hello4 " ;
    
    const  char * states [] = { "Moscow" , "New-York" , "Kiev" };
    
    printf ( " Hello3: % p \ n " , hello3);
    printf ( " Hello4: % p \ n " , hello4);
    
    // hello3 = hello4;
    
    printf ( " Hello3: % p \ n " , hello3);
    printf ( " Hello4: % p \ n " , hello4);
    
    printf ( " Hello3: % s \ n " , hello3);
    printf ( " Hello4: % s \ n " , hello4);
    
    // hello4 = hello3;
    
    printString (hello3);
    printString (hello4);
    
    // printf ("% s \ n", состояния [0]);
    // printf ("% s \ n", состояния [1]);
    // printf ("% s \ n", состояния [2]);
    
    printArrayString (состояния);
    
    return  0 ;
}
