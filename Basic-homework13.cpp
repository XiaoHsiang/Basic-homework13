#include<iostream>
using namespace std;

int main()
{
    int sex;
    int age;
    printf("請輸入性別和年齡\n");
    printf("男性請輸入1,女性請輸入2\n");
    cin >> sex >> age;
    if( sex==1 && age>=18 )
    {
    printf("你可以結婚\n");
    }
    if( sex==1 && age<18 )
    {
    printf("你不可以結婚\n");
    }
    if( sex==2 && age>=16 )
    {
    printf("妳可以結婚\n");
    }
    if( sex==2 && age<16 )
    {
    printf("妳不可以結婚\n");
    }

    return 0;
}
