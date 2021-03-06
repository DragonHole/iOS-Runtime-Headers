/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MCLNotificationCenterObserver : NSObject {

	BOOL _enabled;
	NSString* _notification;
	id _object;

}

@property (nonatomic,copy) NSString * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) id object;                          //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) BOOL enabled;                       //@synthesize enabled=_enabled - In the implementation block
-(void)setup;
-(void)setNotification:(NSString *)arg1 ;
-(void)observeNotification:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)object;
-(BOOL)enabled;
-(NSString *)notification;
-(void)setObject:(id)arg1 ;
@end

