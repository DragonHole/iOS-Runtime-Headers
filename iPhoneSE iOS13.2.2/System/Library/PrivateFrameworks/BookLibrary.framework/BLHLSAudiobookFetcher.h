/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession;

@interface BLHLSAudiobookFetcher : NSObject {

	NSURLSession* _session;

}

@property (nonatomic,readonly) NSURLSession * session;              //@synthesize session=_session - In the implementation block
+(id)preferredStreamFromMasterPlaylist:(id)arg1 ;
-(NSURLSession *)session;
-(id)initCanUseCellularData:(BOOL)arg1 powerRequired:(BOOL)arg2 ;
-(id)setupDownloadTaskForFetchingMasterPlaylistAndSelectingStreamFromMasterPlaylistURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

