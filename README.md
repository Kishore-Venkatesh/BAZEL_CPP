# BAZEL_CPP

Practice of Bazel for C++

# To build a project

    bazel build //:name_in_BUILD

# To run a project

    bazel build //:name_in_BUILD

    bazel-bin/name_in_BUILD

             OR

    bazel run //:name_in_BUILD

# To gtest a project 

    Under MODULE.bazel add,
        bazel_dep(name = "googletest",version = "1.15.2")

    # To run gtest
        bazel test --cxxopt=-std=c++14 --test_output=all //:name_in_BUILD