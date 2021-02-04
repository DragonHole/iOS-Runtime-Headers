/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;
@class PHAsset, PHAssetCollection;

@interface PGDefaultCollectionTitleGenerator : PGTitleGenerator {

	BOOL _debug;
	id<PGEventEnrichment> _collection;
	PHAsset* _keyAsset;
	PHAssetCollection* _curatedAssetCollection;

}

@property (nonatomic,readonly) PHAsset * keyAsset;                                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * curatedAssetCollection;              //@synthesize curatedAssetCollection=_curatedAssetCollection - In the implementation block
@property (nonatomic,readonly) id<PGEventEnrichment> collection;                        //@synthesize collection=_collection - In the implementation block
@property (assign,getter=isDebug,nonatomic) BOOL debug;                                 //@synthesize debug=_debug - In the implementation block
-(id<PGEventEnrichment>)collection;
-(PHAsset *)keyAsset;
-(BOOL)isDebug;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(PHAssetCollection *)curatedAssetCollection;
-(id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 ;
-(void)setDebug:(BOOL)arg1 ;
@end
