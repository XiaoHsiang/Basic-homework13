#include<iostream>
using namespace std;

int main()
{
    int sex;
    int age;
    printf("�п�J�ʧO�M�~��\n");
    printf("�k�ʽп�J1,�k�ʽп�J2\n");
    cin >> sex >> age;
    if( sex==1 && age>=18 )
    {
    printf("�A�i�H���B\n");
    }
    if( sex==1 && age<18 )
    {
    printf("�A���i�H���B\n");
    }
    if( sex==2 && age>=16 )
    {
    printf("�p�i�H���B\n");
    }
    if( sex==2 && age<16 )
    {
    printf("�p���i�H���B\n");
    }

    return 0;
}
