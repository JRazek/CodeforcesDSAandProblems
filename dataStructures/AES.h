#ifndef JR_AES_H
#define JR_AES_H


#include <array>
#include <algorithm>
#include "Matrix.h"
#include <random>
#include <cstdint>
#include <cstdio>


namespace jr{
namespace crypt{



enum class AES_TYPE{
    AES_256 = std::size_t(256)
};
template <typename Enumeration>
constexpr auto as_integer(Enumeration const value) -> typename std::underlying_type<Enumeration>::type{
    return static_cast<typename std::underlying_type<Enumeration>::type>(value);
}

constexpr auto build_s_box(){
    constexpr std::size_t N=256;
    std::array<u_int8_t, N> s_box={
        0x54, 0x24, 0xb5, 0xfa, 0x85, 0x6f, 0x45, 0xee, 0x04, 0x49, 0xa9, 0x2c, 0x13, 0xca, 0x4e, 0xd4, 
        0x22, 0x03, 0x01, 0x4c, 0x00, 0xb6, 0x66, 0xf9, 0xe2, 0xb9, 0xde, 0x63, 0x44, 0xf6, 0x5a, 0x3f, 
        0x5f, 0xf4, 0x84, 0x91, 0xeb, 0x8f, 0xd7, 0xc5, 0x5e, 0x1f, 0x53, 0x06, 0x8d, 0x2a, 0xe5, 0x02, 
        0xf2, 0x05, 0x55, 0x86, 0xb8, 0x33, 0xbf, 0x99, 0x90, 0xf7, 0xbb, 0x27, 0xd3, 0x51, 0x19, 0xb7, 
        0x70, 0x3d, 0x58, 0x0f, 0xc3, 0x64, 0x57, 0x81, 0xaf, 0xbd, 0x97, 0x12, 0xf3, 0x95, 0x96, 0x3a, 
        0x1c, 0x7e, 0x1d, 0x9c, 0x9f, 0xb4, 0xe1, 0xc8, 0x6e, 0xb0, 0xa3, 0x75, 0xd0, 0xa2, 0x9d, 0x7d, 
        0xae, 0x32, 0x26, 0x43, 0x28, 0x78, 0x61, 0x14, 0x23, 0xac, 0x30, 0xfb, 0x59, 0x8c, 0xab, 0xc9, 
        0x62, 0xa7, 0xe4, 0x1b, 0xdf, 0x56, 0xdb, 0x0e, 0xf1, 0x4a, 0xc4, 0x93, 0xb1, 0xed, 0x82, 0x80, 
        0xcc, 0xdd, 0xb2, 0x2f, 0xc6, 0x16, 0xa8, 0x88, 0x11, 0x9e, 0x6a, 0xe9, 0x77, 0x31, 0xd5, 0xa1, 
        0xc7, 0xdc, 0xd6, 0xe0, 0x6b, 0xfc, 0x0a, 0x8b, 0x7c, 0x1a, 0x74, 0xff, 0xf8, 0x79, 0x41, 0x5d, 
        0xad, 0x6c, 0x8e, 0x1e, 0x17, 0xce, 0xa4, 0x92, 0x07, 0xb3, 0x2b, 0x10, 0x2d, 0x18, 0xc1, 0x34, 
        0xcd, 0x9a, 0x42, 0x94, 0x52, 0x38, 0xda, 0xe6, 0x65, 0xe7, 0xf0, 0x47, 0xe8, 0xea, 0x9b, 0x3b, 
        0xcb, 0x5b, 0x3c, 0x40, 0x15, 0xd8, 0x0d, 0x5c, 0xe3, 0x4f, 0x4b, 0xbe, 0x36, 0xd1, 0xfd, 0xc2, 
        0x71, 0x76, 0x7f, 0x46, 0x68, 0x69, 0xef, 0x2e, 0xc0, 0xba, 0x89, 0x0c, 0xf5, 0xcf, 0x4d, 0x0b, 
        0xd9, 0x09, 0x50, 0xfe, 0xaa, 0x48, 0x8a, 0x83, 0x87, 0xa5, 0x08, 0xd2, 0x7a, 0x35, 0xbc, 0xa0, 
        0x72, 0x98, 0x6d, 0x29, 0x25, 0x7b, 0x3e, 0x60, 0x21, 0x67, 0x37, 0x73, 0xa6, 0xec, 0x39, 0x20
    };
    return s_box;
}

template<
    AES_TYPE aes_type
>
class AES{
    constexpr static inline auto N=as_integer(aes_type);
    constexpr static inline auto s_box=build_s_box();
public:
};



}
};



#endif //JR_AES_H
