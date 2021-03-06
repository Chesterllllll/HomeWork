#pragma once

#ifndef AUTH_H
#define AUTH_H
#include "user.h"
#include <QString>
#include <QMap>
#define MINUSERNAMELENGTH 4
#define MINPASSWORDLENGTH 6
#define UDBPATH "word_elem.db"
#define WDBPATH "words.txt"

// Serverside Auth
struct RawUserData {
    char username[33];
    char passwordmd5[33];
    char usertype;
    char tag[129];
    char name[33];
    int level;
    int exp;
    int puzzlepassed;
};

class User;
class Auth
{
private:
    QMap<QString, User*> mpUserName2User;
    QMap<QString, QString> mpUuid2UserName;
    QMap<QString, QString> mpUserName2Uuid;
    QStringList WordList;
    QString salt;
    User *getUserByUuid(QString uuid);
public:
    Auth();
    Auth(QString slt);
    bool loadDataBase(QString dbpath);
    QString login(QString username, QString password);
    int reg(QString username, QString password, char type);
    QString genmd5(const QString &username, const QString &password);
    bool saveDataBase(QString dbpath);
    bool loadWordList(QString dbpath);
    bool saveWordList(QString dbpath);
    User *getUser(QString uuid);
    QVector<User*> getUserList();
    int setTag(QString uuid, const QString &tag);
    int setName(QString uuid, const QString &name);
    int addWord(QString uuid, QString word);
    int finishChallenge(QString uuid, int difficulty, int score);
    int calcLevelP(int exp);
    int calcLevelD(int exp);
    QStringList const &getWordList();
    void logout(QString uuid);
    ~Auth();
};



#endif // AUTH_H
