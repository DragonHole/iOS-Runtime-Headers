/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPArtworkDataSource;
@class MPArtworkCatalog;

@interface _VUIMediaPlayerImageLoaderOperationSet : NSObject {

	id<MPArtworkDataSource> _dataSource;
	MPArtworkCatalog* _artworkCatalog;

}

@property (nonatomic,retain) id<MPArtworkDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * artworkCatalog;               //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
-(id<MPArtworkDataSource>)dataSource;
-(void)setDataSource:(id<MPArtworkDataSource>)arg1 ;
-(MPArtworkCatalog *)artworkCatalog;
-(void)setArtworkCatalog:(MPArtworkCatalog *)arg1 ;
@end

