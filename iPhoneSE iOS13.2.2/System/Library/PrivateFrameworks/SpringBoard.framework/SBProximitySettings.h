/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@interface SBProximitySettings : SBUISettings {

	double _initialBacklightDebounceDuration;
	double _subsequentBacklightDebounceDuration;

}

@property (assign,nonatomic) double initialBacklightDebounceDuration;                 //@synthesize initialBacklightDebounceDuration=_initialBacklightDebounceDuration - In the implementation block
@property (assign,nonatomic) double subsequentBacklightDebounceDuration;              //@synthesize subsequentBacklightDebounceDuration=_subsequentBacklightDebounceDuration - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(double)initialBacklightDebounceDuration;
-(double)subsequentBacklightDebounceDuration;
-(void)setInitialBacklightDebounceDuration:(double)arg1 ;
-(void)setSubsequentBacklightDebounceDuration:(double)arg1 ;
@end

