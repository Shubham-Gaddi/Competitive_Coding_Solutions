
#include <array>
#include <bitset>

// Enter your code for reversed_binary_value<bool...>()
template <bool ...digits>
int reversed_binary_value(){
    std::array<bool, sizeof...(digits)> ar{digits...};
    std::bitset<sizeof...(digits)> bs; 
    for(std::size_t i = 0; i < ar.size(); ++i) {
        bs[i] = ar[i];
    }
    return bs.to_ulong();
}

