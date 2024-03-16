#include <stdio.h>
int main()
{
    printf("----- 2021041069 ������ -----\n");
    int i;
    int *ptr;
    int **dptr;
    i = 1234;

    // �ش� �޸�= �ּҴ� �����ϵǾ� ����� â�� �ִ�
    // �� �޸� �ּҰ��� �������� �ۼ��Ͽ����ϴ�.

    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);    // i���� ����ϹǷ� (1234)�� ��µ�.
    printf("address of i == %p\n", &i); // i�� �ּҰ� (0116F994)�� ���.
    // printf("value of ptr == %p\n", ptr); //ptr�� ����Ű�� ���� ����.(�ʱ�ȭ X)
    printf("address of ptr == %p\n", &ptr);             // ptr�̶�� ������ ������ ����� �޸� �ּҰ�(0116F988)�� ���.
    ptr = &i; /* ptr is now holding the address of i */ // ������ ���� ptr�� int�� ���� i�� �ּҰ��� ����.
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);                          // i�� ���� �ٲ��� �ʾ����Ƿ� �Ȱ��� (1234)�� ���.
    printf("address of i == %p\n", &i);                       // i�� �ּҰ� ���� �ٲ��� �ʾ����Ƿ� �����ϰ� (0116F994).
    printf("value of ptr == %p\n", ptr);                      // ptr�� ���� i�� �ּҰ��� �����ϹǷ� i�� �ּҰ��� (0116F994)�� ���.
    printf("address of ptr == %p\n", &ptr);                   // ������ ���� ptr�� �ּҰ��� ������ ������ (0116F988).
    printf("value of *ptr == %d\n", *ptr);                    // ������ ������ �����ϴ� ���� i�� ���̹Ƿ� (1234) ���.
    dptr = &ptr; /* dptr is now holding the address of ptr */ // �����ͺ��� dptr�� �����ͺ��� ptr�� �ּҰ��� ����.
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);           // ���� �����Ƿ� (1234) ���.
    printf("address of i == %p\n", &i);        // ���� �����Ƿ� (0116F994) ���.
    printf("value of ptr == %p\n", ptr);       // ���� �����Ƿ� (0116F994)���.
    printf("address of ptr == %p\n", &ptr);    // ���� �����Ƿ� (0116F988) ���.
    printf("value of *ptr == %d\n", *ptr);     // ���� �����Ƿ� (1234) ���.
    printf("value of dptr == %p\n", dptr);     // dptr�� ptr�� �ּҰ��� �����Ƿ� (0116F988) ���.
    printf("address of dptr == %p\n", &dptr);  // dptr�� �ּҰ��� 0116F97C�� �Ҵ��� ��. (�� ��ǻ�� ����)
    printf("value of *dptr == %p\n", *dptr);   // dptr�� ������, �� ptr�� ���� �����ϹǷ� (0116F994) ���.
    printf("value of **dptr == %d\n", **dptr); // dptr=&ptr, *dptr=*&ptr=ptr=&i �̹Ƿ� ���� **dptr=i�� ������.
    // ���� i�� ���� 1234�� ��µ�.

    *ptr = 7777; /* changing the value of *ptr */ // ptr�� ������ �ּ��� �������� ����.
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);                  // ptr�� i�� �ּҰ��� �����µ� �� �ּ��� �������� ����Ǿ����Ƿ� i�� �� ���� 7777�� �����.
    printf("value of *ptr == %d\n", *ptr);            //*ptr�� ������ �����ߵ� i�̹Ƿ� ���� ����� i�� ���� (7777)�� ���.
    printf("value of **dptr == %d\n", **dptr);        // dptr�� ���� ���� ���� ������ �����ߵ� i�� ���̹Ƿ� ���� (7777) ���.
    **dptr = 8888; /* changing the value of **dptr */ //**dptr�� �����ϴ� ���� 8888�� ����.
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); // dptr=&ptr, *dptr=*&ptr=ptr=&i �̹Ƿ� ���� **dptr=i�� ����.
    // �׷��Ƿ� ����� i�� ���� 8888�� ���.
    printf("value of *ptr == %d\n", *ptr);     // ���� ���� ������ *ptr=i�̹Ƿ� i�� ���� 8888 ���.
    printf("value of **dptr == %d\n", **dptr); // ���� ���� ������ i�� ���� 8888�� ���.
    return 0;
}