//
//  DataBaseFile.h
//  01-数据持久化作业
//
//  Created by qingyun on 16/6/20.
//  Copyright © 2016年 QingYun. All rights reserved.
//
#import <Foundation/Foundation.h>
#ifndef DataBaseFile_h
#define DataBaseFile_h


//@property (nonatomic, strong) NSString *userName;    //用户名
//@property (nonatomic, strong) NSString *passWord;    //密码
//@property (nonatomic, strong) NSString *iconImage;   //头像
//@property (nonatomic, strong) NSString *nickName;    //昵称
//@property (nonatomic, strong) NSString *sex;         //性别
//@property (nonatomic) NSInteger height;              //身高
//@property (nonatomic) NSInteger weight;              //体重
//@property (nonatomic, strong) NSString *birthday;    //生日
//@property (nonatomic, strong) NSString *address;     //住址
//@property (nonatomic) NSInteger totalTime;          //累计时间
//@property (nonatomic) NSInteger totalDistance;      //累计距离
//@property (nonatomic) NSInteger totalCalorie;       //累计消耗
//@property (nonatomic) NSInteger bestScore;          //最佳成绩
//@property (nonatomic) NSInteger fastSpeed;          //最快速度
//@property (nonatomic) NSInteger longestDistance;    //最长距离
//@property (nonatomic) NSInteger longsetTime;        //最长时间
//@property (nonatomic) NSInteger halfwayTime;        //马拉松半程时间
//@property (nonatomic) NSInteger wholeTime;

//数据库名称
#define BaseFileName @"RunNote.db"
//创建表

#define createTabel @"create table if not exists RunNote(iconImage blob,nickName text,sex integer,height integer,weight integer, birthday text,address text,totalTime integer,totalDistance integer,totalCalorie integer,bestScore integer,fastSpeed integer,longestDistance integer,longsetTime integer,halfwayTime integer,wholeTime integer);"
//插入数据
#define INSERT_HOMELIST_SQL @"insert into RunNote values(:iconImage,:nickName,:sex,:height,:weight,:birthday,:address,:totalTime,:totalDistance,:totalCalorie,:bestScore,:fastSpeed,:longestDistance,:longsetTime,:halfwayTime,:wholeTime)"
//查询所有的数据
#define SELECT_HOMELIST_ALL @"select * from RunNote"

//删除数据
#define Delete_HOMELIST @"delete from RunNote"

#endif /* DataBaseFile_h */