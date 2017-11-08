# C++ Exercise: Manual virtual

Be a compiler – call virtual functions manually.
1. Create a small hierarchy of classes: Base class with a virtual method,
one child without override and one with an override.
2. Create an instance of each class, and send it to a function that
receive a pointer to the base class.
3. The function should call the appropriate method “the hard way”, by
invoking the appropriate method in runtime. Do not rely on the
compiler (do not use p->method();).