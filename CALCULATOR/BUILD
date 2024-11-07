cc_library(
    name = "calc",
    srcs = ["src/calculator.cpp"],
    hdrs = ["inc/calculator.hpp"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "calculator",
    srcs = ["src/main.cpp"],
    deps = [":calc"],
)