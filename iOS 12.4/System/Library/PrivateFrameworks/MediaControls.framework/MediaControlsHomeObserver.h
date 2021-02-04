/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeObserver.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>

@protocol OS_dispatch_queue, MediaControlsHomeObserverDelegate;
@class HMHomeManager, NSMutableSet, NSObject, NSString;

@interface MediaControlsHomeObserver : NSObject <HFHomeObserver, HFHomeManagerObserver> {

	HMHomeManager* _homeManager;
	NSMutableSet* _knownUIDs;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	id<MediaControlsHomeObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MediaControlsHomeObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_notifyDelegate;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)_updateUIDs;
-(BOOL)hasAccessoryWithUID:(id)arg1 ;
-(void)beginObserving;
-(void)stopObserving;
-(id)init;
-(void)setDelegate:(id<MediaControlsHomeObserverDelegate>)arg1 ;
-(id<MediaControlsHomeObserverDelegate>)delegate;
@end
