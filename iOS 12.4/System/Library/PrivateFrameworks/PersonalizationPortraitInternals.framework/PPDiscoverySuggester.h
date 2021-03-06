/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PPContactSuggester.h>

@protocol OS_dispatch_queue;
@class NSObject, _PASLock;

@interface PPDiscoverySuggester : PPContactSuggester {

	NSObject*<OS_dispatch_queue> _queue;
	_PASLock* _data;
	BOOL _enabled;

}
-(void)clearCaches;
-(void)_addContacts:(id)arg1 ;
-(void)_removeContacts:(id)arg1 ;
-(void)undiscoverEvent:(id)arg1 store:(id)arg2 ;
-(void)_undiscoverEvent:(id)arg1 identifier:(id)arg2 store:(id)arg3 ;
-(void)discoverEvent:(id)arg1 store:(id)arg2 ;
-(void)_discoveredEvent:(id)arg1 identifier:(id)arg2 store:(id)arg3 ;
-(void)discoveredRecipients:(id)arg1 ;
-(void)_discoveredRecipient:(id)arg1 ;
-(void)waitForDiscoveriesToProcess;
-(void)stopDiscovering;
-(void)resumeDiscovering;
-(id)init;
@end

