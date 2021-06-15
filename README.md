# optool-ios

A version of [optool](https://github.com/alexzielenski/optool) by Alex Zielenski adapted to run on iOS.

Just build the 'optool' scheme and transfer the binary found in ~/Library/Developer/Xcode/DerivedData/optool/Build/Products/Debug-iphoneos/optool to your iOS device (Xcode believes that it's been built as a library, but in reality it's an executable) 

This was put together in roughly 20 minutes so I could take advantage of the 'optool install -c load -p ...' commands on my mobile device, so not everything may work, but it's enough. 
