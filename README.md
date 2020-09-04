# QoL tools and tweaks for Windows

This repository contains assorted tools and tweaks for Microsoft Windows that aim to provide small Quality of Life (QoL) improvements to the user experience. Note that these tools and tweaks target **Windows 10** and have not been tested on older versions of Windows. You can find precompiled binaries for the tools on the [releases page](https://github.com/adamrehn/qol-windows/releases), all of which require the [Microsoft Visual C++ Redistributable for Visual Studio 2015, 2017 and 2019](https://support.microsoft.com/en-au/help/2977003/the-latest-supported-visual-c-downloads) to be installed.

The following tools and tweaks are currently available:

- [**ScreenOff**](./tools/ScreenOff): this is a simple executable that instructs Windows to turn off the screen as though it had been triggered by a timeout configured in the system power and sleep settings. This is primarily useful in multi-monitor environments when the user wants to turn all displays off at once without disturbing the layout of their open windows, since physically powering down any given display will typically move all open windows to one of the remaining displays. Bind the executable to a keyboard shortcut for the best effect.
