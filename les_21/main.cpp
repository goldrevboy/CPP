#include<iostream>

class Cents
{
private:
    int m_cents{};
public:
    Cents(int cents=0)
        : m_cents{ cents }
    {
    }

    // Overloaded int cast
    operator int() { return m_cents; }

    int getCents() const { return m_cents; }
    void setCents(int cents) { m_cents = cents; }
};

int main(){

    Cents cents1{ 5 };
    std:: cout << "Cents1: " << static_cast<int>(cents1) << std::endl;

    return 0;
}
