/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface VUILibraryMediaCollectionViewModel : NSObject {

	NSArray* _seasonViewModels;
	NSDictionary* _seasonBySeasonIdentifier;
	NSDictionary* _episodeShelfViewControllerBySeasonIdentifier;
	NSDictionary* _productLockupViewBySeasonIdentifier;
	NSDictionary* _episodesBySeasonIdentifer;

}

@property (nonatomic,retain) NSArray * seasonViewModels;                                               //@synthesize seasonViewModels=_seasonViewModels - In the implementation block
@property (nonatomic,retain) NSDictionary * seasonBySeasonIdentifier;                                  //@synthesize seasonBySeasonIdentifier=_seasonBySeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * episodeShelfViewControllerBySeasonIdentifier;              //@synthesize episodeShelfViewControllerBySeasonIdentifier=_episodeShelfViewControllerBySeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * productLockupViewBySeasonIdentifier;                       //@synthesize productLockupViewBySeasonIdentifier=_productLockupViewBySeasonIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * episodesBySeasonIdentifer;                                 //@synthesize episodesBySeasonIdentifer=_episodesBySeasonIdentifer - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
-(BOOL)hasContent;
-(NSArray *)seasonViewModels;
-(NSDictionary *)productLockupViewBySeasonIdentifier;
-(NSDictionary *)episodeShelfViewControllerBySeasonIdentifier;
-(NSDictionary *)seasonBySeasonIdentifier;
-(NSDictionary *)episodesBySeasonIdentifer;
-(void)setSeasonViewModels:(NSArray *)arg1 ;
-(void)setSeasonBySeasonIdentifier:(NSDictionary *)arg1 ;
-(void)setProductLockupViewBySeasonIdentifier:(NSDictionary *)arg1 ;
-(void)setEpisodeShelfViewControllerBySeasonIdentifier:(NSDictionary *)arg1 ;
-(void)setEpisodesBySeasonIdentifer:(NSDictionary *)arg1 ;
@end

