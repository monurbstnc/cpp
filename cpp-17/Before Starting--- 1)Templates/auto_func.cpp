/*
Auto function will generate a function template behind the scenes

auto func_add(auto a, auto b)
{
    return a + b;
}

The compiler will  implicitly treats it as a function template (since C++ 20 ), This is not valid in C++17,
cause You cannot use auto directly as a function parameter type in C++17 or lower versions

Equivalent of this 
template <typename T, typename P>
decltype(auto) func_add(T a, P b)
{
    return a+b;
}

Since it is implicitly treated as decltype_auto function template, we can not separate the function as definition and declaration.


If we create our function like below, we can separate it as declaration and definition

//Declaration
auto add ( auto a , auto b) -> decltype(a +b);


//Definition
auto add ( auto a , auto b)-> decltype(a +b){
    return a + b;
}


*/





