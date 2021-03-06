/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WRReplyStoreInfo : NSObject {

	BOOL _supportsSmartReplies;
	unsigned long long _defaultCount;
	NSString* _defaultsDomain;
	NSString* _defaultsKey;
	NSString* _defaultsChangedNotificationName;

}

@property (nonatomic,readonly) unsigned long long defaultCount;                         //@synthesize defaultCount=_defaultCount - In the implementation block
@property (nonatomic,readonly) NSString * defaultsDomain;                               //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,readonly) NSString * defaultsKey;                                  //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,readonly) NSString * defaultsChangedNotificationName;              //@synthesize defaultsChangedNotificationName=_defaultsChangedNotificationName - In the implementation block
@property (nonatomic,readonly) BOOL supportsSmartReplies;                               //@synthesize supportsSmartReplies=_supportsSmartReplies - In the implementation block
+(id)infoForCategory:(unsigned long long)arg1 ;
-(NSString *)defaultsKey;
-(NSString *)defaultsChangedNotificationName;
-(BOOL)supportsSmartReplies;
-(unsigned long long)defaultCount;
-(NSString *)defaultsDomain;
@end

