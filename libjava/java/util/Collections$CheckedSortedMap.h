
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_Collections$CheckedSortedMap__
#define __java_util_Collections$CheckedSortedMap__

#pragma interface

#include <java/util/Collections$CheckedMap.h>

class java::util::Collections$CheckedSortedMap : public ::java::util::Collections$CheckedMap
{

public: // actually package-private
  Collections$CheckedSortedMap(::java::util::SortedMap *, ::java::lang::Class *, ::java::lang::Class *);
public:
  virtual ::java::util::Comparator * comparator();
  virtual ::java::lang::Object * firstKey();
  virtual ::java::util::SortedMap * headMap(::java::lang::Object *);
  virtual ::java::lang::Object * lastKey();
  virtual ::java::util::SortedMap * subMap(::java::lang::Object *, ::java::lang::Object *);
  virtual ::java::util::SortedMap * tailMap(::java::lang::Object *);
private:
  static const jlong serialVersionUID = 1599671320688067438LL;
  ::java::util::SortedMap * __attribute__((aligned(__alignof__( ::java::util::Collections$CheckedMap)))) sm;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_Collections$CheckedSortedMap__
