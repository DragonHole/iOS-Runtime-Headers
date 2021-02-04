/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <SplashBoard/XBStatusBarSettings.h>

@interface XBMutableStatusBarSettings : XBStatusBarSettings

@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) long long style; 
@property (assign,getter=isBackgroundActivityEnabled,nonatomic) BOOL backgroundActivityEnabled; 
-(void)setBackgroundActivityEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
@end
