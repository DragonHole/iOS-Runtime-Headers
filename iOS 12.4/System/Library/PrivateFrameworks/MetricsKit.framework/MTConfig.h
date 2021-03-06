/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>

@protocol MTConfigDelegate;
@class NSDictionary;

@interface MTConfig : MTObject {

	id<MTConfigDelegate> _delegate;
	long long _eventDataTimeout;
	NSDictionary* _debugSource;

}

@property (nonatomic,retain) NSDictionary * debugSource;                        //@synthesize debugSource=_debugSource - In the implementation block
@property (assign,nonatomic,__weak) id<MTConfigDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long eventDataTimeout;                        //@synthesize eventDataTimeout=_eventDataTimeout - In the implementation block
-(id)sources;
-(NSDictionary *)debugSource;
-(BOOL)_isEventDataTimeoutUnset;
-(id)configValueForKeyPath:(id)arg1 sources:(id)arg2 ;
-(void)setEventDataTimeout:(long long)arg1 ;
-(BOOL)disabledForSources:(id)arg1 ;
-(id)blacklistedEventsForSources:(id)arg1 ;
-(id)blacklistedFieldsForSources:(id)arg1 ;
-(id)deResFieldsForSources:(id)arg1 ;
-(long long)eventDataTimeout;
-(BOOL)metricsDisabledOrBlacklistedEvent:(id)arg1 sources:(id)arg2 ;
-(void)removeBlacklistedFields:(id)arg1 sources:(id)arg2 ;
-(void)applyDeRes:(id)arg1 sources:(id)arg2 ;
-(id)computeWithConfigSources:(/*^block*/id)arg1 ;
-(id)configValueForKeyPath:(id)arg1 default:(id)arg2 ;
-(void)setDebugSource:(NSDictionary *)arg1 ;
-(void)setDelegate:(id<MTConfigDelegate>)arg1 ;
-(id<MTConfigDelegate>)delegate;
@end

