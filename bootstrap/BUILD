cc_library(
    name = "bootstrap_lib",
    srcs = glob(
        ["*.cpp"],
        exclude = ["test.cpp"],
    ),
    hdrs = glob(["*.h"]),
)

cc_test(
    name = "bootstrap_test",
    srcs = ["test.cpp"],
    deps = [
        ":bootstrap_lib",
        "@googletest//:gtest",
        "@googletest//:gtest_main",
    ],
)
