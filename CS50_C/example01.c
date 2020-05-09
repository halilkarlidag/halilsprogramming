#include <stdio.h> // printf metdou bu kütüphanede tanımlı olduğu için, bu fonkyinonun çalışması bu 
//ktüphanın programda olup olmamasına bağlıdır.

void hello2(void);
void hello();
// bu programda main hello hello2 olmak üzere toplamda 3 adet metod vardır.
void main(void)
{
    hello(); //hello fonksiyonu parametresiz çağırılmıştır.
    hello2(); //hello2 parametresiz çağırılmıştı.
    hello(1);  //hello parametre ile çağırılmıştır.
    //hello2(1); (hello iki fonsiyonu parametre ile çağrılamaz çünkü input u void olarak tanımlanmıştır. 
    //yane sadece parametresiz olarak çağırılabilir.)
}

void hello2(void)
{
    printf("merhaba Halil2\n");
}

void hello()
{
    printf("merhaba Halil\n");
}
