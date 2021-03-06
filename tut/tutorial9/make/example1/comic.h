#ifndef __COMIC_H__
#define __COMIC_H__
#include <string>
#include "book.h"


class Comic: public Book {
  std::string protag;
 public:
  Comic(std::string title, std::string author, int numPages, std::string protag);
  std::string getProtagonist() const;
  bool isItHeavy() const;
  bool favourite() const;
};

#endif
