cppcalc
--------------------------------------------------------------------------------
These are the instructions for using cppcalc.

When cppcalc is executed, it first asks wether or not the user wants to use the
hyperoperations, currently, this is the only option supported. Then, it asks if
the user wants to use positive or negative hyperoperations. It then asks for the
degree of hyperoperation, supporting values from 0-4 for positive and 0-3 for
negative.

When it says "Give me a value" it is asking for the first value in the operation.
For example, if the user chose the degree two (multiplication) the equation it
is solving is x*y, when it says "Give me a value" it asks for x, when it says
"Give me another one" it asks for y. This is the same for all binary operations.

Currently, (v1.2) when the user chooses exponentiation, it asks wether they want
integer or real exponentiation. This is added so large integer exponentiations
such as 2^65536 return the actual value instead of inf when they are performed
in integer mode.
