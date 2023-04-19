#include <iostream>
#include <string>

using namespace std;

class Ocean
{
private:
    string name;
    float deep;
    float size;
public:
    string NamesOcean[8] = {
        "�����",
        "�������������",
        "���������",
        "�������� ���������",
        "����� �����",
        "��������������",
        "����������",
        "����������",
    };
    string NamesSea[8] = {
        "��������",
        "�������������",
        "���������",
        "����������",
        "������ ����",
        "����������",
        "���������",
        "����������",
    };
    string NamesBay[8] = {
        "���������",
        "��������",
        "����������������",
        "���������",
        "����������",
        "����������",
        "��������",
        "�������������",
    };

    Ocean()
    {
        name = "�������������";
        deep = 1;
        size = 1;
    }
    Ocean(string N, float D, float S)
    {
        name = N;
        deep = D;
        size = S;
    }

    void setName(string N);
    void setDeep(float D);
    void setSize(float S);

    friend ostream& operator << (ostream& stream, const Ocean obj);
    friend istream& operator << (istream& stream, Ocean obj);
};
