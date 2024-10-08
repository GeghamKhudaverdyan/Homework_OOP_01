#ifndef MESSAGINGMANAGER_H
#define MESSAGINGMANAGER_H

#include <iostream>
#include <vector>

class Message;
class Conversation;

class MessagingManager {
public:
    virtual void sendMessage(Message* message) = 0;
    virtual void receiveMessage(Message* message) = 0;
    virtual std::vector<Message*> viewConversationHistory(Conversation* conversation) const = 0;
    virtual ~MessagingManager() = default   ;
};

#endif // MESSAGINGMANAGER_H