
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_Appendable__
#define __java_lang_Appendable__

#pragma interface

#include <java/lang/Object.h>

class java::lang::Appendable : public ::java::lang::Object
{

public:
  virtual ::java::lang::Appendable * append(jchar) = 0;
  virtual ::java::lang::Appendable * append(::java::lang::CharSequence *) = 0;
  virtual ::java::lang::Appendable * append(::java::lang::CharSequence *, jint, jint) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_lang_Appendable__
