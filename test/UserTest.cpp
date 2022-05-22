//
// Created by Maria on 22/05/2022.
//

#include "gtest/gtest.h"
#include "../User.h"

TEST(User, GetterSetter) {
    User l("Lapo");
    ASSERT_EQ(l.getName(), "Lapo");
    l.setName("Gianluca");
    ASSERT_EQ(l.getName(), "Gianluca");
}