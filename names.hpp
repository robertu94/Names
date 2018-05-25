#include <cstdlib>
#include <cstdint>
namespace util {
namespace names {
template <class T>
struct name
{
  static const char* n;
};

#define decl_name(T)                                                           \
  template <>                                                                  \
  struct name<T>                                                               \
  {                                                                            \
    static const char* const n;                                                \
  };                                                                           \
  const char* const name<T>::n = #T;

decl_name(int8_t)
decl_name(uint8_t)
decl_name(int16_t)
decl_name(uint16_t)
decl_name(float)
decl_name(int32_t)
decl_name(uint32_t)
decl_name(double)
decl_name(long)
decl_name(size_t)
decl_name(unsigned long long)
}
}

