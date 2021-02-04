/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSIndexSet, NSArray, NSMutableIndexSet, CADisplayLink, NSMutableDictionary;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout {

	BOOL _holdingBoundsInvalidation;
	BOOL _useInitialLayoutAttributesForRotation;
	BOOL _isResting;
	BOOL _easingUp;
	BOOL _invalidatedViaBoundsChange;
	BOOL _hasLoadMore;
	BOOL _useFastQuanta;
	BOOL _coalesceInvalidations;
	BOOL _sizeCategoryIsAccessibilitySizeCategory;
	double _anchorYPosition;
	NSIndexSet* _indicesOfChatItemsToBeRemovedWithoutFading;
	NSIndexSet* _indicesOfChatItemsToBeInsertedWithoutFading;
	NSArray* _layoutAttributes;
	NSArray* _associatedLayoutAttributes;
	NSArray* _decorationLayoutAttributes;
	NSArray* _oldAssociatedLayoutAttributes;
	NSMutableIndexSet* _insertedAssociatedLayoutAttributes;
	CADisplayLink* _displayLink;
	double _prevTimestamp;
	NSMutableDictionary* _initialParentLayoutAttributes;
	NSMutableDictionary* _finalParentVerticalOffsets;
	CGPoint _targetContentOffset;
	CGSize _contentSize;
	CGRect _visibleBounds;

}

