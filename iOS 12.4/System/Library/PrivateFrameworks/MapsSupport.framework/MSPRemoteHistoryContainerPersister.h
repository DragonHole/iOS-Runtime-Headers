/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPContainerPersister.h>
#import <libobjc.A.dylib/MSPMapsPushDaemonProxyObserver.h>

@class NSUUID, NSString;

@interface MSPRemoteHistoryContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver> {

	NSUUID* _lastOperationIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(void)favoritesDidChange;
-(void)historyDidChange;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3 ;
-(void)_reportErrorIfAny:(id)arg1 purpose:(id)arg2 ;
-(void)fetchStateSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchContentsWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end
