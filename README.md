# RunTime_Complexity

> Given a vector of integer *input*, and an integer *sum*, return a set of sets {a,b}, where a,b are in the input vector and a+b = sum, which are the numbers in *input* such that they can add up to sum. Function is defined as ```std::set<std::set<int>> twoSum(std::vector<int>& input, int sum)```

- you can assume the vector input doesn't contain duplicated numbers.
- you can only use numbers in vector once.
- if there is no answer, the output should return an empty set.
- you should return **all** results in the input vector if there are multiple answers.
- **Hint**: you may try unordered_map.
- **Hint**: https://www.geeksforgeeks.org/sets-of-pairs-in-c/

- Examples:

  - input = {2,3,4,5}, sum = 7, output = {{2,5},{3,4}}
  - input = {2,3,-2,5,0}, sum = 0, output = {{2,-2}}
  - input = {1,5,4,10}, sum = 200, output = {}

 > NOTE : this code can be written in O(n2) complexity using two vectors, but we will refrain from doing that, as that is not a good coding practise.


## Installation

You can copy this using this command:

```bash
git clone https://github.com/rksingh23/RunTime_Complexity.git
```

### Run main:

You can run this using `blaze`:

```bash
bazel run src/main:main
```

### Run Tests:
You can run unit tests using [`blaze`](#installing-bazel):

```bash
bazel test tests:tests
```

## Installing Bazel
This repo uses `Bazel` for building C++ files.
You can install Bazel using this [link](https://docs.bazel.build/versions/master/install.html).
