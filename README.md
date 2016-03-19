# QtQuick-with-cmake
This template project shows how to use cmake to build a standard QtQuick project that uses QML and C++. It assumes you'll use Qt5, Visual Studio 2013 as well as CMake 2.8.x+. Attempts have been made to make updating these versions very easy by adhering to the most standard make/Qt practices. While not tested, some simple modifications should allow this to work for linux and Mac builds as well. The goal of this template is to provide a simple 'getting started' root implementation that is easy to understand and extendable in the direction you want to take it.

# Purpose
One of the most difficult things about getting started with QtQuick/QML is understanding how to us QtQuick in a 'modern' development environment. Qt provides a lot of good build tools (such as qmake), testing (qtest), and debugging tools that work very well on their own, but those tools do not integrate well into more complex professional development environments. By 'professional environments' we mean the use cmake, IDE's such as Visual Studio/Xcode/etc, and integration with standard testing platforms such as gtest.

In my own attempts to get up to speed, I was surprised the essential "getting started" information was scattered and missing. I had to use a number of forums to put all the pieces together and saw many other developers struggling with these steps too. So, this should not be considered a canonical guide on how to use cmake with QtQuick/C++ backends, but as one example of many possible ways. It is also not complete. To be complete, much more work needs to be done, but I found those additions began to get in the way of the core learning that was required to get started.

# Resources
[Official Qt starting point doc for using CMake with Qt](http://doc.qt.io/qt-5/cmake-manual.html)


