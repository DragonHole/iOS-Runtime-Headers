/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSXPCConnection.h>

@protocol MDIndexer;
@class NSMutableDictionary;

@interface CSSearchAgent : CSXPCConnection {

	id<MDIndexer> _indexer;
	NSMutableDictionary* _searchConnections;

}

@property (nonatomic,retain) NSMutableDictionary * searchConnections;              //@synthesize searchConnections=_searchConnections - In the implementation block
@property (nonatomic,retain) id<MDIndexer> indexer;                                //@synthesize indexer=_indexer - In the implementation block
+(id)searchAgent;
+(void)initialize;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg1 ;
-(BOOL)handleCommand:(const char*)arg1 info:(id)arg2 connection:(id)arg3 ;
-(BOOL)lostClientConnection:(id)arg1 error:(id)arg2 ;
-(BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1 ;
-(void)cancelQuery:(id)arg1 ;
-(id<MDIndexer>)indexer;
-(void)setIndexer:(id<MDIndexer>)arg1 ;
-(void)startQuery:(id)arg1 ;
-(void)setSearchConnections:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)searchConnections;
-(id)searchConnection:(id)arg1 ;
-(void)startSimpleQuery:(id)arg1 ;
-(void)cancelSimpleQuery:(id)arg1 ;
-(void)handleEngagement:(id)arg1 forConnection:(id)arg2 ;
@end
