/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTileServerProxyDelegate, OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, GEOResourceManifestConfiguration, NSLocale;

@interface GEOTileServerProxy : NSObject {

	id<GEOTileServerProxyDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	GEOResourceManifestConfiguration* _manifestConfiguration;
	NSLocale* _locale;
	int _resourceNotificationToken;

}

@property (nonatomic,__weak,readonly) id<GEOTileServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                  //@synthesize delegateQueue=_delegateQueue - In the implementation block
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
-(void)dealloc;
-(id<GEOTileServerProxyDelegate>)delegate;
-(void)open;
-(void)close;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
@end
