/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionView.h>

@interface MiroInteractiveCollectionView : UICollectionView {

	BOOL _supportsReordering;
	BOOL _checkedSupportsReordering;

}

@property (nonatomic,readonly) BOOL supportsReordering;                                   //@synthesize supportsReordering=_supportsReordering - In the implementation block
@property (assign,nonatomic) BOOL checkedSupportsReordering;                              //@synthesize checkedSupportsReordering=_checkedSupportsReordering - In the implementation block
@property (assign,nonatomic,__weak) id<MiroCollectionViewDelegate> delegate; 
-(BOOL)checkedSupportsReordering;
-(void)setCheckedSupportsReordering:(BOOL)arg1 ;
-(BOOL)supportsReordering;
-(BOOL)beginInteractiveMovementForItemAtIndexPath:(id)arg1 ;
-(void)cancelInteractiveMovement;
-(void)endInteractiveMovement;
@end

