/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoSkipThresholdObserving.h>

@protocol SVVideoSkipThreshold, SVVideoLoadingStateObserving;
@class NSString;

@interface SVVideoSkipThresholdObserver : NSObject <SVVideoSkipThresholdObserving> {

	BOOL _loading;
	/*^block*/id block;
	id<SVVideoSkipThreshold> _thresholdProvider;
	id<SVVideoLoadingStateObserving> _loadingStateObserver;

}

@property (nonatomic,readonly) id<SVVideoLoadingStateObserving> loadingStateObserver;              //@synthesize loadingStateObserver=_loadingStateObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SVVideoSkipThreshold> thresholdProvider;                         //@synthesize thresholdProvider=_thresholdProvider - In the implementation block
@property (nonatomic,readonly) BOOL loading;                                                       //@synthesize loading=_loading - In the implementation block
@property (setter=onChange:,nonatomic,copy) id block; 
-(void)onChange:(/*^block*/id)arg1 ;
-(id<SVVideoSkipThreshold>)thresholdProvider;
-(void)loadingCompletedWithThreshold:(double)arg1 ;
-(id<SVVideoLoadingStateObserving>)loadingStateObserver;
-(id)initWithLoadingStateObserver:(id)arg1 thresholdProvider:(id)arg2 ;
-(id)block;
-(BOOL)loading;
@end

