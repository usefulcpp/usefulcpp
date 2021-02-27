### Hi there 👋
### The challenge

To get as many C++ developers as possible to contribute their best algorithm/class that they wrote in their live.
How is it supposed to work. By making the nerdiest ice bucket challenge ever!
For now I will remain anonymous and start this repository only with the rules and the examples.
I think this is important because this project is meant to serve as a Swiss knife with plenty of tools for every C++ user out there.
Let's see how it turns out.
I will tweet at three very public C++ developers to contribute their favorite class/algorithm. Then those nominate three other C++ developers and so goes the avalanche.
I would like to be nominated myself :)
I will be responsible for accepting all pull requests, that satisfy the rules and that keeps the build and all tests successful.
The initial tool is going to be cmake. But of course pull requests that introduce other build systems and package managers are accepted along the way. This project is not meant to endorse any tools. The point is to collect useful C++ from as many developers as possible.

Everyone can contribute three files:
src/<yourfeature>.h
src/<yourfeature>.cpp
tests/<yourfeature>.tst.cpp
  
You can find the basic file formats that need to be followed in the subdirectory contrib.
So here are the rules in detail:
  - everyone is allowed to contribute one class or one function in namespace useful.
  - it is allowed to introduce a nested namespace detail<yourfeature> for subfunctions or subtypes.
  - the only dependency you should introduce is standard C++ and standard headers.
  - don't introduce any macros. Don't use include guards, use #pragma once.
  - Only document your one function or class with a doxygen conformant comment.
  - Use your test file to not only verify the correctness, but also to show a motivating example how your function or class is to be used.
  - Don't steal code from your employer or from other people. Be honest.
  - The code must be compilable with a C++17 compliant compiler.

And that's about it. Have fun!
