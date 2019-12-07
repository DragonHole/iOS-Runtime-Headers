/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionView.h>

@class HUScrollGestureRecognitionResolver;

@interface HUQuickControlCollectionView : UICollectionView {

	HUScrollGestureRecognitionResolver* _scrollGestureResolver;

}

@property (nonatomic,readonly) HUScrollGestureRecognitionResolver * scrollGestureResolver;              //@synthesize scrollGestureResolver=_scrollGestureResolver - In the implementation block
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
-(HUScrollGestureRecognitionResolver *)scrollGestureResolver;
@end
