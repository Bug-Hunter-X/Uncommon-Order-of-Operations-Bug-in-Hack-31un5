# Uncommon Order of Operations Bug in Hack

This repository demonstrates a subtle bug in Hack related to the order of operations within nested function calls.  The example highlights how seemingly insignificant changes in the call sequence can lead to unexpected and incorrect results.

## Description

The bug revolves around a scenario where the order of function calls, not the inherent operations themselves, influences the final outcome. This is not a typical arithmetic order-of-operations issue, but rather a quirk that arises due to the interplay between functions and their side effects (or lack thereof in this example).

## How to Reproduce

1. Clone this repository.
2. Compile and run the `bug.hh` file (using the appropriate Hack compiler).
3. Observe the unexpected output.
4. Compare the output with the corrected version in `bugSolution.hh`.

## Solution

The solution involves restructuring the function calls to ensure the desired execution order is maintained.  The corrected version is provided in `bugSolution.hh` for comparison.  The key is to recognize that even without explicit side effects, the order of function calls can implicitly alter the flow of data and, thus, the final calculation.

## Note

This issue showcases the importance of meticulous code design and the thorough testing required to prevent unexpected behavior, especially in cases of chained function calls where the internal logic of each function isn't immediately obvious.