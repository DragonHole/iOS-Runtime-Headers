/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAUserNotificationInfo : NSObject {

	/*^block*/id _handler;
	NSString* _groupIdentifier;

}

@property (nonatomic,copy) NSString * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(/*^block*/id)handler;
-(void)setHandler:(/*^block*/id)arg1 ;
@end

