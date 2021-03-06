/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngineUI/REUpNextCollectionViewFlowLayout.h>

@class REUpNextCollectionViewFlowLayoutAttributes, NSDictionary, NSIndexPath;

@interface REUpNextCollectionViewSingleItemFlowLayout : REUpNextCollectionViewFlowLayout {

	REUpNextCollectionViewFlowLayoutAttributes* _preferedCellAttributes;
	NSDictionary* _allAttributes;
	NSIndexPath* _preferedIndexPath;

}

@property (nonatomic,retain) NSIndexPath * preferedIndexPath;              //@synthesize preferedIndexPath=_preferedIndexPath - In the implementation block
-(NSIndexPath *)preferedIndexPath;
-(void)setPreferedIndexPath:(NSIndexPath *)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
@end

