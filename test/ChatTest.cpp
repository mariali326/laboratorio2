//
// Created by Maria on 22/05/2022.
//

#include "gtest/gtest.h"
#include "../Chat.h"

class ChatTest : public ::testing::Test {
protected:
    User a("Maria");
    User b("Chiara");

    TEST_F(ChatTest,GetterSetter){
        Chat c (a, b);
        ASSERT_EQ(c.getMyName(), "Maria");
        c.setMyName("Chiara");
        ASSERT_EQ(c.getMyName(), "Chiara");
        ASSERT_EQ(c.getOtherName(),"Sara");
        c.setOtherName("Francesca");
        ASSERT_EQ(c.getOtherName(), "Francesca");
    }

    TEST_F(ChatTest,functions){
        Chat c (a, b);
        const Message mes ("Chiara","Maria", "Hi Maria, how are you?");
        c.addMessage (mes);
        ASSERT_EQ(c.lastMessage(),mes);
        ASSERT_THROW(c.readMessage(2), std::out_of_range);
        ASSERT_THROW(c.readMessage(0), std::out_of_range);
    }

};