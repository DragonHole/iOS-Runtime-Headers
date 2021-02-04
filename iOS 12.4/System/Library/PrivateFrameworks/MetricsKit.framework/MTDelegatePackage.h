/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTDelegatePackage <NSObject>
@property (nonatomic,readonly) id<MTConfigDelegate> configDelegate; 
@property (nonatomic,readonly) id<MTEventRecorderDelegate> eventRecorderDelegate; 
@property (nonatomic,readonly) id<MTEnvironmentDelegate> environmentDelegate; 
@required
-(id<MTConfigDelegate>)configDelegate;
-(id<MTEventRecorderDelegate>)eventRecorderDelegate;
-(id<MTEnvironmentDelegate>)environmentDelegate;

@end
