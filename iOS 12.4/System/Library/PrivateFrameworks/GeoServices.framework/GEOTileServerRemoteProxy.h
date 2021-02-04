/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileServerProxy.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface GEOTileServerRemoteProxy : GEOTileServerProxy {

	NSObject*<OS_dispatch_queue> _connectionReplyQueue;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionSendIsolation;

}
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(id)initWithCacheLocation:(id)arg1 manifestConfiguration:(id)arg2 locale:(id)arg3 delegateQueue:(id)arg4 delegate:(id)arg5 ;
-(void)cancel:(const GEOTileKey*)arg1 ;
-(void)generateRequestedFromTileLoaderBeginSignpost:(unsigned long long)arg1 ;
-(void)generateRequestedFromTileLoaderEndSignpost:(unsigned long long)arg1 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 exclusive:(BOOL)arg2 ;
-(void)endPreloadSession;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 ;
-(void)calculateFreeableSize;
-(void)loadTiles:(id)arg1 priorities:(const unsigned*)arg2 hasAdditionalInfos:(const BOOL*)arg3 additionalInfos:(const SCD_Struct_GE24*)arg4 signpostIDs:(const unsigned long long*)arg5 reason:(unsigned char)arg6 options:(unsigned long long)arg7 client:(id)arg8 ;
-(void)flushPendingWrites;
-(BOOL)skipNetworkForKeysWhenPreloading:(id)arg1 ;
-(void)_handleEvent:(id)arg1 ;
-(void)_handleTile:(id)arg1 ;
-(void)_handleError:(id)arg1 ;
-(void)_handleNetworkBegan:(id)arg1 ;
-(void)_handleEditionUpgrade:(id)arg1 ;
-(BOOL)_sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)_sendMessage:(id)arg1 ;
-(void)dealloc;
-(void)open;
-(void)close;
@end
