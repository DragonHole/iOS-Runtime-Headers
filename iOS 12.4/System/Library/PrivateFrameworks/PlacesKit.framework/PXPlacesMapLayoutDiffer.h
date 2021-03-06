/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPlacesMapLayoutResult;
@class NSMutableArray;

@interface PXPlacesMapLayoutDiffer : NSObject {

	NSMutableArray* _changes;
	id<PXPlacesMapLayoutResult> _sourceLayoutResult;
	id<PXPlacesMapLayoutResult> _targetLayoutResult;

}

@property (nonatomic,readonly) id<PXPlacesMapLayoutResult> sourceLayoutResult;              //@synthesize sourceLayoutResult=_sourceLayoutResult - In the implementation block
@property (nonatomic,readonly) id<PXPlacesMapLayoutResult> targetLayoutResult;              //@synthesize targetLayoutResult=_targetLayoutResult - In the implementation block
-(id<PXPlacesMapLayoutResult>)sourceLayoutResult;
-(id<PXPlacesMapLayoutResult>)targetLayoutResult;
-(void)_relateSourceLayoutItem:(id)arg1 withTargetLayoutItem:(id)arg2 ;
-(void)_addTargetLayoutItem:(id)arg1 ;
-(void)_removeSourceLayoutItem:(id)arg1 ;
-(void)_computeChanges;
-(id)initWithSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2 ;
-(id)computeChanges;
@end

