#include <iostream>
#include <search.h>
#define NUM 10
int main()
{
    int i, sum, average, highest, score[NUM];
    std::cout << "������� 10 �����������.\n";
    for (i = 0; i < NUM; i++)
        std::cin >> score[i]; /* ���� ������ ����������� */
    std::cout << "������� ��������� ����������:\n";
    for (i = 0; i < NUM; i++)
        std::cout << std::setw(5) << score[i]; /* �������� ������������ ����� */
    std::cout << "\n";
    for (i = 0, sum = 0; i < NUM; i++)
        sum += score[i]; /* ???????????? ????????? ??????? */
    average = sum / NUM; /* ???????????? ????? ?????????? */
    std::cout << "???????? ????????? ????? " << average << ".\n";
    for (highest = score[0], i = 1; i < NUM; i++)
        if (score[i] > highest) /* ????? ?? ??????? ?????? */
            highest = score[i];
    std::cout << "???????????? ????????? ????? " << highest << ".\n";
    return 0;
}
Search Tutorials