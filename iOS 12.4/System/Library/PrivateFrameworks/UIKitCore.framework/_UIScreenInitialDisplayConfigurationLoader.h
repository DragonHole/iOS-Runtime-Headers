/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, UISDisplayContext;

@interface _UIScreenInitialDisplayConfigurationLoader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	UISDisplayContext* _context;
	BOOL _hasRequestedPreload;

}

@property (nonatomic,readonly) UISDisplayContext * initialDisplayContext; 
+(id)sharedLoader;
-(UISDisplayContext *)initialDisplayContext;
-(void)_startPreloadInitialDisplayContext;
-(id)initialDisplayConfiguration;
@end

