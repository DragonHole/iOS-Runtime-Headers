/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSXPCConnection;

@interface WLKPlaybackReporter : NSObject {

	NSXPCConnection* _xpcConnection;
	os_unfair_lock_s _xpcLock;

}
-(id)_connection;
-(void)_invalidationHandler;
-(id)init;
-(void)reportPlayback:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end
