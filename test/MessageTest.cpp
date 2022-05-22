//
// Created by Maria on 22/05/2022.
//

#include "gtest/gtest.h"
#include "../Message.h"


TEST(Message, GetterSetter) {
    Message mes("Maria", "Sara", "Hi Sara, what's up?");
    ASSERT_EQ(mes.getSender(), "Maria");
    ASSERT_EQ(mes.getReceiver(), "Sara");
    ASSERT_EQ(mes.getText(), "Hi Sara, what's up?");
    ASSERT_EQ(mes.isRead(), false);
    mes.setRead(true);
    ASSERT_EQ(mes.isRead(), true);

}
