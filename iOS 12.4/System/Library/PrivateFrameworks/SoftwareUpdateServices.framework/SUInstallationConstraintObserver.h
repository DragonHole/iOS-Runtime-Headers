/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SUComposedInstallationConstraintMonitor.h>
#import <libobjc.A.dylib/SUInvalidatable.h>

@protocol SUInstallationConstraintObserverDelegate;
@class SUDownload, NSMapTable, NSString;

@interface SUInstallationConstraintObserver : SUComposedInstallationConstraintMonitor <SUInvalidatable> {

	id<SUInstallationConstraintObserverDelegate> _delegate;
	SUDownload* _download;
	NSMapTable* _queue_observerBlockTokens;
	BOOL _queue_invalidated;
	unsigned long long _queue_tokenCount;

}

@property (assign,nonatomic) id<SUInstallationConstraintObserverDelegate> delegate; 
@property (nonatomic,retain,readonly) SUDownload * download;                                     //@synthesize download=_download - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SUDownload *)download;
-(id)initWithDownload:(id)arg1 ;
-(void)_removeToken:(id)arg1 ;
-(void)invalidateWithError:(id)arg1 ;
-(void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2 ;
-(id)initWithDownload:(id)arg1 queue:(id)arg2 constraints:(id)arg3 ;
-(id)registerObserverBlock:(/*^block*/id)arg1 ;
-(BOOL)_hasAnyBlockObservers;
-(id)init;
-(void)dealloc;
-(void)invalidate;
@end

