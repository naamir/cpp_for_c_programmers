#include <string> // for string class
using namespace std;

class Node
{
    public:
        Node(); // constructor
        Node(int num);
        ~Node(); // destrutor
        int getNum();
    private:
        int num;
        string name;
        Node *next;
};