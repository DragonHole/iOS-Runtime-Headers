/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@class NSLock, NSMutableDictionary, REPredictedActionServer;

@interface RERecentActionManager : RESingleton {

	NSLock* _lock;
	NSMutableDictionary* _dateValues;
	REPredictedActionServer* _server;

}
-(id)lastPerformedDateForAction:(id)arg1 ;
-(unsigned long long)actionNumberOfTimesPeformedToday:(id)arg1 ;
-(BOOL)actionWasPerformedLocally:(id)arg1 ;
-(void)_handleRecentActionNotification:(id)arg1 ;
-(void)_storePerformAction:(id)arg1 date:(id)arg2 remote:(BOOL)arg3 ;
-(id)_dataForAction:(id)arg1 ;
-(void)didPerformAction:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

