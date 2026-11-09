#include <memory>

template <typename T>
class Node {
    private:
        T data;
        Node<T>* father;
        std::unique_ptr<T> son_1;
        std::unique_ptr<T> son_2;
    public:
        
};