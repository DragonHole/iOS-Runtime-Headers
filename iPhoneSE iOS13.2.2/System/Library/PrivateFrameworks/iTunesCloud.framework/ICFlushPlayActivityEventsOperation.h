/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, SSVPlayActivityController;

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	SSVPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) SSVPlayActivityController * playActivityController;              //@synthesize playActivityController=_playActivityController - In the implementation block
-(id)init;
-(void)execute;
-(id)initWithPlayActivityController:(id)arg1 ;
-(SSVPlayActivityController *)playActivityController;
@end

