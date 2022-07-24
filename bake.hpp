/*
        Copyright © 2015 Felipe Tavares <felipe.oltavares@gmail.com>

        This work is free. You can redistribute it and/or modify it under the
        terms of the Do What The Fuck You Want To Public License, Version 2,
        as published by Sam Hocevar. See the LICENSE file for more details.
 */

#ifndef BAKE_H
#define BAKE_H

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif // ifdef HAVE_CONFIG_H

#include "bakefile.hpp"
#include "template.hpp"
#include "post.hpp"
#include "printer.hpp"
#include "windows.hpp"

namespace bake {
  string escape_html(string);
}

#endif /* BAKE_H */
