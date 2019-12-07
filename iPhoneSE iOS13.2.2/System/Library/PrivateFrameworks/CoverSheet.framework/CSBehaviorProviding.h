/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSBehaviorProviding <NSObject>
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@required
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;

@end
