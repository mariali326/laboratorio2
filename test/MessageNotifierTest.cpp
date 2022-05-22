//
// Created by Maria on 22/05/2022.
//

#include "gtest/gtest.h"
#include "../MessageNotifier.h"

TEST(MessageNotifier, isActive) {
    User a("Maria");
    User b("Sara");
    Chat c (a, b);
    MessageNotifier m(true,&c);
    ASSERT_TRUE(m.isActive());
    m.setActive(false);
    ASSERT_FALSE(m.isActive());
}