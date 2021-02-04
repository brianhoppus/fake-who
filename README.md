# fake-who

========

An exploration of hiding your user activity from other active users on a Linux system. Of course, only do this on your on hardware.

## Requirements

* Access to a Linux system
* gcc

## How to Build

1) Run the makefile
`make`

2) Run the newly-built binary
`./who`

3) Optional: Replace your system who binary with the new one you built
`sudo mv ./who $(which who)`

