#include <memory>

template<typename T, bool Extendable = false, typename Allocator = std::allocator<T>>
class circular_buffer {
public:
    circular_buffer(size_t capacity);
};
