// We don't need to call the wrapper through the PLT; we can use a separate
// copy per shared object.

// { dg-require-effective-target tls }
// { dg-options "-std=c++11 -fPIC" }
// { dg-final { scan-assembler-not "_ZTW1i@PLT" { target i?86-*-* x86_64-*-* } } }

extern thread_local int i;

int main()
{
  return i - 42;
}
