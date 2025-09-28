#ifndef _GAMALLOC_BASE_BACKEND
#define _GAMALLOC_BASE_BACKEND

#include <cstdint>

namespace gamalloc {
  struct BaseBackend {
    virtual void * create_block(std::size_t size)=0;
    virtual void  destroy_block(void* ptr, std::size_t size)=0;
    virtual void enlarge_block(void* ptr, std::size_t new_size)=0;
    virtual void shrink_block(void* ptr, std::size_t new_size)=0;
  };
} // namespace gamalloc
#endif
