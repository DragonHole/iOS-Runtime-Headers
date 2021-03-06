/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NMSModelRecommendationsLibraryRequest;

@interface NMSModelRecommendationsLibraryRequestOperation : MPAsyncOperation {

	NMSModelRecommendationsLibraryRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NMSModelRecommendationsLibraryRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                           //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setRequest:(NMSModelRecommendationsLibraryRequest *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
-(void)_requestPlaylistsEntries;
-(void)_requestSongs;
-(void)_requestAlbums;
-(void)_requestPlaylists;
-(id)_mpIdentifierSetsFromStringIdentifiers:(id)arg1 ;
-(void)_requestContainerWithClass:(Class)arg1 ;
-(id)_modelObjectWithCachedArtworkFromModelObject:(id)arg1 ;
-(NMSModelRecommendationsLibraryRequest *)request;
@end

