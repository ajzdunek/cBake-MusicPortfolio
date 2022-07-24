#ifndef BAKE_PRINTER_H
#define BAKE_PRINTER_H

#include <string>
#include "template.hpp"
#include "post.hpp"
using namespace std;

namespace bake {
  class Printer {
    string filename;

public:

    Printer(string);

    void print(bake::Tree *,
               vector<Post *>);
    void print(bake::Tree *,
               bake::Post *);
  };
}

#endif /* BAKE_PRINTER_H */
