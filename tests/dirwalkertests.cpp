// Copyright 2021 Semenihin Dmitriy <SemenihinDmit@yandex.ru>

#include <stdexcept>

#include <gtest/gtest.h>

#include <dirwalker.hpp>

TEST(Example, EmptyTest) {
    EXPECT_THROW(example(), std::runtime_error);
}
