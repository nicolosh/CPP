#ifndef REVIEW_H
#define REVIEW_H

#include <iostream>

class Review
{
public:
  Review(unsigned int r, const std::string &t, const std::string &txt);
  ~Review();
  void displayDetails() const;

  // getters
  unsigned int getRating() { return rating; };
  std::string getTitle() { return title; };
  std::string getTxt() { return text; };

  // setters
  void setRating(unsigned int r);
  void setTitle(const std::string &t);
  void setTxt(const std::string &txt);

private:
  static const unsigned int MIN_RATING = 1;
  static const unsigned int MAX_RATING = 5;
  static const unsigned int MAX_TITLE_LENGTH = 128;
  static const unsigned int MAX_TEXT_LENGTH = 1024;
  std::string validateAndTrim(const std::string &str,
                              unsigned int maxLength,
                              const std::string &fieldName) const;
  unsigned int rating;
  std::string title;
  std::string text;
  mutable unsigned int accessCount = 0;
};

#endif