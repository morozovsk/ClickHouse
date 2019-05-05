#include <Functions/IFunction.h>
#include <Functions/FunctionFactory.h>
#include <Functions/DateTimeTransforms.h>
#include <Functions/FunctionDateOrDateTimeToSomething.h>
#include <DataTypes/DataTypesNumber.h>


namespace DB
{

using FunctionToStartOfCustomYear = FunctionDateOrDateTimeToSomething<DataTypeDate, ToStartOfCustomYearImpl>;

void registerFunctionToStartOfCustomYear(FunctionFactory & factory)
{
    factory.registerFunction<FunctionToStartOfCustomYear>();
}

}


