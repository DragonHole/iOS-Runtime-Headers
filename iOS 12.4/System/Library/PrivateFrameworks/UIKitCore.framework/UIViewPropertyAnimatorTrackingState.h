/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface UIViewPropertyAnimatorTrackingState : NSObject {

	BOOL _startPaused;
	BOOL _scrubsLinearly;
	BOOL _userInteractionEnabled;
	BOOL _optimizationsEnabled;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSUUID * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL startPaused;                         //@synthesize startPaused=_startPaused - In the implementation block
@property (assign,nonatomic) BOOL scrubsLinearly;                      //@synthesize scrubsLinearly=_scrubsLinearly - In the implementation block
@property (assign,nonatomic) BOOL userInteractionEnabled;              //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (assign,nonatomic) BOOL optimizationsEnabled;                //@synthesize optimizationsEnabled=_optimizationsEnabled - In the implementation block
-(id)init;
-(NSUUID *)uuid;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)startPaused;
-(void)setStartPaused:(BOOL)arg1 ;
-(BOOL)scrubsLinearly;
-(void)setScrubsLinearly:(BOOL)arg1 ;
-(BOOL)userInteractionEnabled;
-(BOOL)optimizationsEnabled;
-(void)setOptimizationsEnabled:(BOOL)arg1 ;
@end
