/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFAnalyticsObserverConnection, NSMutableDictionary;

@interface STAnalyticsObserver : NSObject {

	AFAnalyticsObserverConnection* _connection;
	NSMutableDictionary* _observerActions;

}
+(id)sharedObserver;
-(void)addObserverActionForType:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
@end
