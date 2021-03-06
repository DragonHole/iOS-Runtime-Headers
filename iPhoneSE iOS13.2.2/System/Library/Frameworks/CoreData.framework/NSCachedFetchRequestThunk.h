/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLiteStatement;

@interface NSCachedFetchRequestThunk : NSObject {

	NSSQLiteStatement* _limitedStatement;
	NSSQLiteStatement* _unlimitedStatement;
	id _connection;

}

@property (nonatomic,retain) NSSQLiteStatement * limitedStatement;                //@synthesize limitedStatement=_limitedStatement - In the implementation block
@property (nonatomic,retain) NSSQLiteStatement * unlimitedStatement;              //@synthesize unlimitedStatement=_unlimitedStatement - In the implementation block
-(void)dealloc;
-(void)clearCaches;
-(id)initForConnection:(id)arg1 ;
-(NSSQLiteStatement *)limitedStatement;
-(NSSQLiteStatement *)unlimitedStatement;
-(void)setLimitedStatement:(NSSQLiteStatement *)arg1 ;
-(void)setUnlimitedStatement:(NSSQLiteStatement *)arg1 ;
@end

