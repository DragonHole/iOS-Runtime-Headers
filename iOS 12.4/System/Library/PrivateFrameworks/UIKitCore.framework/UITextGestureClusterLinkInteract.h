/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextGestureCluster.h>

@interface UITextGestureClusterLinkInteract : UITextGestureCluster {

	BOOL _isTryingToHighlightLink;

}
-(id)initWithView:(id)arg1 ;
-(void)_resetForLink;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(void)cancelInteractionWithLink;
-(BOOL)cluster_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)smallDelayRecognizer:(id)arg1 ;
-(void)longDelayRecognizer:(id)arg1 ;
-(void)linkTapRecognizer:(id)arg1 ;
@end

