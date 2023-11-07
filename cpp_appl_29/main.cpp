#include <iostream>
#include<Windows.h>
//���� ��� ������: �[M] � B[N] (M � N ��������� � ���������). ��������� �������� ����� ����� �������� ��������� ������, � ����� ������� ������ �������� ������ A � B, �� �� � �������� ��� ���, ��� ���������.
int main() {
    system("chcp 1251");
    system("cls");
    int M, N;
    std::cout << "������ ����� ������ A (M): ";
    std::cin >> M;
    std::cout << "������ ����� ������ B (N): ";
    std::cin >> N;

    int A[100], B[100], C[200]; 

    std::cout << "������ �������� ������ A:" << std::endl;
    for (int i = 0; i < M; i++) {
        std::cout << "A[" << i << "]: ";
        std::cin >> A[i];
    }

    std::cout << "������ �������� ������ B:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << "B[" << i << "]: ";
        std::cin >> B[i];
    }
    int sizeC = 0;
    for (int i = 0; i < M; i++) {
        bool found = false;

        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            C[sizeC] = A[i];
            sizeC++;
        }
    }

    for (int i = 0; i < N; i++) {
        bool found = false;

        for (int j = 0; j < M; j++) {
            if (B[i] == A[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            C[sizeC] = B[i];
            sizeC++;
        }
    }


    std::cout << "����� C � ���������� ���������� � A � B:" << std::endl;
    for (int i = 0; i < sizeC; i++) {
        std::cout << "C[" << i << "]: " << C[i] << std::endl;
    }

    return 0;
}
