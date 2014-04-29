#ifndef DISTANCES_HPP
#define DISTANCES_HPP
namespace fastdtw_cpp {
namespace distances {
template<typename T>
T def_distance(const T s, const T t)
{
    return std::abs(s - t);
}
}

}
#endif // DISTANCES_HPP
