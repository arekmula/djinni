// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nested_collection.djinni

#pragma once

#include <string>
#include <unordered_set>
#include <utility>
#include <vector>

namespace testsuite {

struct NestedCollection final {
    std::vector<std::unordered_set<std::string>> set_list;

    //NOLINTNEXTLINE(google-explicit-constructor)
    NestedCollection(std::vector<std::unordered_set<std::string>> set_list_)
    : set_list(std::move(set_list_))
    {}
};

}  // namespace testsuite