@property (nonatomic,copy) NSArray * layoutAttributes;                                                                                 //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * associatedLayoutAttributes;                                                                       //@synthesize associatedLayoutAttributes=_associatedLayoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * decorationLayoutAttributes;                                                                       //@synthesize decorationLayoutAttributes=_decorationLayoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * oldAssociatedLayoutAttributes;                                                                    //@synthesize oldAssociatedLayoutAttributes=_oldAssociatedLayoutAttributes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * insertedAssociatedLayoutAttributes;                                                   //@synthesize insertedAssociatedLayoutAttributes=_insertedAssociatedLayoutAttributes - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                                              //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                                                                                     //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (assign,nonatomic) double prevTimestamp;                                                                                     //@synthesize prevTimestamp=_prevTimestamp - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) BOOL easingUp;                                                                                            //@synthesize easingUp=_easingUp - In the implementation block
@property (assign,nonatomic) BOOL isResting;                                                                                           //@synthesize isResting=_isResting - In the implementation block
@property (assign,nonatomic) BOOL invalidatedViaBoundsChange;                                                                          //@synthesize invalidatedViaBoundsChange=_invalidatedViaBoundsChange - In the implementation block
@property (assign,nonatomic) BOOL hasLoadMore;                                                                                         //@synthesize hasLoadMore=_hasLoadMore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * initialParentLayoutAttributes;                                                      //@synthesize initialParentLayoutAttributes=_initialParentLayoutAttributes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * finalParentVerticalOffsets;                                                         //@synthesize finalParentVerticalOffsets=_finalParentVerticalOffsets - In the implementation block
@property (assign,nonatomic) BOOL useFastQuanta;                                                                                       //@synthesize useFastQuanta=_useFastQuanta - In the implementation block
@property (assign,nonatomic) BOOL coalesceInvalidations;                                                                               //@synthesize coalesceInvalidations=_coalesceInvalidations - In the implementation block
@property (assign,nonatomic) BOOL sizeCategoryIsAccessibilitySizeCategory;                                                             //@synthesize sizeCategoryIsAccessibilitySizeCategory=_sizeCategoryIsAccessibilitySizeCategory - In the implementation block
@property (assign,nonatomic) double anchorYPosition;                                                                                   //@synthesize anchorYPosition=_anchorYPosition - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                                                              //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,getter=isHoldingBoundsInvalidation,nonatomic) BOOL holdingBoundsInvalidation;                                        //@synthesize holdingBoundsInvalidation=_holdingBoundsInvalidation - In the implementation block
@property (assign,getter=isUsingInitialLayoutAttributesForRotation,nonatomic) BOOL useInitialLayoutAttributesForRotation;              //@synthesize useInitialLayoutAttributesForRotation=_useInitialLayoutAttributesForRotation - In the implementation block
@property (nonatomic,retain) NSIndexSet * indicesOfChatItemsToBeRemovedWithoutFading;                                                  //@synthesize indicesOfChatItemsToBeRemovedWithoutFading=_indicesOfChatItemsToBeRemovedWithoutFading - In the implementation block
@property (nonatomic,retain) NSIndexSet * indicesOfChatItemsToBeInsertedWithoutFading;                                                 //@synthesize indicesOfChatItemsToBeInsertedWithoutFading=_indicesOfChatItemsToBeInsertedWithoutFading - In the implementation block
+(long long)translateLayoutIndexToEffectIndex:(long long)arg1 ;
+(Class)layoutAttributesClass;
-(void)setUseInitialLayoutAttributesForRotation:(BOOL)arg1 ;
-(void)setAnchorYPosition:(double)arg1 ;
-(long long)effectIndexForDecorationViewAtIndex:(long long)arg1 ;
-(void)setHoldingBoundsInvalidation:(BOOL)arg1 ;
-(void)setIndicesOfChatItemsToBeRemovedWithoutFading:(NSIndexSet *)arg1 ;
-(void)setIndicesOfChatItemsToBeInsertedWithoutFading:(NSIndexSet *)arg1 ;
-(void)setInitialIndex:(unsigned long long)arg1 forParentOfAssociatedItemInsertedAtIndex:(unsigned long long)arg2 ;
-(void)setVerticalOffset:(double)arg1 forParentOfAssociatedItemDeletedAtIndex:(unsigned long long)arg2 ;
-(void)clearParentInitialIndexesAndFinalOffsets;
-(void)updateAssociatedLayoutAttributesIfNecessary;
-(NSArray *)decorationLayoutAttributes;
-(void)setIsResting:(BOOL)arg1 ;
-(void)sizeCategoryDidChange:(id)arg1 ;
-(void)reduceMotionSettingChanged:(id)arg1 ;
-(BOOL)hasLoadMore;
-(void)prepareLayoutForRotisserieScrolling;
-(void)updateContentSize;
-(double)prevTimestamp;
-(void)setEasingUp:(BOOL)arg1 ;
-(void)setPrevTimestamp:(double)arg1 ;
-(BOOL)isUsingInitialLayoutAttributesForRotation;
-(NSArray *)associatedLayoutAttributes;
-(NSMutableIndexSet *)insertedAssociatedLayoutAttributes;
-(NSIndexSet *)indicesOfChatItemsToBeInsertedWithoutFading;
-(NSIndexSet *)indicesOfChatItemsToBeRemovedWithoutFading;
-(BOOL)isHoldingBoundsInvalidation;
-(void)setOldAssociatedLayoutAttributes:(NSArray *)arg1 ;
-(void)setAssociatedLayoutAttributes:(NSArray *)arg1 ;
-(void)setDecorationLayoutAttributes:(NSArray *)arg1 ;
-(void)setHasLoadMore:(BOOL)arg1 ;
-(NSArray *)oldAssociatedLayoutAttributes;
-(void)setInsertedAssociatedLayoutAttributes:(NSMutableIndexSet *)arg1 ;
-(void)updateFrames;
-(double)anchorYPosition;
-(double)bezierPointForPercentage:(double)arg1 anchor1:(double)arg2 anchor2:(double)arg3 control1:(double)arg4 control2:(double)arg5 ;
-(void)updateAttributesForAnchorYChangeWithAttributes:(id)arg1 ;
-(void)updateAttributesForTargetContentOffsetChangeWithAttributes:(id)arg1 ;
-(void)_invalidateLayoutForDisplayLink;
-(BOOL)sizeCategoryIsAccessibilitySizeCategory;
-(void)setSizeCategoryIsAccessibilitySizeCategory:(BOOL)arg1 ;
-(BOOL)easingUp;
-(BOOL)invalidatedViaBoundsChange;
-(void)setInvalidatedViaBoundsChange:(BOOL)arg1 ;
-(NSMutableDictionary *)initialParentLayoutAttributes;
-(void)setInitialParentLayoutAttributes:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)finalParentVerticalOffsets;
-(void)setFinalParentVerticalOffsets:(NSMutableDictionary *)arg1 ;
-(BOOL)useFastQuanta;
-(void)setUseFastQuanta:(BOOL)arg1 ;
-(BOOL)coalesceInvalidations;
-(void)setCoalesceInvalidations:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(CGRect)visibleBounds;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)reloadData;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)setLayoutAttributes:(NSArray *)arg1 ;
-(NSArray *)layoutAttributes;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
-(BOOL)isResting;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(void)invalidateDisplayLink;
-(void)_dealloc;
@end
