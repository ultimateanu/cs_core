package(
    default_visibility = ["//visibility:public"],
)

cc_binary(
    name = "demo",
    srcs = ["demo.cc"],
    deps = [":linked_list"],
)

cc_library(
    name = "linked_list",
    srcs = ["linked_list.cc"],
    hdrs = ["linked_list.h"],
)
