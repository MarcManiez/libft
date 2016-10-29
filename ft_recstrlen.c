#include "libft.h"

// size_t ft_recstrlen(const char *str, size_t i) {
//   return (str[i]) ? ft_recstrlen(str, i+1) : i;
// }

size_t ft_recstrlen(const char *str) {
  return (*str) ? ft_recstrlen(++str) + 1 : 0;
}
