/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriContext.h>

@class NSDictionary, BBBulletin, UNNotification;

@interface SiriDirectActionContext : SiriContext {

	NSDictionary* _payload;
	BBBulletin* _bulletin;
	UNNotification* _notification;

}

@property (nonatomic,readonly) NSDictionary * payload;                     //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BBBulletin * bulletin;                      //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,readonly) UNNotification * notification;              //@synthesize notification=_notification - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UNNotification *)notification;
-(id)initWithPayload:(id)arg1 ;
-(id)bundleId;
-(NSDictionary *)payload;
-(id)initWithUNNotification:(id)arg1 ;
-(BBBulletin *)bulletin;
-(long long)directActionEvent;
-(id)initWithBBBulletin:(id)arg1 ;
-(BOOL)isMessagingDirectAction;
@end

