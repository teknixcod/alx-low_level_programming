#include <stdio.h>
#include "variadic_functions.h"
/**

 * sum_them_all - Returns the sum of all its paramters.

 * @count: The number of paramters passed to the function.

 * @...: A variable number of paramters to calculate the sum of.

 *

 * Return: If count == 0 - 0.

 *         Otherwise - the sum of all parameters.

 */

int sum_them_all(const unsigned int count, ...) {
    va_list func;
    va_start(func, count);

    unsigned int a, result = 0;
    for (a = 0; a < count; a++) {
        int sum = va_arg(func, int);
        result += sum;
    }

    va_end(func);
    return result;