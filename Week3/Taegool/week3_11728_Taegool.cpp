#include <bits/stdc++.h>

using namespace std;

int n;
void bar(int x) { for (int i = 0; i < n - x; i++)cout << "____"; }
void recursion(int x) {
    bar(x);
    cout << "\"����Լ��� ������?\"\n";
    if (!x) {
        bar(x);
        cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
        bar(x);
        cout << "��� �亯�Ͽ���.\n";
        return;
    }
    bar(x);
    cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
    bar(x);
    cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
    bar(x);
    cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
    recursion(x - 1);
    bar(x);
    cout << "��� �亯�Ͽ���.\n";
}

int main() {
    cin >> n;
    cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
    recursion(n);
}

    
