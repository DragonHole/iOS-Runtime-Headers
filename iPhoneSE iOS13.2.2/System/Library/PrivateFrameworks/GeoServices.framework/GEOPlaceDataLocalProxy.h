/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOPlaceDataProxy.h>

@class geo_reentrant_isolater, NSMapTable, NSMutableOrderedSet, _GEOPlaceDataPendingRequestManager, GEOPDPlaceCache, NSString;

@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy> {

	geo_reentrant_isolater* _accessIsolater;
	NSMapTable* _pendingRequests;
	NSMutableOrderedSet* _recentlySeenPlaceHashes;
	_GEOPlaceDataPendingRequestManager* _pendingRequestManager;
	GEOPDPlaceCache* _pdPlaceCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)clearCache;
-(void)cancelRequest:(id)arg1 ;
-(unsigned long long)shrinkBySizeSync:(unsigned long long)arg1 ;
-(void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(/*^block*/id)arg7 ;
-(void)requestComponentsFromNetwork:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(/*^block*/id)arg7 ;
-(void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 requesterHandler:(/*^block*/id)arg6 ;
-(void)fetchAllCacheEntriesWithRequesterHandler:(/*^block*/id)arg1 ;
-(void)trackPlaceData:(id)arg1 ;
-(void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 networkActivity:(/*^block*/id)arg7 requesterHandler:(/*^block*/id)arg8 ;
-(void)calculateFreeableSpaceWithHandler:(/*^block*/id)arg1 ;
-(void)shrinkBySize:(unsigned long long)arg1 finished:(/*^block*/id)arg2 ;
-(unsigned long long)calculateFreeableSpaceSync;
-(void)_callHistoryRecentsClearedObserver:(id)arg1 ;
-(void)_privacyAndLocationSettingsResetObserver:(id)arg1 ;
-(void)_requestIdentifiersFromNetwork:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 finished:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
-(void)startRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 finished:(/*^block*/id)arg6 networkActivity:(/*^block*/id)arg7 error:(/*^block*/id)arg8 ;
@end

