#ifndef _GAMALLOC_OS_BACKEND 
#define _GAMALLOC_OS_BACKEND 

#include "base_backend.hpp"
namespace gamalloc{
  struct OSBackend : public BaseBackend {
    void* create_block(std::size_t size) override;
    void destroy_block(void* ptr, std::size_t size) override;
    void enlarge_block(void* ptr, std::size_t new_size) override;
    void shrink_block(void* ptr, std::size_t new_size) override;
  };

}
#endif
