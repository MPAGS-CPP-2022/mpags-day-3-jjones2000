#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <string>
#include <vector>
#include "CipherMode.hpp"

class CaesarCipher {
 public:
  explicit CaesarCipher(const std::size_t cipherKey);
  explicit CaesarCipher(const std::string cipherKey);
  std::string applyCipher(const std::string& inputText,
                       const CipherMode encrypt); 
 
 private:
  // Create the alphabet container
  const std::vector<char> alphabet_ = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
  const std::size_t alphabetSize_{alphabet_.size()};
  size_t key_ = 0;
};
#endif    // MPAGSCIPHER_CARSARCIPHER_HPP
