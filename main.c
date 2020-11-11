#include <stdio.h>
double f(double n, ...);
double min(double n, ...);


int main(){


    printf("f=%i",  min(2, 3,7,6,1,9) );
  return 0;
}

double min(double n, ...)    //--заголовок с переменным числом параметров
{   double *p = &n;        //--установились на начало списка параметров
    double min = *p;
    p = &n;

    while (*p)        //--пока аргумент не равен нулю
    { if(*p >*(p+1))//--сравниваем аргументы
        min = *(p+1);
        p++;            //--перемещаемся на следующий аргумент


    }
    return min ; 
}
