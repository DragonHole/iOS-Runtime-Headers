/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTTransitionScheduler
@property (nonatomic,copy,readonly) id eventHandler; 
@required
-(id)eventHandler;
-(id)initWithEventHandler:(/*^block*/id)arg1;
-(void)scheduleEvent;
-(void)didCompleteEvent;
-(void)stop;

@end
