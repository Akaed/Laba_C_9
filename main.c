#include <stdio.h>
double f(double n, ...);
double min(double n, ...);


int main(){


    printf("f=%i",  min(2, 3,7,6,1,9) );
  return 0;
}

double min(double n, ...)    //--��������� � ���������� ������ ����������
{   double *p = &n;        //--������������ �� ������ ������ ����������
    double min = *p;
    p = &n;

    while (*p)         //--���� �������� �� ����� ����
    { if(*p >*(p+1))//--���������� ���������
        min = *(p+1);
        p++;             //--������������� �� ��������� ��������

    }
    return min ;   //--���������� �������
}
