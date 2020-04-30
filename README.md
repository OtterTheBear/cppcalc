# cppcalc
---
These are the instructions for using cppcalc.

When cppcalc is executed, it first asks wether or not the user wants to use the
hyperoperations, currently, this is the only option supported. Then, it asks if
the user wants to use positive or negative hyperoperations. It then asks for the
degree of hyperoperation, supporting values from 0-4 for positive and 0-3 for
negative.

When it says "Give me a value" it is asking for the first value in the
operation. For example, if the user chose the degree two (multiplication) the
equation it is solving is x\*y, when it says "Give me a value" it asks for x,
when it says "Give me another one" it asks for y. This is the same for all
binary operations.

Currently, when the user chooses exponentiation, it asks wether they want
integer or real exponentiation. This is added so large integer exponentiations
such as 2^65536 return the actual value instead of inf when they are performed
in integer mode.

## cmdcppcalc

"cmdcppcalc" is a feature added to cppcalc in version 1.4 which allows the
skipping of menus and for the user to directly get results. To use cmdcppcalc,
when you run cppcalc specify an operation and two operands. An example of using
cmdcppcalc for raising 8 to the power of 8 is shown below.
```bash
    $ ./main pow 8 8
    The result is 16777216
```
As of v1.5 cmdcppcalc supports adding, multiplying, powering, and
tetrating, but doesn't support floating-point values as inputs.
The list of operations is below.

add - addition
mul - multiplication
pow - powering
trt - tetrating

## Reading this file

In v1.5 and later it is possible to read this file (README.md) using
```bash
    $ ./main help
```
## Features

cppcalc has support for sucession, addition, multiplication, exponentiation,
tetration, predecession, subtraction, division, and roots.

## Future

The next few updates will add logarithms and maybe generalised hyperoperations.

## Version

Your version of cppcalc is 1.5.2
