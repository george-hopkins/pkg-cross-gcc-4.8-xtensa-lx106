
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_http_HTTPConnection$Pool__
#define __gnu_java_net_protocol_http_HTTPConnection$Pool__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace protocol
        {
          namespace http
          {
              class HTTPConnection;
              class HTTPConnection$Pool;
              class HTTPConnection$Pool$Reaper;
          }
        }
      }
    }
  }
}

class gnu::java::net::protocol::http::HTTPConnection$Pool : public ::java::lang::Object
{

  HTTPConnection$Pool();
  static jboolean matches(::gnu::java::net::protocol::http::HTTPConnection *, ::java::lang::String *, jint, jboolean);
public: // actually package-private
  virtual ::gnu::java::net::protocol::http::HTTPConnection * get(::java::lang::String *, jint, jboolean, jint, jint);
  virtual void put(::gnu::java::net::protocol::http::HTTPConnection *);
  virtual void removeOldest();
  static ::gnu::java::net::protocol::http::HTTPConnection$Pool * instance;
  ::java::util::LinkedList * __attribute__((aligned(__alignof__( ::java::lang::Object)))) connectionPool;
  jint maxConnections;
  jint connectionTTL;
  ::gnu::java::net::protocol::http::HTTPConnection$Pool$Reaper * reaper;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_protocol_http_HTTPConnection$Pool__
