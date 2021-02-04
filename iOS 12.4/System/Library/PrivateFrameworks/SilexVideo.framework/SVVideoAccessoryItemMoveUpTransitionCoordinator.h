/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoAccessoryItemTransitioning.h>

@class UIViewPropertyAnimator, NSString;

@interface SVVideoAccessoryItemMoveUpTransitionCoordinator : NSObject <SVVideoAccessoryItemTransitioning> {

	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,retain) UIViewPropertyAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateWithContext:(id)arg1 ;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(UIViewPropertyAnimator *)animator;
-(void)cancelTransition;
@end
