/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCConnection, NSString;

@interface MapsSuggestionsDonater : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _closeTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(void)_closeConnection;
-(BOOL)donateETA:(id)arg1 entry:(id)arg2 ;
-(BOOL)_openConnectionIfNecessary;
-(void)_initCloseTimerIfNecessary;
-(void)_scheduleCloseConnection;
-(void)_unscheduleCloseConnection;
-(id)init;
-(void)dealloc;
-(NSString *)uniqueName;
@end

