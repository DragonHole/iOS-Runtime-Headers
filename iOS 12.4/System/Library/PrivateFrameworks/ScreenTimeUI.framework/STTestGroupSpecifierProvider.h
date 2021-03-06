/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STUsageGroupSpecifierProvider.h>

@class NSTimer;

@interface STTestGroupSpecifierProvider : STUsageGroupSpecifierProvider {

	BOOL _isHidden;
	NSTimer* _timer;

}

@property (nonatomic,retain) NSTimer * timer;              //@synthesize timer=_timer - In the implementation block
-(void)setIsHidden:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isHidden;
-(void)timerFired:(id)arg1 ;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
@end

