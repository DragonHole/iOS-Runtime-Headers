/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface BBDismissalItem : NSObject {

	unsigned long long _feeds;
	NSDate* _expiration;

}

@property (nonatomic,readonly) unsigned long long feeds;              //@synthesize feeds=_feeds - In the implementation block
@property (nonatomic,readonly) NSDate * expiration;                   //@synthesize expiration=_expiration - In the implementation block
-(id)initWithFeeds:(unsigned long long)arg1 ;
-(void)addFeeds:(unsigned long long)arg1 ;
-(unsigned long long)feeds;
-(BOOL)hasExpired;
-(NSDate *)expiration;
-(id)description;
@end
