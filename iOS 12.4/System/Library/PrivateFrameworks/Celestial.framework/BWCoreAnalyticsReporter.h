/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BWCoreAnalyticsReporter : NSObject {

	NSObject*<OS_dispatch_queue> _coreAnalyticsDispatchQueue;

}
+(int)clientApplicationIDType:(id)arg1 ;
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)sendEvent:(id)arg1 ;
@end

