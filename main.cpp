#include <iostream>
using namespace std;
//ngg
// is where it's at.
class RGBA {
private:
    uint8_t m_red;
    uint8_t m_green;
    uint8_t m_blue;
    uint8_t m_alpha;
public:
    RGBA(uint8_t r_ = 255, uint8_t g_ = 255, uint8_t b_ = 255, uint8_t a_ = 255)
            : m_red(r_), m_green(g_), m_blue(b_), m_alpha(a_)
    {}
    void print() {
        cout << "r = " << static_cast<int>(m_red) << " ";
        cout << "g = " << static_cast<int>(m_green) << " ";
        cout << "b = " << static_cast<int>(m_blue) << " ";
        cout << "a = " << static_cast<int>(m_alpha) << " " << endl;

    }
};

int main() {

    RGBA teal(0, 127, 127);
    teal.print();

    return 0;
}
